#include "m2c.h"

typedef struct Q {
    u16 x;
    u16 y;
    u16 t;
    u16 v;
} Q;
typedef struct D {
    u8 pad[0xdd4];
    u32 a;
    u8 pad2[4];
    u32 f0 : 24;
    u32 f : 1;
    u32 f1 : 7;
} D;
extern D data_ov122_02065604;
void func_ov122_02055808(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(Q *);
s32 func_ov122_020535e0(s32, s32, s32, s32, s32, s32);

s32 func_ov122_020558b0(s32 n) {
    Q q;
    while (1) {
        func_ov122_02055808();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&q) != 0);
        if (q.t == 1) {
            if (q.v == 0) {
                s32 t = func_ov122_020535e0(q.x, q.y, 0, 0x34, data_ov122_02065604.f, data_ov122_02065604.a);
                if (t != n) {
                    return 0;
                }
            }
        } else {
            return 1;
        }
    }
}
