/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
s32 func_ov123_02067efc();                          /* extern */
extern s32 data_ov123_020e305c;

s32 func_ov123_020ad368(void) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    if ((data_ov123_020e305c == 7) && (func_ov123_02067efc() == 3)) {
        data_ov123_020e305c = 4;
        func_0200faac(temp_r4);
        return 1;
    }
    func_0200faac(temp_r4);
    return 0;
}
