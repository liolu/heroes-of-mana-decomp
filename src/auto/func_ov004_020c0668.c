#include "m2c.h"

M2C_UNK func_ov004_020c068c();                      /* extern */
M2C_UNK func_ov004_020c09b0(void *);                /* extern */

void func_ov004_020c0668(void *arg0) {
    func_ov004_020c068c();
    if (M2C_FIELD(arg0, u8 *, 0x34) == 0) {
        return;
    }
    func_ov004_020c09b0(arg0);
}
