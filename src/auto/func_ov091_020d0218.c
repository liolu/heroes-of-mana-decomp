#include "m2c.h"

M2C_UNK func_ov003_0209d7d8(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;

void func_ov091_020d0218(void) {
    if ((s32) M2C_FIELD(data_ov000_02051548, s32 *, 0x90) >= 5) {
        return;
    }
    func_ov003_0209d7d8(8, -1);
    func_ov003_0209d7d8(8, -2);
    func_ov003_0209d7d8(8, -3);
}
