#include "m2c.h"

extern M2C_UNK data_ov120_020f4228;
extern M2C_UNK data_ov120_020f42d4;

void func_ov120_020f01dc(s32 arg0) {
    if (!(arg0 & 1)) {
        M2C_FIELD(&data_ov120_020f4228, s32 *, 4) = (s32) (M2C_FIELD(&data_ov120_020f4228, s32 *, 4) & ~0x02000000);
    }
    if (arg0 & 2) {
        return;
    }
    M2C_FIELD(&data_ov120_020f42d4, u16 *, 2) = (u16) (M2C_FIELD(&data_ov120_020f42d4, u16 *, 2) & ~1);
}
