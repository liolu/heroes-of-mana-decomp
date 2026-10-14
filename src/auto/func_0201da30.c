#include "m2c.h"

s32 func_02018c08(M2C_UNK *);                       /* extern */
s32 func_0201aee8(M2C_UNK *, u16, u16, u16, s32);   /* extern */
M2C_UNK func_0201f530(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_02035ce0;
extern M2C_UNK func_0201da80;

void func_0201da30(void) {
    func_0201f530(0x80, func_02018c08(&func_0201da80));
    func_0201f530(0x1D, func_0201aee8(&func_0201da80, M2C_FIELD(&data_02035ce0, u16 *, 6), M2C_FIELD(&data_02035ce0, u16 *, 2),
                                      M2C_FIELD(&data_02035ce0, u16 *, 0), (s32) M2C_FIELD(&data_02035ce0, u16 *, 4)));
}
