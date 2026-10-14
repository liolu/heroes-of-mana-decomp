#include "m2c.h"

M2C_UNK func_0200c684(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200c854(M2C_UNK);                     /* extern */
M2C_UNK func_0200f404(M2C_UNK);                     /* extern */
extern M2C_UNK data_02038974;
extern M2C_UNK func_0200f4a8;

void func_0200f420(void) {
    if (M2C_FIELD(&data_02038974, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02038974, u16 *, 0) = 1U;
    func_0200f404(0);
    M2C_FIELD(&data_02038974, s32 *, 8)       = 0;
    M2C_FIELD(&data_02038974, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_0200c684(8, &func_0200f4a8);
    func_0200c854(8);
    M2C_FIELD(&data_02038974, s32 *, 4) = 0;
}
