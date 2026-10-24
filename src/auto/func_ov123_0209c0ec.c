/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x14];
    s32 count;
    u8 *base;
} G;

typedef struct {
    s32 w0;
    s32 v4;
    u8 pad[0x8e - 8];
    u8 s8e[9];
    u8 s97[8];
} P;

typedef struct {
    u8 pad[0x24];
    u32 color;
} O;

extern G *data_ov123_020e18dc;
extern u8 data_ov123_020dd36c[];
s32 func_ov123_02094a50(u8 *);
O *func_ov123_0209bd34(void);
void func_ov123_02094378(O *, u8 *, u8 *);
s32 func_02024d8c(u8 *, u8 *);
void func_ov123_0207badc(s32, s32);
void func_ov123_02094390(u8 *, s32);
void func_0200cdbc(u8 *, s32, u8 *, s32, s32, s32, s32);
s32 func_ov123_020943cc(O *, u8 *);
s32 func_020213f0(u8 *, u8 *, s32);
void func_ov123_0209c654(s32);
void func_ov123_0207b9fc(s32, s32);

void func_ov123_0209c0ec(s32 a, P *p) {
    u8 buf2[27];
    u8 buf[5];
    s32 found;
    s32 i;
    s32 off;
    s32 t;
    u32 c;
    s32 four;
    s32 five;
    s32 one;

    found = 0;
    if (p->w0 != 0) {
        return;
    }
    i = 0;
    if (i < data_ov123_020e18dc->count) {
        off  = 0;
        four = 4;
        five = 5;
        one  = 1;
        do {
            if (func_ov123_02094a50(data_ov123_020e18dc->base + off) == 1) {
                func_ov123_02094378(func_ov123_0209bd34(), data_ov123_020e18dc->base + off, buf2);
                if (func_02024d8c(buf2, p->s8e) == 0) {
                    func_ov123_0207badc(a, p->v4);
                    func_ov123_02094390(data_ov123_020e18dc->base + off, p->v4);
                    found = one;
                }
            } else if (func_ov123_02094a50(data_ov123_020e18dc->base + off) == 3 ||
                       func_ov123_02094a50(data_ov123_020e18dc->base + off) == 2) {
                c = func_ov123_0209bd34()->color;
                func_0200cdbc(buf, five, data_ov123_020dd36c, (c >> 24) & 0xff, (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff);
                t = p->v4;
                if (t == func_ov123_020943cc(func_ov123_0209bd34(), data_ov123_020e18dc->base + off)) {
                    if (func_020213f0(buf, p->s97, four) == 0) {
                        func_ov123_0207badc(a, t);
                        found = one;
                    }
                }
            }
            i++;
            off += 12;
        } while (i < data_ov123_020e18dc->count);
    }
    if (found != 0) {
        func_ov123_0209c654(p->v4);
    } else {
        func_ov123_0207b9fc(a, p->v4);
    }
}
