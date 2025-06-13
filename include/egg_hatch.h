#ifndef GUARD_EGG_HATCH_H
#define GUARD_EGG_HATCH_H

void ScriptHatchMon(void);
bool8 CheckDaycareMonReceivedMail(void);
void EggHatch(void);
u8 GetEggCyclesToSubtract(void);
u16 CountPartyAliveNonEggMons(void);

// Egg palette tables
extern const struct SpritePalette gEgg1PaletteTable[];
extern const struct SpritePalette gEgg2PaletteTable[];

#endif // GUARD_EGG_HATCH_H
