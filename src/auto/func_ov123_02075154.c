/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_02077e80(M2C_UNK *, M2C_UNK *);  /* extern */
M2C_UNK func_ov123_02077ef4(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_ov123_02077fb4(M2C_UNK *);             /* extern */
extern s8 data_ov123_020e0be8;
extern M2C_UNK data_ov123_020e0bf0;

void func_ov123_02075154(M2C_UNK *arg0, M2C_UNK arg1) {
    u8 sp0[92];
    s32 temp_r4;

    func_ov123_02077fb4((void *) sp0);
    temp_r4 = func_0200fa98();
    func_ov123_02077ef4((void *) sp0, &data_ov123_020e0bf0, 0x14);
    func_ov123_02077ef4((void *) sp0, arg0, arg1);
    func_ov123_02077e80((void *) sp0, &data_ov123_020e0bf0);
    func_0200faac(temp_r4);
    data_ov123_020e0be8 = 1;
}
