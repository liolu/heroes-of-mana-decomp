/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} RtcTm;

extern s32 data_ov123_020e20a8;
extern s32 data_ov123_020e20c0[];
extern s32 RTC_GetTime(RtcTm *);
extern void func_ov123_020a68cc(void *, s32, s32);

u16 func_ov123_020a66fc(void) {
    RtcTm tm;
    s32 seed;
    s32 *st;

    if (data_ov123_020e20a8 == 0) {
        seed = 0;
        func_ov123_020a68cc(&tm, 0, 12);
        if (RTC_GetTime(&tm) == 0) {
            seed = seed + (tm.a << 10);
            seed = seed + (tm.b << 3);
            seed = seed + tm.c;
        }
        st                  = data_ov123_020e20c0;
        st[0]               = seed;
        st[1]               = 0x5D588B65;
        st[2]               = 0x269EC3;
        data_ov123_020e20a8 = 1;
    }
    st    = data_ov123_020e20c0;
    seed  = st[2] + st[1] * st[0];
    st[0] = seed;
    return (u16) ((((u32) seed >> 16) * 0x7FFF) >> 16);
}
