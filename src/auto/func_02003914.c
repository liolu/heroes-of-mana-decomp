#include "m2c.h"

M2C_UNK func_020045f8(void *, M2C_UNK);
extern void *data_0203678c;

void func_02003914(void) {
    if (data_0203678c == NULL) {
        return;
    }
    if (((u32) (M2C_FIELD(data_0203678c, s32 *, 0xAC) << 0xF) >> 0x1F) == 0) {
        return;
    }
    func_020045f8(data_0203678c, 0);
}
