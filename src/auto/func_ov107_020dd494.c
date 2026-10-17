#include "m2c.h"

u32 func_ov003_02053e50();                          /* extern */
s32 func_ov003_0206c77c(void *);                    /* extern */
extern void *data_0203673c;

s32 func_ov107_020dd494(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_ret;
    s32 temp_ret_2;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
    if (((u32) (M2C_FIELD(temp_r1, s32 *, 0) << 0xD) >> 0x18) == 7) {
        var_r0_2 = 1;
    } else if (((u32) (M2C_FIELD(((M2C_FIELD(temp_r1, u16 *, 0x16) * 0x14) + M2C_FIELD(data_0203673c, s32 *, 8)), s32 *, 8)
                       << 0xA) >>
                0x1D) == 1) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if ((var_r0_2 == 0) && (func_ov003_0206c77c(arg0) < 2)) {
        temp_ret = func_ov003_02053e50();
        temp_r0  = temp_ret;
        if ((temp_ret % 100) <= 0x32) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    temp_ret_2 = func_ov003_02053e50();
    temp_r0_2  = temp_ret_2;
    if ((temp_ret_2 % 50) > (u32) ((u32) (M2C_FIELD(((M2C_FIELD(M2C_FIELD(arg0, void **, 0xE8), u16 *, 0x16) * 0x14) +
                                                     M2C_FIELD(data_0203673c, s32 *, 8)),
                                                    s32 *, 0x10)
                                          << 7) >>
                                   0x19)) {
        return 0;
    }
    return 1;
}
