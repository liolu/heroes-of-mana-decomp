#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200c884(M2C_UNK);
void func_0200f404(M2C_UNK);

extern M2C_UNK data_02038984;

void func_0200f64c(void) {
    if (M2C_FIELD(&data_02038984, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02038984, u16 *, 0) = 1U;
    func_0200f404(1);
    M2C_FIELD(&data_02038984, s32 *, 4) = 0;
    M2C_FIELD(&data_02038984, s32 *, 8) = 0;
    func_0200c884(0x10);
}
