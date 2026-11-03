#include "m2c.h"

extern void *data_ov000_02051548;
extern void *data_0203673c;

s32 GetGameLevelMode(void);
void SetDropItemBySetNo(s32 n);
void SetShisetuLevel(s32 a, s32 b);
void SetLogicNoForShipIn(s32 a, s32 b);

void func_ov019_020d01c0(void) {
    u8 *slot;

    switch (GetGameLevelMode()) {
        case 0:
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= ~0x3FFF;
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= 0xF0003FFF;
            SetDropItemBySetNo(0xE);
            break;
        case 1:
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= ~0x3FFF;
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= 0xF0003FFF;
            SetDropItemBySetNo(0x28);
            break;
        case 2:
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= ~0x3FFF;
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= 0xF0003FFF;
            break;
        case 3:
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= ~0x3FFF;
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= 0xF0003FFF;
            break;
        default:
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= ~0x3FFF;
            slot =
                *(u8 **) ((u8 *) data_0203673c + 0x28) + ((*(u32 *) ((u8 *) data_ov000_02051548 + 0x14) << 20) >> 28) * 0x2D0;
            *(u32 *) (slot + 0x210) &= 0xF0003FFF;
            break;
    }
    SetShisetuLevel(0, 3);
    SetShisetuLevel(1, 3);
    SetShisetuLevel(2, 2);
    SetShisetuLevel(3, 3);
    SetShisetuLevel(4, 1);
    SetShisetuLevel(5, 1);
    SetShisetuLevel(6, 1);
    SetShisetuLevel(7, 3);
    SetShisetuLevel(0xC, 1);
    SetShisetuLevel(0xA, 1);
    SetShisetuLevel(0xF, 1);
    SetShisetuLevel(8, 1);
    SetShisetuLevel(0xB, 0);
    SetShisetuLevel(0xD, 0);
    SetShisetuLevel(0xE, 0);
    SetShisetuLevel(9, 0);
    SetLogicNoForShipIn(1, 0);
    *(s32 *) ((u8 *) data_ov000_02051548 + 0x90) = 0xD;
}
