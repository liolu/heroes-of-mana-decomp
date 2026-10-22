/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0206759c();                      /* extern */
M2C_UNK func_ov123_020676ac(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020677b0(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_ov123_02066e48(void *arg0) {
    u16 v;

    v = M2C_FIELD(arg0, u16 *, 2);
    switch (v) {
        case 0:
            func_ov123_020676ac(3);
            func_ov123_020677b0(0, 0, 0, 0x783);
            break;
        case 1:
            func_ov123_0206759c();
            break;
        case 2:
        case 3:
        case 4:
        default:
            func_ov123_020676ac(0xB);
            func_ov123_020677b0(7, 0, 0, 0x793);
            break;
    }
}
