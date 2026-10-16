#include "m2c.h"

M2C_UNK func_ov123_0207af34(s32);                   /* extern */
M2C_UNK func_ov123_0208e2f0(void *);                /* extern */

void func_ov123_0208e0d4(void *arg0) {
    func_ov123_0207af34(M2C_FIELD(arg0, s32 *, 0x20));
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    func_ov123_0208e2f0(arg0 + 0x14);
    func_ov123_0208e2f0(arg0 + 8);
}
