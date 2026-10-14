#include "m2c.h"

s32 func_0200e318();                                /* extern */
s32 func_0200ea2c(M2C_UNK);                         /* extern */
s32 func_0200eb10(M2C_UNK);                         /* extern */
M2C_UNK func_0200ebb8(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200ebcc(M2C_UNK, s32);                /* extern */
M2C_UNK func_0200f208(s32);                         /* extern */
M2C_UNK func_0200f210(s32);                         /* extern */
extern M2C_UNK data_020388b8;

void func_0200e998(void) {
    func_0200ebb8(2, func_0200ea2c(2));
    func_0200ebcc(2, func_0200eb10(2));
    if ((M2C_FIELD(&data_020388b8, s32 *, 4) != 0) && ((func_0200e318() & 3) != 1)) {
        return;
    }
    func_0200f208(0x0200002B);
    func_0200f210(0x023E0021);
}
