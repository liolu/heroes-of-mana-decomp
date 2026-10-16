#include "m2c.h"

s32 func_ov004_020b9a20(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c6588(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    M2C_FIELD(arg0, s32 *, 0x10) = func_ov004_020b9a20(arg1);
}
