/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_02008fb4(u16, M2C_UNK);                    /* extern */
M2C_UNK func_ov123_020b7900();                      /* extern */
M2C_UNK func_ov123_020b79c0(s32, s32);              /* extern */
M2C_UNK func_ov123_020b7a4c(s32, s32);              /* extern */
M2C_UNK func_ov123_020c98a8(s32);                   /* extern */
M2C_UNK func_ov123_020c9970(s32, M2C_UNK);          /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;

void func_ov123_020b7bc4(void) {
    s32 var_r7;
    s32 var_r6;
    s32 var_r5;
    s32 var_r4;

    var_r7 = func_02008fb4(data_ov123_020e4650, 0x1C);
    var_r6 = M2C_FIELD(data_ov123_020e4654, u8 *, 0x51);
    func_ov123_020c9970(M2C_FIELD(data_ov123_020e4654, s32 *, 0xC), 0);
    if (var_r6 > 5) {
        var_r6 = 5;
    }
    var_r5 = var_r7;
    var_r4 = 0;
    if (var_r6 > 0) {
        do {
            func_ov123_020b7a4c(var_r5, var_r4);
            var_r4 += 1;
            var_r5 += 1;
        } while (var_r4 < var_r6);
    }
    var_r4 = 0;
    if (var_r6 > 0) {
        do {
            func_ov123_020b79c0(var_r7, var_r4);
            var_r4 += 1;
            var_r7 += 1;
        } while (var_r4 < var_r6);
    }
    func_ov123_020c98a8(M2C_FIELD(data_ov123_020e4654, s32 *, 0xC));
    func_ov123_020b7900();
}
