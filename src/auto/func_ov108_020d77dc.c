#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
u32 func_ov003_02053e50();                          /* extern */
M2C_UNK func_ov003_02066db0(void *);                /* extern */
s32 func_ov003_0206d5a4(void *);                    /* extern */
s32 func_ov003_0206e07c(void *, M2C_UNK);           /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov003_02090978(M2C_UNK, void *);           /* extern */
M2C_UNK func_ov003_020909ec(void *);                /* extern */

void func_ov108_020d77dc(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_ret;
    void *temp_r1;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xE8);
    if (func_0202d478(M2C_FIELD(temp_r3, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r3, u16 *, 0x12)) < 0x32) {
        var_r1 = 1;
    } else {
        var_r1 = 3;
    }
    if ((func_ov003_0206e07c(arg0, var_r1) == 0) &&
        ((func_ov003_0206d5a4(arg0) == 5) ||
         (temp_r1 = M2C_FIELD(arg0, void **, 0xE8),
          (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) < 0x32)))) {
        func_ov003_02066db0(arg0);
        return;
    }
    func_ov003_020909ec(arg0);
    if (func_ov003_02090978(arg1, arg0) == 1) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    temp_ret = func_ov003_02053e50();
    temp_r0  = temp_ret;
    if (((temp_ret % 100) >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xEC), u8 *, 6)) || (func_ov003_0206d5a4(arg0) == 5) ||
        (func_ov003_0206d5a4(arg0) == 6)) {
        func_ov003_02066db0(arg0);
        return;
    }
    func_ov003_020900e4(2, arg0, arg1, 0);
}
