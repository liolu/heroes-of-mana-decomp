/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02067bac();                          /* extern */
s32 func_ov123_02068af8(M2C_UNK);                   /* extern */

s32 func_ov123_02068dcc(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0200fa98();
    if (func_ov123_02067bac() == 0) {
        func_0200faac(temp_r5);
        return 0;
    }
    temp_r0 = func_ov123_02068af8(arg0);
    if (temp_r0 == 0) {
        func_0200faac(temp_r5);
        return 0;
    }
    func_0200faac(temp_r5);
    return temp_r0 + 0x10;
}
