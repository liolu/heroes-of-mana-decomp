#include "m2c.h"

typedef struct {
    u32 p0 : 31;
    u32 b31 : 1;
} B31;
typedef struct {
    B31 e[1];
} Ent;
typedef struct {
    u8 pad[0x2c];
    u8 *p2c;
} G;
typedef struct {
    u32 p0 : 7;
    u32 b7 : 1;
    u32 p1 : 24;
} F7;
typedef struct {
    u8 pad[0xde0];
    F7 fde0;
    u8 pad1[0xe30 - 0xde4];
    s32 e30;
    s32 e34;
    s32 e38;
} S;
typedef struct {
    s32 a;
    s32 b;
} X;

extern G *data_0203673c;
extern u8 data_ov122_020647c0[];
extern S data_ov122_02065604;
extern X data_ov122_020664b0;

s32 func_ov123_020d4520(void);
void func_ov122_0205ce60(s32, s32);
s32 func_ov123_020d3344(void);
void func_ov122_0205db1c(s32);
s32 func_ov122_02055af0(void);
s32 func_ov123_020d3888(void);
s32 func_ov122_0205db94(void);
s32 func_ov123_020d39b4(void);

s32 func_ov122_0205e474(void) {
    s32 n, i, flag, ok, r, r4, r7;
    u32 id;
    u8 *p;

    n    = func_ov123_020d4520();
    flag = 0;
    for (i = 0; i < n; i++) {
        id = data_ov122_020647c0[i];
        if (id >= 0x32 && id <= 0x5c) {
            if (((B31 *) (data_0203673c->p2c + id * 0x14 + 0xc))->b31) {
                flag = 1;
            }
        }
    }
    if (flag != 0) {
        func_ov122_0205ce60(8, 0x80000000);
        ok = 1;
        do {
            if (func_ov123_020d3344() == 0) {
                func_ov122_0205db1c(3);
                return 0;
            }
            r = func_ov122_02055af0();
            if (r != 1) {
                if (r == 2) {
                    ok = 0;
                }
            } else {
                data_ov122_02065604.fde0.b7 = 1;
                if (func_ov123_020d3888() == 0) {
                    r4 = 3;
                    do {
                        func_ov122_0205db1c(r4);
                    } while (func_ov122_0205db94() == 0);
                    return 0;
                }
                func_ov122_0205ce60(0x10, 0x80000000);
                r7 = 1;
                do {
                    if (func_ov123_020d3344() == 0) {
                        func_ov122_0205db1c(3);
                        return 0;
                    }
                    func_ov122_02055af0();
                    switch (func_ov123_020d39b4()) {
                        case 1:
                            r7                    = 0;
                            data_ov122_020664b0.b = 1;
                            break;
                        case 2:
                            data_ov122_02065604.fde0.b7 = 0;
                            data_ov122_02065604.e30     = 8;
                            data_ov122_02065604.e38     = 0x80;
                            data_ov122_02065604.e34     = 0x36;
                            do {
                                func_ov122_0205ce60(0x40000000, 0x80000000);
                                r7 = 1;
                                do {
                                    if (func_ov123_020d3344() == 0) {
                                        func_ov122_0205db1c(3);
                                        return 0;
                                    }
                                    if (func_ov122_02055af0() == 1) {
                                        r7 = 0;
                                    }
                                } while (r7 != 0);
                            } while (func_ov122_0205db94() == 0);
                            return 0;
                        case 3:
                        case 4:
                            r4 = 3;
                            do {
                                func_ov122_0205db1c(r4);
                            } while (func_ov122_0205db94() == 0);
                            return 0;
                        default:
                            break;
                    }
                } while (r7 != 0);
                ok                          = 0;
                data_ov122_02065604.fde0.b7 = 0;
            }
        } while (ok != 0);
    }
    data_ov122_02065604.fde0.b7 = 0;
    return 1;
}
