#!/usr/bin/env python3
""" Extract sprites from HGSS follower spritesheets. """
import os.path
from os.path import join as joinp
import subprocess
import sys
import shutil
from glob import glob

import png
from tqdm import tqdm


def stack_sprite(name, path):
    frames = [joinp(path, 'down', name), joinp(path, 'down', 'frame2', name),
              joinp(path, 'up', name), joinp(path, 'up', 'frame2', name),
              joinp(path, 'left', name), joinp(path, 'left', 'frame2', name)]
    output = joinp(path, name)
    subprocess.run(['convert'] + frames + ['+append', output], check=True)
    print(f'Stacked {output}')

def closest_color(c, palette):
    min_d = float('inf')
    best = 0
    r1, g1, b1 = c
    for i, (r2, g2, b2) in enumerate(palette[1:], 1):
        # Color diff from https://stackoverflow.com/questions/1847092/given-an-rgb-value-what-would-be-the-best-way-to-find-the-closest-match-in-the-d
        d = ((r2-r1)*0.30)**2 + ((g2-g1)*0.59)**2 + ((b2-b1)*0.11)**2
        if d < min_d:
            min_d = d
            best = i
    return best

def apply_palette(palette_file, input_file, output_file):  # Apply one file's palette to another
    plt = png.Reader(palette_file)
    plt.read()
    target_palette = tuple(c[:3] for c in plt.palette())
    inp = png.Reader(input_file)
    w, h, rows, info = inp.read()
    src_palette = tuple(c[:3] for c in inp.palette())
    new_rows = [[closest_color(src_palette[c][:3], target_palette) if c else 0 for c in row] for row in rows]
    with open(output_file, 'wb') as f:
        w = png.Writer(width=w, height=h, bitdepth=4, palette=target_palette)
        w.write(f, new_rows)

# Sprites from https://veekun.com/dex/downloads

def apply_front_palettes(ow_dir, project_root=''):
    mon_graphics = joinp(project_root, 'graphics', 'pokemon')
    t = tqdm(sorted(glob(joinp(ow_dir, '*.png'))))
    spaces = 0
    for path in t:
        name, _ = os.path.splitext(os.path.basename(path))
        spaces = min(max(len(name), spaces), 10)
        t.set_description(name + ' '*(spaces-len(name)))
        output_path = joinp(project_root, 'graphics', 'object_events', 'pics', 'pokemon', f'{name}.png')
        if 'unown' in name:
            palette_path = joinp(mon_graphics, 'unown', 'a', 'anim_front.png')
        elif name == 'castform':
            palette_path = joinp(mon_graphics, name, 'anim_front_normal_form.png')
        else:
            palette_path = joinp(mon_graphics, name, 'anim_front.png')
        try:
            apply_palette(palette_path, path, output_path)
        except Exception as e:
            t.write(f'{name}: {e.__class__.__name__}: {e}', file=sys.stderr)

# Apply front palettes to pokemon icons
def apply_front_icon_palette(icon_dir, root=''):
    mon_graphics = joinp(root, 'graphics', 'pokemon')
    t = tqdm(sorted(glob(joinp(icon_dir, '*.png'))))
    spaces = 0
    for path in t:
        name, _ = os.path.splitext(os.path.basename(path))
        spaces = min(max(len(name), spaces), 10)
        t.set_description(name + ' '*(spaces-len(name)))
        if 'unown' in name:
            letter = 'a' if name == 'unown' else name.split('_')[-1]
            if letter in ('exclamation', 'question'):
                letter += '_mark'
            palette_path = joinp(mon_graphics, 'unown', 'a', 'anim_front.png')
            output_path = joinp(root, 'graphics', 'pokemon', 'unown', letter, 'icon.png')
        elif name == 'deoxys_speed':
            palette_path = joinp(mon_graphics, 'deoxys', 'anim_front.png')
            output_path = joinp(root, 'graphics', 'pokemon', 'deoxys', 'icon_speed.png')
        elif name == 'castform':
            palette_path = joinp(mon_graphics, name, 'anim_front_normal_form.png')
            output_path = joinp(root, 'graphics', 'pokemon', name, 'icon.png')
        else:
            palette_path = joinp(mon_graphics, name, 'anim_front.png')
            output_path = joinp(root, 'graphics', 'pokemon', name, 'icon.png')
        try:
            apply_palette(palette_path, path, output_path)
            shutil.copy(output_path, joinp(icon_dir, '..', 'vanilla', f'{name}.png'))
        except Exception as e:
            t.write(f'{name}: {e.__class__.__name__}: {e}', file=sys.stderr)

# Resize pokesprite icons from https://github.com/msikma/pokesprite/tree/master/icons/pokemon/regular
# Extracts and stacks icons in a paletted form ready to be re-paletted into graphics/
def resize_icons(icon_dir, root=''):
    t = tqdm(sorted(glob(joinp(icon_dir, '*.png'))))
    for path in t:
        name, ext = os.path.splitext(os.path.basename(path))
        name = name.replace('-', '_')  # Rewrite Unown name
        if 'unown' in name:
            palette_path = joinp('graphics', 'pokemon', 'unown', 'a', 'anim_front.png')
        elif name == 'deoxys_speed':
            palette_path = joinp('graphics', 'pokemon', 'deoxys', 'anim_front.png')
        else:
            palette_path = joinp('graphics', 'pokemon', name, 'anim_front.png')
        if not os.path.isfile(palette_path):
            t.write(f'{name} not found')
            continue
        front = png.Reader(palette_path)
        front.read()
        target_palette = tuple(c[:3] for c in front.palette())
        r, g, b = target_palette[0]
        color = f'rgb({r},{g},{b})'
        t.set_description(name)
        try:
            output_path = joinp(icon_dir, 'resized', name + ext)
            # Remove palette at first, to get the right background color
            subprocess.run(['magick', 'convert', path, '-define', 'png:color-type=2',
                            '-background', color, '-alpha', 'remove', '-compose', 'Copy',
                            '-gravity', 'center', '-extent', '32x32',
                            output_path], check=True, encoding='utf-8')
            subprocess.run(['magick', 'convert', output_path, output_path, '-define', 'png:color-type=3',
                            '-append', output_path],
                           check=True, encoding='utf-8')
        except Exception as e:
            t.write(f'{name}: {e.__class__.__name__}: {e} {e.stderr}', file=sys.stderr)

def gba_color(color, drop_bits=3):
    gba_channels = []
    for c in color:
        high, low = (c >> drop_bits) << drop_bits, c & (-1 + 2**drop_bits)
        if low >= 2**(drop_bits-1):  # Round up
            high = min(0xFF, high + 2**drop_bits)
        gba_channels.append(high)
    return tuple(gba_channels)

def detect_colors(icon_dir):
    t = tqdm(sorted(glob(joinp(icon_dir, '*.png'))))
    all_colors = set()
    name_map = {}
    for path in t:
        name, ext = os.path.splitext(os.path.basename(path))
        inp = png.Reader(path)
        w, h, rows, info = inp.read()
        i = 0
        path_colors = set()
        for row in rows:
            for color in zip(*[iter(row)] * 3):
                path_colors.add(gba_color(color))

        all_colors |= path_colors
        t.write(f'{name:10s}: {len(path_colors):02d} colors, {len(all_colors):04d} total')



if __name__ == '__main__':
    # apply_front_palettes('overworld')
    # resize_icons('icons')
    apply_front_icon_palette(joinp('icons', 'resized'))
