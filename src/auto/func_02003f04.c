#include "m2c.h"

M2C_UNK func_02003e04(void *);                      /* extern */
M2C_UNK func_0201068c(u8);                          /* extern */
M2C_UNK func_020106f4(u8, s32);                     /* extern */

void func_02003f04(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020106f4(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0201068c(M2C_FIELD(arg0, u8 *, 0x3C));
    func_02003e04(arg0);
}
