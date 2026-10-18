#include "m2c.h"

void func_ov004_020bfc48(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    (*(M2C_UNK(**)(void *, s32))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x60)) + 0xC))((*(void **) ((u8 *) arg0 + 0x60)), arg1);
}
