/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct O O;
typedef struct {
    u8 pad[0x14];
    s32 f14;
    u8 pad2[4];
    s32 cnt;
} I;
struct O {
    u8 pad[8];
    I *in;
    u8 pad1[0x18];
    s32 depth;
    u8 pad2[0x70];
    s32 tab;
};
typedef struct {
    s32 (*fn)(O *, s32, s32, s32, s32);
} H;
extern u8 data_ov123_020db4f8;
extern u8 data_ov123_020db508;
void func_02020d04(void *, void *, s32, s32);
H *func_ov123_0207a194(s32, s32);
void func_ov123_0208ab90(I *);
s32 func_ov123_02087960(O *o, s32 idx, s32 a, s32 b, s32 c) {
    H *h;
    I *in;
    if (o == 0) {
        func_02020d04(&data_ov123_020db508, &data_ov123_020db4f8, 0, 0x101);
    }
    if (o == 0) {
        return 1;
    }
    h = func_ov123_0207a194(o->tab, idx);
    if (h == 0) {
        return 1;
    }
    if (b == 0 || a == 0) {
        a = 0;
        b = 0;
    }
    o->depth++;
    o->in->cnt++;
    h->fn(o, idx, a, b, c);
    o->depth--;
    o->in->cnt--;
    in = o->in;
    if (in->f14 != 0 && in->cnt == 0) {
        func_ov123_0208ab90(in);
        return 0;
    }
    return 1;
}
