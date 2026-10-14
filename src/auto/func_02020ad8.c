#include "m2c.h"

M2C_UNK func_02020b24(M2C_UNK);                     /* extern */
M2C_UNK func_0202f4f4();                            /* extern */
extern M2C_UNK data_02041c30;

void func_02020ad8(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02041c30, s32 *, 0xC) == 0) {
        func_0202f4f4();
        if (M2C_FIELD(&data_02041c30, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&data_02041c30, M2C_UNK(**)(), 4)();
            M2C_FIELD(&data_02041c30, M2C_UNK(**)(), 4) = NULL;
        }
    }
    func_02020b24(arg0);
}
