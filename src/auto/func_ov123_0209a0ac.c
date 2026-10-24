/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 p0[0x24];
    s32 f24;
    u8 p1[0x2D - 0x28];
    u8 f2d;
    u8 p2[0x448 - 0x2E];
    s32 f448[0x40];
    u8 p3[0x624 - 0x548];
    u8 f624[0x20];
    s32 f644;
} Dummy;
typedef struct {
    u8 p0[0x24];
    s32 f24;
    u8 p1[5];
    u8 f2d;
    u8 p2[0x90 - 0x2E];
    void (*f90)(s32, s32, s32, s32, s32, s32);
    s32 f94;
    u8 p3[0x361 - 0x98];
    u8 f361;
    u8 p4[0x364 - 0x362];
    s32 f364;
    u8 f368;
    volatile u8 f369;
    u8 f36a;
    u8 p5[0x448 - 0x36B];
    s32 f448[0x40];
    u8 p6[0x624 - 0x548];
    u8 f624[0x20];
    s32 f644;
} G;

extern G *data_ov123_020e1748;
extern s32 data_ov123_020e1750[];
extern u8 data_ov123_020dd358;

u8 *func_ov123_02088550(s32);
void func_ov123_0208bf30(void);
void func_ov123_0208d4cc(s32);
void func_ov123_02099524(s32, s32);
s32 func_ov123_0209a820(u8);
void func_ov123_0209a880(s32);
void func_ov123_0209ccc8(s32, void *, s32);
s32 func_ov123_0209cdb0(s32);
s32 func_ov123_020a2760(void);
void func_ov123_020a2808(void);
void func_ov123_020a2a0c(s32, s32);
void func_ov123_020a2c2c(s32);
s32 func_ov123_020a2c50(s32, s32, s32);
void func_ov123_020a2f9c(void);
void func_ov123_020a4990(u8);

void func_ov123_0209a0ac(s32 arg0, u32 arg1) {
    s32 r10;
    u8 r8;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 r4;
    u8 *obj;
    G *g;

    r7  = 0;
    r10 = 0;
    if (func_ov123_020a2760() != 0) {
        return;
    }
    switch (arg1) {
        case 0:
        case 1:
            r4 = 0;
            break;
        case 2:
        case 3:
            r4 = 6;
            r6 = -0x1DB0;
            break;
        case 4:
            r6 = -0x1DB1;
            r4 = 9;
            break;
    }
    if (r4 == 0) {
        obj = func_ov123_02088550(arg0);
        if (obj == 0) {
            return;
        }
        r8 = obj[1];
        r5 = 1;
        if (!(data_ov123_020e1748->f644 & (1 << r8))) {
            r5 = 0;
        }
        func_ov123_020a4990(r8);
        if ((data_ov123_020e1748->f369 == 2 && arg1 == 0) || (data_ov123_020e1748->f369 == 3 && r8 == 0)) {
            r10 = 1;
        }
        r7                          = func_ov123_0209a820(r8);
        data_ov123_020e1750[obj[0]] = 0;
        data_ov123_020e1748->f361   = data_ov123_020e1748->f361 - 1;
        data_ov123_020e1748->f368   = data_ov123_020e1748->f368 - 1;
    }
    if (data_ov123_020e1748->f2d == 0 && data_ov123_020e1748->f24 == 6 && r5 == 0) {
        if (data_ov123_020e1748->f369 != 2) {
            return;
        }
        if (r4 != 0) {
            return;
        }
        func_ov123_020a2808();
        func_ov123_020a2c2c(r7);
        return;
    }
    if (func_ov123_020a2c50(r4, r6, r7) != 0) {
        return;
    }
    if (r4 != 0) {
        func_ov123_02099524(r4, r6);
        return;
    }
    if (data_ov123_020e1748->f2d == 0 && (data_ov123_020e1748->f369 == 2 || data_ov123_020e1748->f369 == 3)) {
        u8 t   = data_ov123_020e1748->f361;
        s32 t2 = t + 2;
        if (data_ov123_020e1748->f448[t2] != 0) {
            data_ov123_020e1748->f624[t + 1] = data_ov123_020e1748->f624[t2];
            t                                = data_ov123_020e1748->f361;
            func_ov123_020a2a0c(t + 1, t + 3);
        }
    }
    if (data_ov123_020e1748->f369 == 2) {
        if (data_ov123_020e1748->f2d == 0) {
            func_ov123_020a2808();
        } else if (data_ov123_020e1748->f361 == 0) {
            func_ov123_0209ccc8(1, &data_ov123_020dd358, 0);
        }
    } else if (data_ov123_020e1748->f361 == 0) {
        func_ov123_0209ccc8(1, &data_ov123_020dd358, 0);
    }
    if (data_ov123_020e1748->f369 == 0 || data_ov123_020e1748->f369 == 1) {
        data_ov123_020e1748->f36a = data_ov123_020e1748->f368;
        func_ov123_0208d4cc(data_ov123_020e1748->f364);
    }
    g = data_ov123_020e1748;
    if (g->f90 != 0 && r5 != 0) {
        if (arg1 == 0) {
            r5 = 1;
        } else {
            r5 = 0;
        }
        data_ov123_020e1748->f90(r4, r5, r10, r8, func_ov123_0209cdb0(r7), g->f94);
    }
    if (data_ov123_020e1748->f2d == 0 && data_ov123_020e1748->f369 == 2) {
        return;
    }
    if (data_ov123_020e1748->f361 != 0) {
        return;
    }
    func_ov123_0208bf30();
    func_ov123_020a2f9c();
    func_ov123_0209a880(3);
}
