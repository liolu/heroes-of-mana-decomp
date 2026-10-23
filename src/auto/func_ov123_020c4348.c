/* compiler: 1.2/sp3 */
#include "m2c.h"
extern u64 func_0200f510(void);
extern int func_020213f0(const void *, const void *, int);
extern void func_ov123_020cb5f8(s32, s32);
extern u8 *data_ov123_020e46e0;
extern u8 data_ov123_020d831c[];

typedef void (*Cb)(s32);

void func_ov123_020c4348(s32 arg) {
    u8 *g;
    u64 now = func_0200f510();
    s32 i;
    s32 a;
    s32 b;
    g = data_ov123_020e46e0;
    b = 0;
    if (now < *(u64 *) (g + 0x1b78) + 0x17f898) {
        return;
    }
    a = 0;
    for (i = 0; i < 16; i++) {
        if (func_020213f0(g + 0x1300 + i * 7, data_ov123_020d831c, 6) != 0) {
            if (g[0x1306 + i * 7] != 0) {
                a = 1;
            } else {
                b = 1;
            }
        }
    }
    if (a != 0 && b != 0) {
        Cb cb = *(Cb *) (g + 0x1370);
        if (cb != 0) {
            cb(2);
        }
    } else if (a != 0) {
        Cb cb = *(Cb *) (g + 0x1370);
        if (cb != 0) {
            cb(1);
        }
    } else if (b == 0) {
        Cb cb = *(Cb *) (g + 0x1370);
        if (cb != 0) {
            cb(0);
        }
    }
    *(s32 *) (data_ov123_020e46e0 + 0x1b80) = 0;
    data_ov123_020e46e0[0x1b86]             = 1;
    func_ov123_020cb5f8(0, arg);
}
