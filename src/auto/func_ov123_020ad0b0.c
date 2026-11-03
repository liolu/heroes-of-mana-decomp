/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_0200fa98(void);
void func_0200faac(s32);
extern s32 data_ov123_020e3098;
extern s32 data_ov123_020e309c;
extern s32 data_ov123_020e30cc;

void func_ov123_020ad0b0(void) {
    s32 i;
    s32 *p;
    s32 old;

    old                 = func_0200fa98();
    data_ov123_020e3098 = 0;
    data_ov123_020e309c = 0;
    p                   = &data_ov123_020e30cc;
    i                   = 0;
    do {
        *p++ = 0;
        i++;
    } while (i < 4);
    func_0200faac(old);
}
