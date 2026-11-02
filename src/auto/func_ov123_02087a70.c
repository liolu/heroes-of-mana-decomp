/* compiler: 1.2/sp3 */
#include "m2c.h"

extern u8 data_ov123_020db4f8[];
extern u8 data_ov123_020db508[];
void func_02020d04(void *a, void *b, u32 c, s32 d);
void func_ov123_0208ab90(void *p);

typedef struct Sub {
    u8 p0[0x14];
    s32 f14;
    u8 p1[4];
    s32 f1c;
} Sub;

typedef struct Obj {
    u8 p0[8];
    Sub *sub;
    u8 p1[0x18];
    s32 f24;
    u8 p2[0xc];
    void (*fn)(void *, s32);
} Obj;

s32 func_ov123_02087a70(Obj *arg0, s32 arg1) {
    Sub *s;

    if (arg0 == NULL) {
        func_02020d04(data_ov123_020db508, data_ov123_020db4f8, 0, 0xD9);
    }
    if (arg0 == NULL) {
        return 1;
    }
    if (arg0->fn == NULL) {
        return 1;
    }
    arg0->f24 += 1;
    arg0->sub->f1c += 1;
    arg0->fn(arg0, arg1);
    arg0->f24 -= 1;
    arg0->sub->f1c -= 1;
    if (arg0->sub->f14 != 0 && arg0->sub->f1c == 0) {
        func_ov123_0208ab90(arg0->sub);
        return 0;
    }
    return 1;
}
