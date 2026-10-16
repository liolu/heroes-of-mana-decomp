#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
s32 OS_GetIrqFunction(M2C_UNK);                     /* extern */
M2C_UNK OS_SetIrqFunction(M2C_UNK, s32);            /* extern */
M2C_UNK func_0200fb08();                            /* extern */
M2C_UNK func_ov000_020466d4();                      /* extern */
M2C_UNK func_ov119_020e9acc();                      /* extern */
s32 func_ov119_020e9c6c();                          /* extern */
M2C_UNK func_ov119_020e9d70();                      /* extern */
M2C_UNK func_ov119_020ea92c();                      /* extern */
M2C_UNK func_ov119_020eb1a4();                      /* extern */
M2C_UNK func_ov119_020eba9c();                      /* extern */
M2C_UNK func_ov119_020ed9d8(M2C_UNK);               /* extern */
M2C_UNK func_ov119_020f15d4();                      /* extern */
M2C_UNK func_ov119_020f1680();                      /* extern */

void func_ov119_020e9a60(M2C_UNK arg0) {
    s32 temp_r4;

    func_0200fb08();
    temp_r4 = OS_GetIrqFunction(1);
    func_ov000_020466d4();
    func_ov119_020f15d4();
    func_ov119_020f1680();
    if (func_ov119_020e9c6c() != 1) {
        return;
    }
    func_ov119_020e9acc();
    func_ov119_020eb1a4();
    func_ov119_020ea92c();
    func_ov119_020ed9d8(arg0);
    func_ov119_020eba9c();
    func_ov119_020e9d70();
    func_ov119_020f15d4();
    GX_SetBankForBG(1);
    func_0200fb08();
    OS_SetIrqFunction(1, temp_r4);
}
