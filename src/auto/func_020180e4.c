#include "m2c.h"

M2C_UNK func_02011750();                            /* extern */
M2C_UNK func_0201185c(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0203afe0;
extern M2C_UNK func_02018110;

void func_020180e4(void) {
    func_02011750();
    func_0201185c(0xE, &func_02018110);
    M2C_FIELD(&data_0203afe0, s32 *, 4) = 0;
}
