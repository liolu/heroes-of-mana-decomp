/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c9468(s32, void *);           /* extern */
M2C_UNK func_ov123_020cadd0(void *);                /* extern */
extern s32 data_ov123_020e4714;

void func_ov123_020c8f8c(void *arg0) {
    s32 *var_r3;
    s32 var_r2;
    s32 var_r4;

    var_r4 = 0;
    var_r2 = 0;
    var_r3 = M2C_FIELD(arg0, s32 **, 8);
    if ((s32) M2C_FIELD(arg0, u8 *, 0xC) > 0) {
        do {
            *var_r3 = (*var_r3 & 0xC1FFFCFF) | 0x200;
            var_r2 += 1;
            var_r3 += 2;
        } while (var_r2 < (s32) M2C_FIELD(arg0, u8 *, 0xC));
    }
    func_ov123_020cadd0(arg0);
    if ((u32) arg0 >= (u32) (data_ov123_020e4714 + 0x228)) {
        var_r4 = 1;
    }
    func_ov123_020c9468(M2C_FIELD(((var_r4 * 0x228) + data_ov123_020e4714), s32 *, 0x224), arg0);
}
