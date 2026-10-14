#include "m2c.h"

M2C_UNK func_0200c884(M2C_UNK);                     /* extern */
extern M2C_UNK data_02038990;

void func_0200fa3c(void) {
    if (M2C_FIELD(&data_02038990, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02038990, u16 *, 0)    = 1U;
    M2C_FIELD(&data_02038990, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02038990, s32 *, 0x10) = 0;
    func_0200c884(4);
    M2C_FIELD(&data_02038990, s32 *, 8) = 0;
    M2C_FIELD(&data_02038990, s32 *, 4) = 0;
}
