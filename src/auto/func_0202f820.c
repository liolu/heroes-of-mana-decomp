#include "m2c.h"

s32 func_02024d8c(s32, s32);                        /* extern */

s32 func_0202f820(void *arg0, void *arg1) {
    if ((arg0 == arg1) || (func_02024d8c(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4)) == 0)) {
        return 1;
    }
    return 0;
}
