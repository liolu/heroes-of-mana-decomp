#include "m2c.h"

typedef struct F {
    u32 a : 1;
    u32 pad : 2;
    u32 b : 8;
} F;
typedef struct G {
    u8 pad[0x488];
    F f;
} G;
typedef struct Tp {
    u16 x;
    u16 y;
    u16 z;
    u16 w;
} Tp;
void func_ov112_020e289c(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(Tp *);
u32 func_ov112_020e5174(u16, u16, s32, s32, u32, u32);
extern G data_ov112_020ec588;

s32 func_ov112_020e29ac(u32 arg) {
    Tp tp;
    u32 r;
    while (1) {
        func_ov112_020e289c();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.z == 1) {
            if (tp.w == 0) {
                r = func_ov112_020e5174(tp.x, tp.y, arg, 0x78, data_ov112_020ec588.f.a, data_ov112_020ec588.f.b);
                if (r != arg) {
                    return 0;
                }
            }
        } else {
            return 1;
        }
    }
}
