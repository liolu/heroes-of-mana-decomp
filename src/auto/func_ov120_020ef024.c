#include "m2c.h"

M2C_UNK func_ov120_020ec220(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov120_020ec250();                      /* extern */
M2C_UNK func_ov120_020ec2ac(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov120_020f46dc;

void func_ov120_020ef024(void) {
    func_ov120_020ec250();
    if (((u32) (M2C_FIELD(&data_ov120_020f46dc, s32 *, 0xA14) << 0xF) >> 0x1F) != 0) {
        func_ov120_020ec2ac(0xF0, 0x10, 0x11, 1);
    }
    func_ov120_020ec220(0, 0x400);
}
