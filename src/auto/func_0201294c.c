#include "m2c.h"

M2C_UNK func_02011a6c(void *, s32);                 /* extern */
s32 func_02011ac8(void *, s32);                     /* extern */
s32 func_020126a4(s32);                             /* extern */
M2C_UNK func_020128b8();                            /* extern */

s32 func_0201294c(void *arg0) {
    func_02011a6c(arg0, func_02011ac8(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020126a4(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020128b8();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
