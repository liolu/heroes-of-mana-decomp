#include "m2c.h"

s32 func_ov003_02053e50();                          /* extern */
s32 func_ov003_020665e4(M2C_UNK);                   /* extern */
M2C_UNK func_ov003_02066728(M2C_UNK, s32);          /* extern */
s32 func_ov003_0206d838();                          /* extern */
M2C_UNK func_ov003_020900e4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020b0cf0;

void func_ov107_020d7f98(M2C_UNK arg0, s32 arg1) {
    if (arg1 == func_ov003_0206d838()) {
        if (((u32) (M2C_FIELD(((u8 *) &data_ov003_020b0cf0 + (arg1 * 0x110)), s32 *, 8) << 5) >> 0x1C) == 7) {
            func_ov003_020900e4(0, arg0, 0, 0);
            return;
        }
        func_ov003_020900e4(3, arg0, arg1, 0);
        return;
    }
    if (func_ov003_020665e4(arg0) != 0) {
        return;
    }
    func_ov003_02066728(arg0, (func_ov003_02053e50() & 0x1F) + 0x1E);
}
