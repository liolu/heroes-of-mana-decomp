/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a8eb4;
extern M2C_UNK data_ov003_020b0cf0;

s32 GetHookObjNo(void *arg0, void *arg1) {
    u8 *var_r2;
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r3;
    s32 var_r0;
    void *temp_ip;

    temp_r0 = arg0;
    temp_r1 = arg1;
    var_r2  = (u8 *) &data_ov003_020b0cf0;
    var_r3  = 0;
loop_1:
    if ((((u32) (M2C_FIELD(var_r2, s32 *, 0) << 0x1F) >> 0x1F) != 0) &&
        (temp_ip = M2C_FIELD(var_r2, void **, 0xE8), (temp_ip != NULL))) {
        if ((((u32) (M2C_FIELD(temp_ip, s32 *, 8) << 8) >> 0x1F) == 0) &&
            (((u32) (M2C_FIELD(var_r2, s32 *, 8) << 5) >> 0x1C) == 4) && (M2C_FIELD(var_r2, s8 *, 0x60) == temp_r0) &&
            (M2C_FIELD(var_r2, s8 *, 0x61) == temp_r1)) {
            var_r0 = M2C_FIELD(var_r2, u8 *, 0x38);
        } else {
            goto block_10;
        }
    } else {
    block_10:
        var_r3 += 1;
        var_r2 += 0x110;
        if (var_r3 >= 0x42) {
            var_r0 = -1;
        } else {
            goto loop_1;
        }
    }
    return var_r0;
}
