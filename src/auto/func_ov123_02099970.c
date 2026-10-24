/* compiler: 1.2/sp3 */
/* near start: 11 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    u8 pad[4];
    u16 state;
    u16 flag;
} St;

extern St *data_ov123_020e172c;
extern s32 func_ov123_020916ac(void);
extern void func_ov123_02099524(s32, s32);

s32 func_ov123_02099970(void) {
    s32 r;
    u16 v;
    if (data_ov123_020e172c == 0) {
        return 0;
    }
    v = data_ov123_020e172c->state;
    if (v == 1) {
        return v;
    }
    r = func_ov123_020916ac();
    if (r == 5) {
        v                          = 4;
        data_ov123_020e172c->state = v;
        data_ov123_020e172c->flag  = 1;
        return v;
    }
    if (r < 0) {
        if (r >= -10) {
            func_ov123_02099524(9, r - 0x2bc);
            v                          = 8;
            data_ov123_020e172c->state = v;
        } else {
            func_ov123_02099524(5, r);
            v                          = 7;
            data_ov123_020e172c->state = v;
        }
        return v;
    }
    return 2;
}
