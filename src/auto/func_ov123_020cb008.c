/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c9468(s32, u32);              /* extern */
M2C_UNK func_ov123_020cadd0();                      /* extern */
extern s32 data_ov123_020e4754;

void func_ov123_020cb008(u32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    func_ov123_020cadd0();
    if (arg0 >= (u32) (data_ov123_020e4754 + 0x1A0)) {
        var_r4 = 1;
    }
    func_ov123_020c9468(M2C_FIELD(((var_r4 * 0x1A0) + data_ov123_020e4754), s32 *, 0x19C), arg0);
}
