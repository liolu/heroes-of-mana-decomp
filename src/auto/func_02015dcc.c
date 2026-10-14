#include "m2c.h"

M2C_UNK func_0200fafc(s32);                         /* extern */
M2C_UNK func_02015bb8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02015da4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02015ea0(s32 *, s32 *);                /* extern */
s32 func_0201622c(M2C_UNK);                         /* extern */
s32 func_0201624c();                                /* extern */

void func_02015dcc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    func_0200fafc(0x996A00);
    if (func_0201624c() != 1) {
        func_02015ea0(&sp4, &sp0);
        if (sp4 != 0) {
            func_02015da4(0, 0);
        }
        if (sp0 != 0) {
            func_02015da4(1, 0);
        }
        if (func_0201622c(1) == 0) {
            do {
                func_0200fafc(0x996A00);
            } while (func_0201622c(1) == 0);
        }
    }
    func_02015bb8(0xE, arg0, arg1);
}
