#include "m2c.h"

M2C_UNK func_02020ab4();                            /* extern */
M2C_UNK func_02023594(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02035de8;

void func_02020d04(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02023594(&data_02035de8, arg0, arg1, arg2, arg3);
    func_02020ab4();
}
