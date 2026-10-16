#include "m2c.h"

s8 func_ov004_020b9cd8(M2C_UNK);                    /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020bcc44();                      /* extern */

void func_ov004_020bd50c(void *arg0, M2C_UNK arg1) {
    func_ov004_020bcc44();
    M2C_FIELD(arg0, s8 *, 0x10) = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
}
