/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 FreeTail(M2C_UNK);                              /* extern */
M2C_UNK func_020082ac();                            /* extern */

s32 func_020081b4(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 & 1) {
        func_020082ac(arg0);
    }
    temp_r0 = arg1 & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return FreeTail(arg0);
}
