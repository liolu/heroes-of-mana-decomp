/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 b0;
    u8 b1;
    s16 h;
    s32 w;
} Pk;

extern u8 data_ov123_020e20cc[];

s16 func_ov123_020a67dc(s32 v);
s32 func_ov123_020a67f4(s32 v);
void func_ov123_020a684c(s32 a, s32 b, s32 c, s32 d, Pk *p, s32 n);
void func_ov123_020a68cc(void *p, s32 v, s32 n);

void func_ov123_020a6dc0(s32 a, s32 b, s32 c, s32 d) {
    Pk p;

    func_ov123_020a68cc(&p, 0, 8);
    p.b1 = 2;
    p.h  = func_ov123_020a67dc(0x5790);
    p.w  = func_ov123_020a67f4(*(s32 *) (data_ov123_020e20cc + 0x10));
    if (c == 0xFF || *(s8 *) (data_ov123_020e20cc + 0x18) == 0) {
        p.w = -1;
    }
    func_ov123_020a684c(d, a, b, 0, &p, 8);
}
