#include "m2c.h"

s32 func_0200ea2c(M2C_UNK);                         /* extern */
s32 func_0200eb10(M2C_UNK);                         /* extern */
M2C_UNK func_0200ebb8(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200ebcc(M2C_UNK, s32);                /* extern */
extern s32 data_020388b8;

void func_0200e894(void) {
    if (data_020388b8 != 0) {
        return;
    }
    data_020388b8 = 1;
    func_0200ebb8(0, func_0200ea2c(0));
    func_0200ebcc(0, func_0200eb10(0));
    func_0200ebcc(2, 0);
    func_0200ebb8(2, 0);
    func_0200ebb8(3, func_0200ea2c(3));
    func_0200ebcc(3, func_0200eb10(3));
    func_0200ebb8(4, func_0200ea2c(4));
    func_0200ebcc(4, func_0200eb10(4));
    func_0200ebb8(5, func_0200ea2c(5));
    func_0200ebcc(5, func_0200eb10(5));
    func_0200ebb8(6, func_0200ea2c(6));
    func_0200ebcc(6, func_0200eb10(6));
}
