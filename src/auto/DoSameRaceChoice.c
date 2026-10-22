/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a9748;
extern u8 data_ov003_020b0cf0[];

s32 DoSameRaceChoice(void) {
    s32 var_r1;
    u8 *var_r2;
    s32 *temp_lr_2;
    s32 temp_r4;
    s32 var_r0;
    u32 var_r3;
    void *temp_lr;

    var_r0 = 0;
    var_r1 = 0;
    var_r2 = data_ov003_020b0cf0;
    var_r3 = -1U;
loop_1:
    temp_r4 = M2C_FIELD(var_r2, s32 *, 0);
    if ((((u32) (temp_r4 << 0x1F) >> 0x1F) != 0) && (temp_lr = M2C_FIELD(var_r2, void **, 0xE8), (temp_lr != NULL))) {
        if ((((u32) (M2C_FIELD(temp_lr, s32 *, 8) << 8) >> 0x1F) == 0) && (((u32) (temp_r4 << 0x1A) >> 0x1D) == 1)) {
            temp_lr_2 = M2C_FIELD(var_r2, s32 **, 0xEC);
            if (temp_lr_2 == NULL) {
                var_r0 = 0;
            } else {
                if (var_r3 == -1U) {
                    var_r0 += 1;
                    var_r3 = (u32) (*temp_lr_2 << 0x12) >> 0x1C;
                    goto block_16;
                }
                if (var_r3 == ((u32) (*temp_lr_2 << 0x12) >> 0x1C)) {
                    var_r0 += 1;
                    goto block_16;
                }
                var_r0 = 0;
            }
        } else {
            goto block_16;
        }
    } else {
    block_16:
        var_r1 += 1;
        var_r2 += 0x110;
        if (var_r1 < 0x42) {
            goto loop_1;
        }
    }
    return var_r0;
}
