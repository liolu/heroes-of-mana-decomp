#include "m2c.h"
typedef struct {
    u32 lo : 16;
    u32 hi : 16;
} H;
extern s32 func_ov123_020d3a8c(void);
extern s32 func_ov123_020d4a4c(void);
extern void func_ov122_0205ce70(s32);
extern void func_ov122_0205ce50(s32, s32);
extern void func_020037e8(s32);
extern s32 func_ov123_020d3344(void);
extern void func_ov122_0205db1c(s32);
extern s32 func_ov122_02055af0(void);
typedef struct {
    u8 pad[0xc];
    H h;
} W;
extern W data_ov122_020647c0;
extern u8 *data_0203673c;
typedef struct {
    u8 pad[0xc];
    s32 v;
} X;
extern X data_ov122_020664b0;
typedef struct {
    u32 a : 8;
    u32 f : 2;
    u32 b : 22;
} Y;
typedef struct {
    u8 pad[0xde0];
    Y y;
} Z;
extern Z data_ov122_02065604;
extern H data_ov122_020647cc;

s32 func_ov122_0205ebd4(void) {
    u32 k;
    u32 hi;
    if (func_ov123_020d3a8c() != 0) {
        data_ov122_020647c0.h.hi = func_ov123_020d4a4c() + 0x32;
        hi                       = data_ov122_020647c0.h.hi;
        if (hi >= 0x32 && hi <= 0x5c) {
            k = hi - 0x32;
            if ((*(u32 *) (*(u8 **) (data_0203673c + 0x2c) + (k >> 5) * 4 + 0x1000 + 0x90) >> (k & 0x1f) & 1) == 0) {
                func_ov122_0205ce70(0x80000000);
                data_ov122_020664b0.v   = 1;
                data_ov122_02065604.y.f = 1;
                func_ov122_0205ce50(0x100, 0x80000000);
                func_020037e8(0x86);
                for (;;) {
                    if (func_ov123_020d3344() == 0) {
                        func_ov122_0205db1c(3);
                        return 0;
                    }
                    if (func_ov122_02055af0() == 4) {
                        break;
                    }
                }
                data_ov122_020647cc.hi = data_ov122_020647cc.hi - 0x32;
                k                      = data_ov122_020647c0.h.hi;
                if (k < 0x32) {
                    *(u32 *) (*(u8 **) (data_0203673c + 0x2c) + 0x1090 + (k >> 5) * 4) |= 1 << (k & 0x1f);
                }
            }
        }
    }
    return 1;
}
