#include "m2c.h"

M2C_UNK func_ov123_020cea10(M2C_UNK, void *);       /* extern */
M2C_UNK func_ov123_020cea30(M2C_UNK, s16);          /* extern */
M2C_UNK func_ov123_020ceb44(M2C_UNK, s32);          /* extern */
M2C_UNK func_ov123_020ced60(M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_ov123_020cee0c(M2C_UNK, M2C_UNK);      /* extern */

void func_ov123_020d0ad8(void *arg0, M2C_UNK arg1) {
    func_ov123_020cea30(arg1, M2C_FIELD(arg0, s16 *, 8));
    func_ov123_020cee0c(arg1, 2);
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0xC));
    func_ov123_020ceb44(arg1, M2C_FIELD(arg0, s32 *, 0x10));
    func_ov123_020ced60(arg1, arg0 + 0x14, 8);
    func_ov123_020cea10(arg1, arg0 + 0x1C);
    func_ov123_020cea10(arg1, arg0 + 0x34);
}
