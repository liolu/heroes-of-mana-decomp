#include "m2c.h"

M2C_UNK func_ov121_020eae0c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov121_020eae68();                      /* extern */
extern M2C_UNK data_ov121_020f6d60;

void func_ov121_020f0fb4(void) {
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 0) = 1;
    M2C_FIELD(&data_ov121_020f6d60, s32 *, 8) = 1;
    func_ov121_020eae68();
    func_ov121_020eae0c(0, 0x400);
}
