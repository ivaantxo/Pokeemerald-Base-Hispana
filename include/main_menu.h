#ifndef GUARD_MAIN_MENU_H
#define GUARD_MAIN_MENU_H

void CB2_InitMainMenu(void);
void CreateYesNoMenuParameterized(u8 x, u8 y, u16 baseTileNum, u16 baseBlock, u8 yesNoPalNum, u8 winPalNum);
void NewGameBirchSpeech_SetDefaultPlayerName(u8);
void NewGameBirchSpeech_ClearWindow(u8);

#define MAIN_MENU_BORDER_TILE   0x1D5
#define BIRCH_DLG_BASE_TILE_NUM 0xFC

#endif // GUARD_MAIN_MENU_H
