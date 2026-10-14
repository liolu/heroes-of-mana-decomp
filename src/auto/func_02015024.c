#include "m2c.h"

M2C_UNK func_02011750();                            /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020118a8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0203a630;
extern M2C_UNK func_02014da4;

void func_02015024(void) {
    if (M2C_FIELD(&data_0203a630, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0203a630, u16 *, 0) = 1U;
    func_02011750();
    M2C_FIELD(&data_0203a630, s16 *, 0x10) = 0;
    M2C_FIELD(&data_0203a630, s32 *, 4)    = 0;
    M2C_FIELD(&data_0203a630, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0203a630, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0203a630, s16 *, 0x34) = 0;
    M2C_FIELD(&data_0203a630, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_0203a630, s16 *, 0x38) = 0;
    do {

    } while (func_020118a8(6, 1) == 0);
    func_0201185c(6, &func_02014da4);
}
