#include "m2c.h"

s32 func_ov003_02053e50();                          /* extern */
s32 func_ov003_02066424();                          /* extern */
s32 func_ov003_0206658c(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_020665b8(M2C_UNK, s32, s32);     /* extern */
s32 func_ov003_020665e4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_02066728(M2C_UNK, s32);          /* extern */
s32 func_ov003_020667bc(M2C_UNK, s32 *, s32 *);     /* extern */
s32 func_ov003_0206d624(M2C_UNK);                   /* extern */
s32 func_ov003_0206e07c(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov108_020d9efc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    if ((func_ov003_02066424() == 1) && (func_ov003_0206d624(arg1) != 5)) {
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    if ((func_ov003_0206e07c(arg0, 3) == 1) && (func_ov003_0206658c(arg0) != -1)) {
        if (func_ov003_020667bc(arg0, &sp4, &sp0) == 1) {
            func_ov003_020665b8(arg0, sp4, sp0);
            return;
        }
        func_ov003_02066728(arg0, (func_ov003_02053e50() & 0x1F) + 0x1E);
        return;
    }
    if (func_ov003_020665e4(arg0) != 0) {
        return;
    }
    func_ov003_02066728(arg0, (func_ov003_02053e50() & 0x1F) + 0x1E);
}
