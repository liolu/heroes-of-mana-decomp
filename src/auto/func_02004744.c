#include "m2c.h"

M2C_UNK func_02010790(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_02010d48(M2C_UNK);                     /* extern */
M2C_UNK func_02010ea8(s32);                         /* extern */
s32 func_02010f14();                                /* extern */

void func_02004744(void *arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02010790(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02010f14();
    func_02010d48(1);
    func_02010ea8(temp_r4);
}
