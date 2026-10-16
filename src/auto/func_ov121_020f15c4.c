#include "m2c.h"

extern s32 data_ov121_020f5bd4;
extern M2C_UNK data_ov121_020f5d60;
extern s32 data_ov121_020f6608;

void func_ov121_020f15c4(s32 arg0) {
    if (!(arg0 & 1)) {
        data_ov121_020f6608 &= ~1;
    }
    if (!(arg0 & 0x40)) {
        data_ov121_020f5bd4 &= ~0x10000;
    }
    if (arg0 & 0x400) {
        return;
    }
    M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x2B8) = (s32) (M2C_FIELD(&data_ov121_020f5d60, s32 *, 0x2B8) & ~8);
}
