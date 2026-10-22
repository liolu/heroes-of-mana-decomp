/* compiler: 1.2/sp3 */
#include "m2c.h"
M2C_UNK func_ov123_02079f1c(s32, s32);
s32 *func_ov123_0207a194(s32, s32);
s32 func_ov123_0207a204(s32);
M2C_UNK func_ov123_020873f4(void *, M2C_UNK, s32);
s32 func_ov123_0208a570(u16, M2C_UNK);
s32 func_ov123_0208a38c(void *arg0, M2C_UNK arg1) {
    s32 n;
    s32 i;
    s32 j;
    s32 base;
    n = func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 0x60));
    if (n == 0) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (func_ov123_0208a570(M2C_FIELD(func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 0x60), i), u16 *, 8), arg1) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return 1;
    }
    j = i;
    while (j-- != 0) {
        func_ov123_02079f1c(M2C_FIELD(arg0, s32 *, 0x60), j);
    }
    n = func_ov123_0207a204(M2C_FIELD(arg0, s32 *, 0x60));
    if (n == 0) {
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        return 1;
    }
    base = *func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 0x60), 0);
    for (i = 0; i < n; i++) {
        s32 *p = func_ov123_0207a194(M2C_FIELD(arg0, s32 *, 0x60), i);
        *p     = *p - base;
    }
    func_ov123_020873f4((u8 *) arg0 + 0x50, 0, base);
    return 1;
}
