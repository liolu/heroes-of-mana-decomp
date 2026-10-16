#include "m2c.h"

s32 func_ov004_020c1ff0();                          /* extern */
s32 func_ov004_020c2608(M2C_UNK);                   /* extern */

s32 func_ov004_020c25e4(M2C_UNK arg0) {
    if (func_ov004_020c1ff0() != 0) {
        return 0;
    }
    return func_ov004_020c2608(arg0);
}
