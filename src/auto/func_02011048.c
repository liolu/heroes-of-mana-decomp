#include "m2c.h"

M2C_UNK func_0200fafc(M2C_UNK);                     /* extern */
s32 func_02011118();                                /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020118a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_02011024;

void func_02011048(void) {
    func_0201185c(7, &func_02011024);
    if (func_02011118() == 0) {
        return;
    }
    if (func_020118a8(7, 1) != 0) {
        return;
    }
    do {
        func_0200fafc(0x64);
    } while (func_020118a8(7, 1) == 0);
}
