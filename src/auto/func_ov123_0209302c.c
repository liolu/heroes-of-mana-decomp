/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad[0xD0B];
    u8 lo : 4;
    u8 hi : 4;
    u8 pad2[6];
    u8 b12;
    u8 pad3[3];
    u16 h16;
} S;
s32 func_ov123_02092d40(s32);
s32 func_ov123_02092eec(S *);
s32 func_ov123_0209335c(S *);
void func_ov123_02093498(s32);

s32 func_ov123_0209302c(S *arg0, s32 arg1) {
    s32 state = arg1;
    switch (state) {
        case 3:
            if (arg0->b12 != 0 || arg0->h16 != 0) {
                if (func_ov123_02092d40(1) != 0) {
                    state = 4;
                } else {
                    state = func_ov123_02092eec(arg0);
                }
            } else {
                if (arg0->hi >= 1) {
                    state = 6;
                } else {
                    state = func_ov123_0209335c(arg0);
                }
            }
            break;
        case 4:
            state = func_ov123_02092eec(arg0);
            break;
        case 5:
            if (arg0->hi >= 1) {
                state = 6;
            } else {
                state = func_ov123_0209335c(arg0);
            }
            break;
    }
    func_ov123_02093498(state);
    return state;
}
