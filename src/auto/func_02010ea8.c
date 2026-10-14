#include "m2c.h"

s32 func_02010b78();                         /* extern */
s32 func_02010f40();                         /* extern */
M2C_UNK func_020110a8();                            /* extern */

void func_02010ea8(M2C_UNK arg0) {
    if (func_02010f40() != 0) {
        return;
    }
    do {

    } while (func_02010b78(0) != 0);
    if (func_02010f40(arg0) != 0) {
        return;
    }
    func_020110a8();
    if (func_02010f40(arg0) != 0) {
        return;
    }
    do {
        func_02010b78(1);
    } while (func_02010f40(arg0) == 0);
}
