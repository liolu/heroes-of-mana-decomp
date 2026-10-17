/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_ov123_020a9cb0(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_ov123_020ca4ec(M2C_UNK, M2C_UNK);          /* extern */
extern s32 data_ov123_020e45f8;
extern M2C_UNK func_ov123_020b2f34;
extern M2C_UNK func_ov123_020b2f40;
extern M2C_UNK func_ov123_020b2f50;

void func_ov123_020b307c(void) {
    data_ov123_020e45f8 = func_ov123_020ca4ec(0xC, -4);
    if (func_ov123_020a9cb0(0xF, 0x40, &func_ov123_020b2f50, &func_ov123_020b2f40, &func_ov123_020b2f34, 0x800) != 1) {
        func_0200fddc();
    }
    func_0200e0a4(0xA);
}
