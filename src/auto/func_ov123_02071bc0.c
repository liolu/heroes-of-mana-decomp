/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_0206cd00(s32);                   /* extern */

s32 func_ov123_02071bc0(void *arg0) {
    void *temp_r6;
    s32 temp_r5;
    s32 temp_r4;

    temp_r6 = M2C_FIELD(arg0, void **, 0x64);
    temp_r5 = func_0200fa98();
    temp_r4 = M2C_FIELD(temp_r6, s32 *, 0xF8);
    if (temp_r4 != 0) {
        M2C_FIELD(temp_r6, s32 *, 0xF8) = 0;
        func_ov123_0206cd00(temp_r4);
    }
    func_0200faac(temp_r5);
    return temp_r4;
}
