/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetHighPlace(s32, s32);                    /* extern */
extern void *data_ov000_02051548;

void SetAikyoEffectXYZ(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1_2;
    s32 ret;

    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0) | 0x01000000;
    M2C_FIELD(arg0, s16 *, 6) = (s16) (((arg1 - 0x7D0) << 5) / 100);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (((arg3 - 0x7D0) << 5) / 100);
    if (arg2 == 0x7FFF) {
        ret = GetHighPlace(arg1 / 100, arg3 / 100);
        temp_r1_2 = ((0x28 << M2C_FIELD(M2C_FIELD(data_ov000_02051548, void **, 0x290),
                                        s32 *, 0))
                     * ret)
                    << 5;
        M2C_FIELD(arg0, s16 *, 8) =
            (s16) ((s32) (temp_r1_2 + ((u32) (temp_r1_2 >> 0xD) >> 0x12)) >> 0xE);
    } else {
        M2C_FIELD(arg0, s16 *, 8) = (s16) ((arg2 << 5) / 100);
    }
}
