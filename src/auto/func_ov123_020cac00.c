#include "m2c.h"

M2C_UNK TP_WaitBusy(M2C_UNK);                       /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_0201509c(M2C_UNK *);                       /* extern */
M2C_UNK func_02015130(M2C_UNK *);                   /* extern */
M2C_UNK func_02015374(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_020158e0(M2C_UNK);                         /* extern */
s32 func_ov123_020ca4ec(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_ov123_020cabb4();                      /* extern */
extern s32 data_ov123_020e4734;

void func_ov123_020cac00(void) {
    u8 sp0[12];

    data_ov123_020e4734 = func_ov123_020ca4ec(0x3A, 4);
    if (func_0201509c(sp0) == 0) {
        func_0200fddc();
    }
    func_02015130(sp0);
    func_02015374(0, 4, data_ov123_020e4734, 5);
    TP_WaitBusy(2);
    if (func_020158e0(2) != 0) {
        func_0200fddc();
    }
    func_ov123_020cabb4();
}
