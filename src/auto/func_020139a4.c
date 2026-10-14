#include "m2c.h"

M2C_UNK func_0200e7cc(s32, s32);                    /* extern */
M2C_UNK func_0200e834(s32, s32);                    /* extern */
M2C_UNK func_020103a0(s32, M2C_UNK, s32);           /* extern */

void func_020139a4(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_0200e834(temp_r4, temp_r6);
    func_0200e7cc(temp_r4, temp_r6);
    func_020103a0(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
