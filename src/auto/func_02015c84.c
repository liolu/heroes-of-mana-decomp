#include "m2c.h"

M2C_UNK func_02015930();                            /* extern */
s32 func_02015c18(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02015970;

s32 func_02015c84(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02015c18(arg0, arg1, &func_02015970, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02015930();
    return sp0;
}
