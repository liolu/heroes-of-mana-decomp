#include "m2c.h"

M2C_UNK func_ov123_0207a20c(s32);                   /* extern */
M2C_UNK func_ov123_0207a748(s32);                   /* extern */
M2C_UNK func_ov123_0207af34(s32);                   /* extern */
M2C_UNK func_ov123_0207b3e0();                      /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

void func_ov123_0208ab90(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return;
    }
    func_ov123_0207af34(M2C_FIELD(arg0, s32 *, 0));
    func_ov123_0207a748(M2C_FIELD(arg0, s32 *, 0xC));
    func_ov123_0207a20c(M2C_FIELD(arg0, s32 *, 0x10));
    func_ov123_020996a0(arg0);
    func_ov123_0207b3e0();
}
