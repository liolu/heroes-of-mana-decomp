#include "m2c.h"

M2C_UNK func_02015f28(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_ov003_0207fa14(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK data_ov112_020ec588;
extern M2C_UNK data_ov112_020eedb0;

void func_ov112_020e26c0(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 1) {
        return;
    }
    if (((u32) (M2C_FIELD(&data_ov112_020ec588, s32 *, 0x48C) << 0xE) >> 0x1F) != 0) {
        func_ov003_0207fa14(7, 0);
        M2C_FIELD(&data_ov112_020eedb0, s32 *, 4) = 1;
    }
    func_02015f28(0xC, 0, 0);
}
