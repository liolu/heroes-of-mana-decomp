/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetTaisouFlag(void *, s32);
s32 CheckAttackTarget(void *, s32, s32);
extern void *data_0203673c;

s32 isItOkTargetOne(void *arg0, void *arg1, s32 arg2) {
    M2C_UNK var_r0;
    M2C_UNK var_r4;
    s32 *temp_r2;
    s32 temp_r1;

    var_r4 = 0;
    if (((u32) (M2C_FIELD((u8 *) M2C_FIELD(data_0203673c, s32 *, 8) + arg2 * 0x14, s32 *, 8) << 0xA) >> 0x1D) != 1) {
        var_r0 = 1;
    } else {
        temp_r1 = GetTaisouFlag(arg0, arg2);
        temp_r2 = M2C_FIELD(arg0, s32 **, 0xEC);
        if ((temp_r2 != NULL) && (((u32) (*temp_r2 << 0x12) >> 0x1C) == 7)) {
            var_r4 = 1;
        }
        if (CheckAttackTarget(arg1, temp_r1, var_r4) == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    }
    return var_r0;
}
