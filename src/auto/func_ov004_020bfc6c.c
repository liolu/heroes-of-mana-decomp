#include "m2c.h"

void func_ov004_020bfc6c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) M2C_FIELD(arg1, u8 *, 3);
    (*(M2C_UNK(**)(void *, s32))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x60)) + 0x28))((*(void **) ((u8 *) arg0 + 0x60)), arg1);
}
