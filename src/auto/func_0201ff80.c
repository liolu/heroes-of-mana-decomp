#include "m2c.h"

M2C_UNK func_0200cb4c();                            /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */

void func_0201ff80(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0200cb4c(arg0);
    }
    func_0200faac(M2C_FIELD(arg1, s32 *, 4));
}
