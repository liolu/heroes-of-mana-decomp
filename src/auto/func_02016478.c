#include "m2c.h"

M2C_UNK func_02011750();                            /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020118a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0203a6d4;
extern M2C_UNK func_02016638;

void func_02016478(void) {
    if (M2C_FIELD(&data_0203a6d4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0203a6d4, u16 *, 0)    = 1U;
    M2C_FIELD(&data_0203a6d4, s32 *, 4)    = 0;
    M2C_FIELD(&data_0203a6d4, s32 *, 8)    = 0;
    M2C_FIELD(&data_0203a6d4, s32 *, 0x20) = 0;
    M2C_FIELD(&data_0203a6d4, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_0203a6d4, s32 *, 0x10) = 0;
    func_02011750();
    do {

    } while (func_020118a8(5, 1) == 0);
    func_0201185c(5, &func_02016638);
}
