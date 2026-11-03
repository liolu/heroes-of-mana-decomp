/* compiler: 1.2/sp2p3 -thumb */
/* near start: 13 diffs with profile "1.2/sp2p3 -thumb" */
#include "m2c.h"

extern s32 data_ov123_020e3098;
extern s32 data_ov123_020e309c;
extern s32 data_ov123_020e30cc[];

s32 func_0200fa98(void);
void func_0200faac(s32);

s32 func_ov123_020ad070(void) {
    s32 r;
    s32 n;
    s32 st;

    st = func_0200fa98();
    n  = data_ov123_020e309c;
    if (data_ov123_020e3098 == n) {
        r = 0;
    } else {
        r = data_ov123_020e30cc[n];
        n += 1;
        data_ov123_020e309c = n;
        if (n >= 4) {
            data_ov123_020e309c = 0;
        }
    }
    func_0200faac(st);
    return r;
}
