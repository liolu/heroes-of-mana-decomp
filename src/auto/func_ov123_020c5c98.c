/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK MB_DisconnectChild(u16);                    /* extern */
s32 func_0200fa98(void);                            /* extern */
M2C_UNK func_0200faac(s32);                            /* extern */
s32 func_0201b10c(u16, M2C_UNK);                    /* extern */
M2C_UNK func_ov123_020c58f4(M2C_UNK);               /* extern */
extern void *data_ov123_020e46e8;

void func_ov123_020c5c98(void) {
    u16 var_r9;
    u16 var_r8;
    s32 temp_r7;
    s32 old;

    var_r8 = 0;
    var_r9 = 1;
    do {
        temp_r7 = 1 << var_r9;
        if (M2C_FIELD(data_ov123_020e46e8, u16 *, 0xA) & temp_r7) {
            if (func_0201b10c(var_r9, 3) != 0) {
                var_r8 |= temp_r7;
            } else {
                temp_r7                                    = (u16) ~temp_r7;
                old                                        = func_0200fa98();
                M2C_FIELD(data_ov123_020e46e8, u16 *, 2)   = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 2) & temp_r7);
                M2C_FIELD(data_ov123_020e46e8, u16 *, 4)   = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 4) & temp_r7);
                M2C_FIELD(data_ov123_020e46e8, u16 *, 6)   = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 6) & temp_r7);
                M2C_FIELD(data_ov123_020e46e8, u16 *, 8)   = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 8) & temp_r7);
                M2C_FIELD(data_ov123_020e46e8, u16 *, 0xA) = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 0xA) & temp_r7);
                M2C_FIELD(data_ov123_020e46e8, u16 *, 0xC) = (u16) (M2C_FIELD(data_ov123_020e46e8, u16 *, 0xC) & temp_r7);
                func_0200faac(old);
                MB_DisconnectChild(var_r9);
            }
        }
        var_r9 += 1;
    } while ((u32) var_r9 < 0x10U);
    if (var_r8 == 0) {
        func_ov123_020c58f4(7);
        return;
    }
    func_ov123_020c58f4(4);
}
