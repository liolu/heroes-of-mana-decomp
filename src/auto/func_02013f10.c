#include "m2c.h"

s32 func_02013b00(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_02013f00(M2C_UNK *);                       /* extern */

s32 func_02013f10(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_02013b00(sp0, arg0, arg1) == 0) || (func_02013f00(sp0) == 0)) {
        return 0;
    }
    return 1;
}
