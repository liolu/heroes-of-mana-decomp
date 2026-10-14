#include "m2c.h"

M2C_UNK func_0200e5a8(M2C_UNK *);                   /* extern */
M2C_UNK func_02010aa4();                            /* extern */
M2C_UNK func_02011158();                            /* extern */
extern s32 data_020389c0;
extern M2C_UNK data_020389c4;

void func_02010a44(void) {
    if (data_020389c0 != 0) {
        return;
    }
    data_020389c0 = 1;
    func_0200e5a8(&data_020389c4);
    func_02010aa4();
    func_02011158();
}
