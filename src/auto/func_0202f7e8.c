#include "m2c.h"

M2C_UNK func_0202f49c(s32);                         /* extern */
M2C_UNK func_0202f6fc(void *, s32, M2C_UNK);        /* extern */

void func_0202f7e8(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0202f6fc(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_0202f49c(arg0 - arg2);
}
