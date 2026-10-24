#include "m2c.h"

typedef struct F {
    u32 pad : 9;
    u32 a : 1;
    u32 pad2 : 6;
    u32 b : 16;
} F;
typedef struct G {
    u8 pad[0x410];
    F f;
} G;
typedef struct Tp {
    u16 x;
    u16 y;
    u16 z;
    u16 w;
} Tp;
void func_ov113_020e2338(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(Tp *);
u32 func_ov113_020e2b64(u16, u16, s32, s32, u32, u32);
extern G data_ov113_020e4944;

s32 func_ov113_020e23e4(u32 arg) {
    Tp tp;
    u32 r;
    while (1) {
        func_ov113_020e2338();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.z == 1) {
            if (tp.w == 0) {
                r = func_ov113_020e2b64(tp.x, tp.y, 0, 8, data_ov113_020e4944.f.a, data_ov113_020e4944.f.b);
                if (r != arg) {
                    return 0;
                }
            }
        } else {
            return 1;
        }
    }
}
