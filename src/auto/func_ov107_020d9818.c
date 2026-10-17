#include "m2c.h"

u32 func_ov003_02053e50();                          /* extern */
s32 func_ov003_0206e07c(void *, M2C_UNK);           /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, void *);           /* extern */
M2C_UNK func_ov003_020909ec(void *);                /* extern */

void func_ov107_020d9818(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_ret;

    if (func_ov003_0206e07c(arg0, 5) == 0) {
        func_ov003_020900e4(0, arg0, 0, 0);
        return;
    }
    func_ov003_020909ec(arg0);
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    temp_ret = func_ov003_02053e50();
    temp_r0  = temp_ret;
    if ((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) {
        return;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
}
