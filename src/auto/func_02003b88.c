#include "m2c.h"

M2C_UNK func_02004b7c();                            /* extern */
M2C_UNK func_02010790(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02010d48(M2C_UNK);                     /* extern */
M2C_UNK func_02010ea8(s32);                         /* extern */
s32 func_02010f14();                                /* extern */

void func_02003b88(void) {
    s32 temp_r4;

    func_02004b7c();
    func_02010790(0, 0, 0, 0);
    temp_r4 = func_02010f14();
    func_02010d48(1);
    func_02010ea8(temp_r4);
}
