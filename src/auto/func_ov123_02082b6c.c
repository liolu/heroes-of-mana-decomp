#include "m2c.h"

M2C_UNK func_ov123_0207a20c();                      /* extern */
M2C_UNK func_ov123_0207af18(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov123_0207af34(s32);                   /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

void func_ov123_02082b6c(void *arg0, void *arg1) {
    func_ov123_0207af18(M2C_FIELD(arg1, s32 *, 8), 2);
    func_ov123_0207af34(M2C_FIELD(arg1, s32 *, 8));
    func_ov123_020996a0(M2C_FIELD(arg1, void **, 0x18));
    M2C_FIELD(arg1, void **, 0x18) = NULL;
    func_ov123_020996a0(M2C_FIELD(arg1, void **, 0x28));
    M2C_FIELD(arg1, void **, 0x28) = NULL;
    if (M2C_FIELD(arg1, s32 *, 0x38) != 0) {
        func_ov123_0207a20c();
        M2C_FIELD(arg1, s32 *, 0x38) = 0;
    }
    func_ov123_020996a0(arg1);
}
