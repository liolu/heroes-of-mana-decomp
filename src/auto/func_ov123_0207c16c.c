/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_0207b3e8(M2C_UNK);               /* extern */
s32 func_ov123_0207c324(void **);                   /* extern */
s32 func_ov123_0207e2fc(void **, s32);              /* extern */
M2C_UNK func_ov123_0207e780(void **, M2C_UNK);      /* extern */
s32 func_ov123_0207ea0c(void **);                   /* extern */
s32 func_ov123_02081dc4(void **, void **, M2C_UNK); /* extern */
M2C_UNK func_ov123_02081e10(void **, void *);               /* extern */
M2C_UNK func_ov123_02081fd0(void **);               /* extern */
s32 func_ov123_020828e8(void **);                   /* extern */
s32 func_ov123_02083b00(void **);                   /* extern */
extern M2C_UNK data_ov123_020d9d64;
extern M2C_UNK data_ov123_020d9e5c;
extern M2C_UNK data_ov123_020d9e64;

s32 func_ov123_0207c16c(void **arg0, s32 arg1) {
    s32 temp_r0;
    void *var_r1;
    s32 var_r8;
    void *temp_r7;
    s32 var_r6;
    void *sp0;

    temp_r7 = *arg0;
    var_r6  = 0;
    if ((u32) M2C_FIELD(temp_r7, u32 *, 0x1D8) > 4U) {
        func_02020d04(&data_ov123_020d9d64, &data_ov123_020d9e5c, 0, 0x1B6);
    }
    if (M2C_FIELD(temp_r7, u32 *, 0x1D8) == 1) {
        do {
            var_r6 = func_ov123_0207ea0c(arg0);
            if ((var_r6 == 0) && (arg1 != 0) && (M2C_FIELD(temp_r7, u32 *, 0x1D8) == 1)) {
                var_r8 = 1;
            } else {
                var_r8 = 0;
            }
            if (var_r8 != 0) {
                func_ov123_0207b3e8(0xA);
            }
        } while (var_r8 != 0);
        if (var_r6 != 0) {
            if (func_ov123_02081dc4(arg0, &sp0, 1) != 0) {
                M2C_FIELD(sp0, s32 *, 0x1C) = 4;
            } else {
                func_02020d04(&data_ov123_020d9e64, &data_ov123_020d9e5c, 0, 0x1DC);
            }
        }
    }
    if ((u32) (M2C_FIELD(temp_r7, u32 *, 0x1D8) - 2) <= 1U) {
        if (var_r6 == 0) {
            var_r6 = func_ov123_0207c324(arg0);
        }
        if (var_r6 == 0) {
            var_r6 = func_ov123_020828e8(arg0);
        }
    }
    if (var_r6 == 0) {
        var_r6 = func_ov123_02083b00(arg0);
    }
    var_r1 = M2C_FIELD(temp_r7, void **, 0x424);
    sp0    = var_r1;
    if (var_r1 != NULL) {
        do {
            if (M2C_FIELD(var_r1, s32 *, 0x1C) == 0) {
                sp0 = M2C_FIELD(var_r1, void **, 0x20);
            } else {
                func_ov123_02081fd0(arg0);
                var_r1 = sp0;
                sp0    = M2C_FIELD(var_r1, void **, 0x20);
                func_ov123_02081e10(arg0, var_r1);
            }
            var_r1 = sp0;
        } while (var_r1 != NULL);
    }
    temp_r0 = func_ov123_0207e2fc(arg0, arg1);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (M2C_FIELD(temp_r7, s32 *, 0x41C) != 0) {
        func_ov123_0207e780(arg0, 0);
    }
    return var_r6;
}
