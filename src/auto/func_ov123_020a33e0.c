/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct S {
    u8 pad0[8];
    s32 f8;
    u8 pad1[1];
    u8 cnt;
    u8 pad2[0xf4 - 0xe];
    s32 f4[0x1a];
    u8 pad3[0x18c - 0xf4 - 0x68];
    s32 f18c;
    s32 f190;
    u8 pad4[0x1a0 - 0x194];
    s32 st;
    u8 pad5[0x1a9 - 0x1a4];
    u8 c1a9;
    u8 pad6[0x1b0 - 0x1aa];
    u16 h1b0;
    u8 pad7[0x210 - 0x1b2];
    s32 w210[8];
    u8 pad9[0x60];
    u16 h290[8];
    u8 pad8[0x30];
    u8 b2d0[8];
} S;
typedef struct R {
    s32 w0;
    u8 b0;
    u8 b1;
} R;

S *func_ov123_0209d368(void);
void func_ov123_02088874(s32, char *, s32);
s32 func_ov123_0209a9b8(void);
void func_ov123_020a2fe4(s32, s32);
u32 func_02026aec(u8 *, s32, s32);
s32 func_ov123_02088880(s32, s32);
void func_ov123_020a30a8(void);
void *func_ov123_0209a970(s32);
u8 *func_ov123_0209a8ec(s32);
void func_ov123_02088584(s32, void *);
void func_ov123_0209f47c(s32);

extern char data_ov123_020dd490[];
extern char data_ov123_020dd49c[];
extern char data_ov123_020dd4a8[];

void func_ov123_020a33e0(s32 unused, s32 a, s32 b, s32 c, s32 cnt, u8 *str) {
    s32 id;
    s32 t;
    u32 v;
    u8 *r;
    R *q;
    S *s;

    if (func_ov123_0209d368() == 0 || func_ov123_0209d368()->st != 7 || func_ov123_0209d368()->c1a9 != 0) {
        func_ov123_02088874(a, data_ov123_020dd490, -1);
        return;
    }
    id = func_ov123_0209a9b8();
    if (id == -1) {
        func_ov123_02088874(a, data_ov123_020dd49c, -1);
        func_ov123_020a2fe4(6, 0xfffeabc4);
        return;
    }
    if (b != func_ov123_0209d368()->w210[func_ov123_0209d368()->cnt] ||
        c != func_ov123_0209d368()->h290[func_ov123_0209d368()->cnt]) {
        if (*str != 0) {
            v = func_02026aec(str, 0, 10);
            if (v == func_ov123_0209d368()->f4[func_ov123_0209d368()->cnt]) {
                func_ov123_0209d368()->w210[func_ov123_0209d368()->cnt] = b;
                func_ov123_0209d368()->h290[func_ov123_0209d368()->cnt] = c;
                goto ok;
            }
        }
        func_ov123_02088874(a, data_ov123_020dd4a8, -1);
        return;
    }
ok:
    s       = func_ov123_0209d368();
    s->f18c = 0;
    s->f190 = 0;
    if (func_ov123_02088880(a, func_ov123_0209d368()->f8) == 0) {
        func_ov123_020a2fe4(6, 0xfffec5e6);
        return;
    }
    func_ov123_020a30a8();
    if (func_ov123_0209d368()->cnt == 0) {
        t = cnt >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        func_ov123_0209d368()->h1b0 = t;
    }
    q     = func_ov123_0209a970(id);
    r     = func_ov123_0209a8ec(id);
    q->w0 = a;
    func_ov123_0209d368()->cnt++;
    r[0]             = id;
    s                = func_ov123_0209d368();
    r[1]             = s->b2d0[func_ov123_0209d368()->cnt - 1];
    *(u16 *) (r + 2) = 0;
    *(u32 *) (r + 4) = 0;
    func_ov123_02088584(a, r);
    func_ov123_0209f47c(2);
}
