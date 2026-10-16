#include "m2c.h"

M2C_UNK func_ov004_020c1264();                      /* extern */

void func_ov004_020c1248(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    M2C_FIELD(arg0, u16 *, 0xB8) = (u16) (M2C_FIELD(arg0, u16 *, 0xB8) | 4);
    func_ov004_020c1264();
}
