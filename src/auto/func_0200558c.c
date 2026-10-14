#include "m2c.h"

M2C_UNK func_02010d48(M2C_UNK);                     /* extern */
M2C_UNK func_02010ea8(s32);                         /* extern */
s32 func_02010f14();                                /* extern */

void func_0200558c(void) {
    s32 temp_r4;

    temp_r4 = func_02010f14();
    func_02010d48(1);
    func_02010ea8(temp_r4);
}
