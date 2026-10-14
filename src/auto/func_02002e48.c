#include "m2c.h"

s32 func_02002eb0();                                /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_0201360c(M2C_UNK *, s32, s32);         /* extern */
s32 func_0201361c(M2C_UNK *, s32, M2C_UNK);         /* extern */
extern M2C_UNK data_02036744;

s32 func_02002e48(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r1 = func_02002eb0();
    if (*arg2 == 0) {
        return 0;
    }
    if (func_0201361c(&data_02036744, temp_r1, 0) == 0) {
        func_0200fddc();
    }
    temp_r0 = func_0200ed38(0, -1, *arg2);
    func_0201360c(&data_02036744, temp_r0, *arg2);
    return temp_r0;
}
