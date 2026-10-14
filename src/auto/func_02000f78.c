#include "m2c.h"

M2C_UNK func_0200fddc();                            /* extern */
s32 func_02013f10(M2C_UNK, s32);                    /* extern */
extern M2C_UNK data_02035880;

void func_02000f78(s32 arg0) {
    if (func_02013f10(0, *((M2C_UNK *) ((s8 *) &data_02035880 + (arg0 * 4)))) != 0) {
        return;
    }
    func_0200fddc();
}
