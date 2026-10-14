#include "m2c.h"

M2C_UNK func_02011750();                            /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020118a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020389a4;
extern M2C_UNK func_0200fb80;

void func_0200fb2c(void) {
    if (M2C_FIELD(&data_020389a4, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020389a4, u16 *, 2) = 1U;
    func_02011750();
    do {

    } while (func_020118a8(0xC, 1) == 0);
    func_0201185c(0xC, &func_0200fb80);
}
