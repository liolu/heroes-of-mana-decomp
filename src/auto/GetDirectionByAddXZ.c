/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov003_020a7b94[];

u8 GetDirectionByAddXZ(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 idx;

    if (arg0 > 0) {
        temp_r2 = 1;
    } else if (arg0 < 0) {
        temp_r2 = 2;
    } else {
        temp_r2 = 0;
    }
    if (arg1 > 0) {
        temp_r0 = 1;
    } else {
        if (arg1 < 0) {
            temp_r0 = 2;
        } else {
            temp_r0 = 0;
        }
    }
    idx = temp_r2;
    idx = idx + temp_r0 * 3;
    return data_ov003_020a7b94[idx];
}
