#include "m2c.h"

s32 func_02004e58(M2C_UNK);                         /* extern */
M2C_UNK func_02010434(s32, void *, M2C_UNK);        /* extern */

s32 func_020065f4(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, volatile s32 *, 0xA4) = func_02004e58(arg1);
    func_02010434(M2C_FIELD(arg0, volatile s32 *, 0xA4), arg0 + 0xA8, 0x40);
    return 1;
}
