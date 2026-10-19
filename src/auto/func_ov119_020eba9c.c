#include "m2c.h"

M2C_UNK TP_RequestSamplingAsync();                  /* extern */
s32 TP_WaitCalibratedResult(M2C_UNK *);             /* extern */
s32 func_0201509c(M2C_UNK *);                       /* extern */
M2C_UNK func_02015130(M2C_UNK *);                   /* extern */
M2C_UNK func_ov119_020eb4f4(u32);                   /* extern */
extern M2C_UNK data_ov119_020f2258;

s32 func_ov119_020eba9c(void) {
    u8 sp8[8];
    u8 sp0[8];
    u32 var_r0;

    if (func_0201509c(sp8) != 0) {
        func_02015130(sp8);
    }
    M2C_FIELD(&data_ov119_020f2258, s32 *, 0) = 1;
    M2C_FIELD(&data_ov119_020f2258, s32 *, 4) = 1;
    var_r0                                    = (u32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) << 0x13) >> 0x1F;
    if (var_r0 == 0) {
        do {
            func_ov119_020eb4f4(var_r0);
        loop_5:
            TP_RequestSamplingAsync();
            if (TP_WaitCalibratedResult(sp0) != 0) {
                goto loop_5;
            }
            var_r0 = (u32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) << 0x13) >> 0x1F;
        } while (var_r0 == 0);
    }
    return 0;
}
