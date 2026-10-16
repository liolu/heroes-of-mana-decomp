#include "m2c.h"

extern M2C_UNK data_ov118_020e31e0;
extern M2C_UNK data_ov118_020e32e0;

void func_ov118_020e157c(void) {
    M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) = (s32) (M2C_FIELD(&data_ov118_020e31e0, s32 *, 0x14C) & ~0x800);
    M2C_FIELD(&data_ov118_020e32e0, s16 *, 0x46)  = 0x100;
    M2C_FIELD(&data_ov118_020e32e0, u16 *, 0x4A)  = (u16) (M2C_FIELD(&data_ov118_020e32e0, u16 *, 0x4A) & ~0xF);
    M2C_FIELD(&data_ov118_020e32e0, s16 *, 0x40)  = 0;
    M2C_FIELD(&data_ov118_020e32e0, s16 *, 0x48)  = 0;
    M2C_FIELD(&data_ov118_020e32e0, s16 *, 0x42)  = 0;
}
