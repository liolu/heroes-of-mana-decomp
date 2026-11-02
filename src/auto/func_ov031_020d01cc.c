#include "m2c.h"

extern s32 *data_ov000_02051548;
extern s32 *data_0203673c;

s32 GetGameLevelMode(void);
void SetDropItemBySetNo(s32 a);
void SetShisetuLevel(s32 a, s32 b);
void SetLogicNoForShipIn(s32 a, s32 b);

void func_ov031_020d01cc(void) {
    s32 mode;
    u32 *e;

    mode = GetGameLevelMode();
    switch (mode) {
        case 0:
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xFFFFC000) | 5;
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xF0003FFF) | 0x2C000;
            SetDropItemBySetNo(0x1A);
            break;
        case 1:
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xFFFFC000) | 1;
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xF0003FFF) | 0x10000;
            SetDropItemBySetNo(0x34);
            break;
        case 2:
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xFFFFC000) | 1;
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xF0003FFF) | 0x8000;
            break;
        case 3:
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xFFFFC000) | 1;
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = *e & 0xF0003FFF;
            break;
        default:
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xFFFFC000) | 5;
            e  = (u32 *) ((u8 *) data_0203673c[10] + (((u32) (data_ov000_02051548[5] << 0x14)) >> 0x1c) * 0x2D0 + 0x210);
            *e = (*e & 0xF0003FFF) | 0x2C000;
            break;
    }
    SetShisetuLevel(0, 6);
    SetShisetuLevel(1, 5);
    SetShisetuLevel(2, 5);
    SetShisetuLevel(3, 5);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 3);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 4);
    SetShisetuLevel(0xC, 1);
    SetShisetuLevel(0xA, 1);
    SetShisetuLevel(0xF, 1);
    SetShisetuLevel(8, 1);
    SetShisetuLevel(0xB, 1);
    SetShisetuLevel(0xD, 1);
    SetShisetuLevel(0xE, 1);
    SetShisetuLevel(9, 1);
    SetLogicNoForShipIn(1, 0);
    data_ov000_02051548[0x90 / 4] = 0x19;
}
