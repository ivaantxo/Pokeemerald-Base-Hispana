from PIL import Image
import os

ROOT_PATH = './../graphics/pokemon'
FILENAME = 'overworld.png'

def repositionImg(imagePath):
    # Abrir la imagen original y asegurar que está en modo 'P' para usar su paleta
    img = Image.open(imagePath).convert("P", palette=Image.ADAPTIVE, colors=16)
    
    # Obtener la paleta original
    original_palette = img.getpalette()

    # Dimensiones de la imagen
    img_width, img_height = img.size
    # Tamaño de los cuadros (32x32 por lo que parece)
    frame_size = img_height

    # Crear una nueva imagen vacía del mismo tamaño para el resultado
    new_img = Image.new('P', (img_width, img_height))
    new_img.putpalette(original_palette)  # Aplicar la paleta original a la nueva imagen

    # Recorrer la imagen por cada cuadro de 32x32
    for x in range(0, img_width, frame_size):
        for y in range(0, img_height, frame_size):
            # Recortar el cuadro de 32x32
            frame = img.crop((x, y, x + frame_size, y + frame_size))
            pixelColor0 = frame.getpixel((0, 0))

            # Inicializar la variable para encontrar la fila más baja con píxeles no blancos o negros
            lowest_y = -1

            for j in range(frame_size):
                for i in range(frame_size):
                    pixelColor = frame.getpixel((i, j))
                    # Si el píxel no es completamente blanco o negro (comparado con la esquina superior izquierda)
                    if pixelColor0 != pixelColor:
                        lowest_y = max(lowest_y, j)

            if lowest_y >= 0:
                # Desplazar el cuadro hacia abajo
                offset = frame_size - lowest_y - 1
                new_frame = Image.new('P', (frame_size, frame_size), pixelColor0)
                new_frame.putpalette(original_palette)  # Aplicar la misma paleta
                new_frame.paste(frame, (0, offset))

                # Pegar el cuadro modificado en la nueva imagen
                new_img.paste(new_frame, (x, y))
            else:
                # Si todos los píxeles son iguales, pegar el cuadro original
                new_img.paste(frame, (x, y))

    # Guardar la nueva imagen con la misma paleta original
    new_img.save(imagePath)

def readTxtMon():
    with open('monFlotantes.txt', 'r') as file:
        pokemon_list = file.read().splitlines()

    return pokemon_list

def searchOnDirectory(path, banMonList):
    resultList = []

    for root, dirs, files in os.walk(ROOT_PATH):
        # print(f"Directorio actual: {root}")
        # print(f"Subdirectorios: {dirs}")
        # print(f"Archivos: {files}")
        # print("-------------")
        relative_path = os.path.relpath(root, ROOT_PATH)

        if relative_path in banMonList:
            print("❌ "+relative_path)
            resultList.append("❌ "+relative_path)
            continue

        if FILENAME in files:
            print("✔️ "+ relative_path)
            resultList.append("✔️ "+ relative_path)
            repositionImg( os.path.join(root, FILENAME))

    writeOnTxt(resultList)
            
def writeOnTxt(list):
    with open('result.txt', 'w') as file:
        for elemento in list:
            file.write(elemento + '\n')


def init():
    banMonList = readTxtMon()
    searchOnDirectory(ROOT_PATH, banMonList)


init()