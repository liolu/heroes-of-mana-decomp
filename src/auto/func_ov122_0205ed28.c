#include "m2c.h"

typedef struct HW {
    u32 lo : 16;
    u32 hi : 16;
} HW;
typedef struct A {
    u8 p[0xc];
    HW h;
} A;
typedef struct Tb {
    u8 p[0x2c];
    u8 *t;
} Tb;
extern A data_ov122_020647c0;
extern HW data_ov122_020647cc;
extern Tb *data_0203673c;
extern struct {
    u8 p[0xc];
    s32 v;
} data_ov122_020664b0;
extern struct {
    u8 p[0xde0];
    u32 v;
} data_ov122_02065604;
s32 func_ov123_020d4520(void);
s32 func_ov123_020d45ac(s32);
s32 func_ov123_020d4548(s32);
void func_ov122_0205ce60(s32, u32);
void func_020037e8(s32);
s32 func_ov123_020d3344(void);
void func_ov122_0205db1c(s32);
s32 func_ov122_02055af0(void);

s32 func_ov122_0205ed28(void) {
    s32 i = 0;
    if (func_ov123_020d4520() > 0) {
        do {
            if (func_ov123_020d45ac(i) != 0) {
                data_ov122_020647c0.h.hi = func_ov123_020d4548(i) + 0x32;
                if (data_ov122_020647c0.h.hi >= 0x32 && data_ov122_020647c0.h.hi <= 0x5c) {
                    u32 k = data_ov122_020647c0.h.hi - 0x32;
                    if (!((*(u32 *) (data_0203673c->t + (k >> 5) * 4 + 0x1090) >> (k & 0x1f)) & 1)) {
                        data_ov122_020664b0.v = 1;
                        data_ov122_02065604.v &= ~0x300;
                        func_ov122_0205ce60(0x100, 0x80000000);
                        func_020037e8(0x86);
                        while (1) {
                            if (func_ov123_020d3344() == 0) {
                                func_ov122_0205db1c(3);
                                return 0;
                            }
                            if (func_ov122_02055af0() == 4) {
                                u32 j;
                                data_ov122_020647cc.hi = data_ov122_020647cc.hi - 0x32;
                                j                      = data_ov122_020647c0.h.hi;
                                if (j < 0x32) {
                                    u32 *p = (u32 *) (data_0203673c->t + (j >> 5) * 4);
                                    p[0x1090 / 4] |= 1 << (j & 0x1f);
                                }
                                break;
                            }
                        }
                    }
                }
            }
            i++;
        } while (i < func_ov123_020d4520());
    }
    return 1;
}
