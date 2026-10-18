#include "m2c.h"

u8 SND_CalcChannelVolume(s32);                      /* extern */
M2C_UNK SND_SetChannelVolume(s32, u8, s32);         /* extern */
extern M2C_UNK data_020370e8;

void func_020048f0(void *arg0, s32 arg1) {
    s32 var_r5;
    s32 temp_r0;
    u8 temp_r6;

    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
    var_r5                       = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) <= 0) {
        return;
    }
    do {
        temp_r6 = M2C_FIELD((arg0 + var_r5), u8 *, 0x4C);
        temp_r0 = SND_CalcChannelVolume(M2C_FIELD(arg0, s32 *, 0x3C) +
                                        M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020370e8 + (temp_r6 * 8))), s32 *, 4));
        SND_SetChannelVolume(1 << temp_r6, temp_r0, (s32) temp_r0 >> 8);
        var_r5 += 1;
    } while (var_r5 < (s32) M2C_FIELD(arg0, s32 *, 0x48));
}
