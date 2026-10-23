/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"
s16 func_ov123_020a67dc(u16);
void func_ov123_020a68cc(void *, s32, s32);
void func_ov123_020a68d8(void *, void *, s32);
s32 func_ov123_020a6a90(void *, s32, void *, s32);
void func_ov123_020a6dc0(void *, s16, s32, s32);
void func_ov123_020a6e28(void *, s32, s16, s16, s32, s32, void *);
void func_ov123_020a6e88(s32, void *, void *, void *, void *, void *);
s16 func_ov123_020a6ee4(void *);
void func_ov123_020a8000(s32);
void func_ov123_020a8cac(void *);
void *func_ov123_020a8cc0(s32);
typedef struct T {
    s8 a;
    s16 b;
    s16 c;
} T;
typedef struct M {
    s16 hdr;
    u8 mac[8];
} M;
extern u8 data_ov123_020dd52c[];
extern u8 *data_ov123_020e20b4;
extern u8 data_ov123_020e20b8[];
s32 func_ov123_020a70d4(s32 arg0, void *arg1, s32 arg2) {
    T t;
    u8 mac[8];
    u8 *p;
    u8 *q;
    u8 *x;
    t.a = 0;
    t.b = 0;
    t.c = 0;
    p   = data_ov123_020e20b4;
    func_ov123_020a68cc(p, 0, 0x5DC);
    q = func_ov123_020a8cc0(0x210);
    if (q == NULL) {
        func_ov123_020a8000(2);
        return -1;
    }
    func_ov123_020a68cc(q, 0, 0x210);
    x = p + 0x18;
    func_ov123_020a68d8(data_ov123_020e20b8, arg1, 8);
    func_ov123_020a68d8(mac, data_ov123_020e20b8, 8);
    t.b = func_ov123_020a6ee4(q + 4);
    if (t.b < 0) {
        func_ov123_020a8000(3);
        if (q != NULL) {
            func_ov123_020a8cac(q);
        }
        return -1;
    }
    *q               = 0;
    *(s16 *) (q + 2) = func_ov123_020a67dc(t.b);
    t.b += 4;
    func_ov123_020a6e88(0, x, q, &t.b, &t.c, &t);
    t.c |= 0x10;
    if (func_ov123_020a6a90(mac, 8, data_ov123_020dd52c, 6) != 0) {
        func_ov123_020a8000(2);
        if (q != NULL) {
            func_ov123_020a8cac(q);
        }
        return -1;
    }
    func_ov123_020a6e28(p, 0x1000, t.b, t.c, t.a, 0x11, mac);
    t.b += 0x18;
    func_ov123_020a6dc0(p, t.b, 0xFF, arg2);
    if (q != NULL) {
        func_ov123_020a8cac(q);
    }
    return 0;
}
