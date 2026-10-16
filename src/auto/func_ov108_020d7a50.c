#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
s32 func_ov003_02053e50();                          /* extern */
s32 func_ov003_02066424();                          /* extern */
s32 func_ov003_0206658c(void *);                    /* extern */
M2C_UNK func_ov003_020665b8(void *, s32, s32);      /* extern */
s32 func_ov003_020665e4(void *);                    /* extern */
M2C_UNK func_ov003_02066728(void *, s32);           /* extern */
s32 func_ov003_020667bc(void *, s32 *, s32 *);      /* extern */
s32 func_ov003_02066888(void *);                    /* extern */
s32 func_ov003_0206e07c(void *, M2C_UNK);           /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */

void func_ov108_020d7a50(void *arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;
    void *temp_r1;

    if ((func_ov003_02066424() == 1) && (func_ov003_02066888(arg0) != 0x56) && (func_ov003_02066888(arg0) != 0x72)) {
        temp_r1 = M2C_FIELD(arg0, void **, 0xE8);
        if (func_0202d478(M2C_FIELD(temp_r1, u16 *, 0x10) * 0x64, M2C_FIELD(temp_r1, u16 *, 0x12)) > 0x32) {
            func_ov003_020900e4(3, arg0, arg1, 0);
            return;
        }
        func_ov003_020900e4(0, arg0, 0, 0);
        return;
    }
    if ((func_ov003_0206e07c(arg0, 3) == 1) && (func_ov003_0206658c(arg0) != -1)) {
        if (func_ov003_020667bc(arg0, &sp4, &sp0) == 1) {
            func_ov003_020665b8(arg0, sp4, sp0);
            return;
        }
        func_ov003_02066728(arg0, (func_ov003_02053e50() & 0x1F) + 0x78);
        return;
    }
    if (func_ov003_020665e4(arg0) != 0) {
        return;
    }
    func_ov003_02066728(arg0, (func_ov003_02053e50() & 0x1F) + 0x78);
}
