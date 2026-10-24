/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02067c6c(void);
s32 func_ov123_02091360(void);
s32 func_ov123_020913d8(s32);
s32 func_ov123_02092f4c(s32, s32);
s32 func_ov123_020930fc(s32);
s32 func_ov123_0209321c(s32);
s32 func_ov123_020933a4(s32);
s32 func_ov123_02093448(s32);

s32 func_ov123_02093634(void) {
    s32 a;
    s32 v;
    s32 t;
    a = func_ov123_020913d8(0x10);
    v = func_ov123_02091360();
    t = func_ov123_02067c6c();
    if (v == 2 && t == 3) {
        v = func_ov123_02093448(a);
    } else if (v == 6) {
        v = func_ov123_02092f4c(a, v);
    } else if (t == 3 || t == 6) {
        v = func_ov123_02092f4c(a, v);
        if (v != 7) {
            if (v == 3) {
                v = func_ov123_020933a4(a);
            } else if (v == 4) {
                v = func_ov123_0209321c(a);
            } else if (v == 5) {
                v = func_ov123_020930fc(a);
            }
        }
    }
    return v;
}
