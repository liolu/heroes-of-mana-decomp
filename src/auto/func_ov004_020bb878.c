#include "m2c.h"

s32 func_ov004_020b9ecc();                          /* extern */
s32 func_ov004_020ba248(s32, s32);                  /* extern */
s32 func_ov004_020bb8e0();                          /* extern */
s32 func_ov004_020bb948(void *, s32);               /* extern */
extern M2C_UNK data_ov004_020cd8a8;

void *func_ov004_020bb878(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2                         = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov004_020cd8a8;
    if (var_r2 < 0) {
        var_r2 = func_ov004_020bb8e0();
    }
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = var_r2;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (var_r2 * 2);
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov004_020ba248(func_ov004_020b9ecc(), M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x18) = func_ov004_020bb948(arg0, arg1);
    return arg0;
}
