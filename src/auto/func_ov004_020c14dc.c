#include "m2c.h"

M2C_UNK func_ov004_020c150c();                      /* extern */
M2C_UNK func_ov004_020c1670(void *);                /* extern */

void func_ov004_020c14dc(void *arg0) {
    func_ov004_020c150c();
    if (!(M2C_FIELD(arg0, u16 *, 0xB8) & 0x40)) {
        return;
    }
    func_ov004_020c1670(arg0);
    M2C_FIELD(arg0, u16 *, 0xB8) = (u16) (M2C_FIELD(arg0, u16 *, 0xB8) & ~0x40);
}
