#include "m2c.h"

s32 func_02000ee0(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0200fddc();                            /* extern */
M2C_UNK func_02013918(M2C_UNK);                     /* extern */
extern M2C_UNK data_02035880;

void func_02000f44(s32 arg0) {
    func_02013918(4);
    if (func_02000ee0(0, *((M2C_UNK *) ((s8 *) &data_02035880 + (arg0 * 4)))) != 0) {
        return;
    }
    func_0200fddc();
}
