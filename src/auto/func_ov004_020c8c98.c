#include "m2c.h"

M2C_UNK func_ov004_020c8cb8();                      /* extern */

s32 func_ov004_020c8c98(void *arg0, void *arg1) {
    func_ov004_020c8cb8();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
