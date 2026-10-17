/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206759c();                      /* extern */
M2C_UNK func_ov123_020676ac(M2C_UNK);               /* extern */
extern void *data_ov123_020df180;

void func_ov123_020674e8(void *arg0) {
    u32 temp_r0;

    if (M2C_FIELD(arg0, u16 *, 2) != 8) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 4) != 0x16) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 6) != 0x25) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020df180, s32 *, 0x2260) - 8;
    switch (temp_r0) {
        case 0:
            func_ov123_020676ac(0xC);
            return;
        case 1:
        case 4:
            func_ov123_0206759c();
            return;
        case 2:
            func_ov123_020676ac(0xC);
        /* fallthrough */
            return;
        default:
            return;
    }
}
