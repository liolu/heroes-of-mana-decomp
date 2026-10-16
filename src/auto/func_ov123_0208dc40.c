#include "m2c.h"

M2C_UNK func_ov123_0208dca0(void *);                /* extern */
M2C_UNK func_ov123_0208dcf0(void *);                /* extern */
M2C_UNK func_ov123_0208dd80(void *, M2C_UNK);       /* extern */

void func_ov123_0208dc40(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_ov123_0208dd80(arg0, 0);
    func_ov123_0208dcf0(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
        func_ov123_0208dca0(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, M2C_UNK, s32), 0x44)(arg0, 2, 0, M2C_FIELD(arg0, s32 *, 0x48));
}
