#include "m2c.h"

M2C_UNK func_ov004_020c3c9c(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov004_020c4210(s32, M2C_UNK);          /* extern */

void func_ov004_020c5c78(void *arg0, M2C_UNK arg1) {
    (*(M2C_UNK(**)(void *, s32))(*(u8 **) (*(void **) ((u8 *) arg0 + 0x3C)) + 0x58))((*(void **) ((u8 *) arg0 + 0x3C)), arg1);
    func_ov004_020c3c9c(M2C_FIELD(arg0, s32 *, 0x5C), arg1);
    func_ov004_020c4210(M2C_FIELD(arg0, s32 *, 0x60), arg1);
}
