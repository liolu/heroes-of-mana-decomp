#include "m2c.h"

s32 func_02010b78(M2C_UNK);                         /* extern */
M2C_UNK func_02010d48(M2C_UNK);                     /* extern */
s32 func_02011008();                                /* extern */
M2C_UNK func_020110a8();                            /* extern */
s32 func_020110d0();                                /* extern */
s32 func_02011118();                                /* extern */

s32 func_02010c88(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02011118() == 0) {
        return 0;
    }
    temp_r0_3 = func_020110d0();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_02011008() > 0) {
        do {

        } while (func_02010b78(0) != 0);
        temp_r0_2 = func_020110d0();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02010d48(1);
block_12:
    func_020110a8();
    do {
        func_02010b78(1);
        temp_r0 = func_020110d0();
    } while (temp_r0 == 0);
    return temp_r0;
}
