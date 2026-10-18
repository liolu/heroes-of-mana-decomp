/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c8c80(s32, M2C_UNK, s32 *, M2C_UNK *); /* extern */
M2C_UNK func_ov123_020c8d2c(s32, M2C_UNK, s32, u16); /* extern */
M2C_UNK func_ov123_020cb618(M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_ov123_020d8308;
extern void *data_ov123_020e46dc;
extern M2C_UNK func_ov123_020c3af4;

void func_ov123_020c3bcc(M2C_UNK arg0) {
    s32 sp0;
    M2C_UNK sp4;
    s32 temp_r2;

    func_ov123_020c8c80(M2C_FIELD(data_ov123_020e46dc, s32 *, 0x10), 0, &sp0, &sp4);
    temp_r2 = sp0 - 8;
    sp0     = temp_r2;
    if (temp_r2 > (s32) M2C_FIELD(&data_ov123_020d8308, u16 *, 0xC)) {
        func_ov123_020c8d2c(M2C_FIELD(data_ov123_020e46dc, s32 *, 0x10), -1, temp_r2,
                            M2C_FIELD(&data_ov123_020d8308, u16 *, 0x12));
        return;
    }
    sp0 = (s32) M2C_FIELD(&data_ov123_020d8308, u16 *, 0xC);
    func_ov123_020c8d2c(M2C_FIELD(data_ov123_020e46dc, s32 *, 0x10), -1, (s32) M2C_FIELD(&data_ov123_020d8308, u16 *, 0xC),
                        M2C_FIELD(&data_ov123_020d8308, u16 *, 0x12));
    func_ov123_020cb618(arg0, &func_ov123_020c3af4);
}
