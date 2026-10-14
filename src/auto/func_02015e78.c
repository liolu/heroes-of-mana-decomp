#include "m2c.h"

M2C_UNK func_02015930();                            /* extern */
s32 func_02015dcc(M2C_UNK *, s32 *);                /* extern */
extern M2C_UNK func_02015970;

s32 func_02015e78(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02015dcc(&func_02015970, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02015930();
    return sp0;
}
