/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 OS_SleepThread(M2C_UNK);                        /* extern */
M2C_UNK SetTrsObjCommand(M2C_UNK, M2C_UNK, u32, M2C_UNK); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ace28;

s32 TellToChild_VS_Battle_Endding(s32 arg8) {
    s32 var_r7;
    u32 var_r0;

    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) * 8) >> 0x1F;
    if (var_r0 == 0) {
        var_r7 = 5;
        do {
            SetTrsObjCommand(0xA, 0xD, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 8) << 0x15) >> 0x1D, 0);
            var_r7 -= 1;
            M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
            var_r0                                       = OS_SleepThread(0);
        } while (var_r7 > 0);
    }
    return var_r0;
}
