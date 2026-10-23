#include "m2c.h"
typedef struct {
    u16 a;
    u16 b;
    u16 touch;
    u16 valid;
} TP;
void func_ov117_020e39c8(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TP *);
void func_020037e8(s32);
void func_ov117_020e3a74(s32 wait) {
    TP t;
    s32 cnt = 0x12c;
    for (;;) {
        func_ov117_020e39c8();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&t) != 0);
        if (t.touch != 1) {
            break;
        }
        if (wait != 0) {
            if (cnt-- < 0) {
                return;
            }
        }
    }
    for (;;) {
        func_ov117_020e39c8();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&t) != 0);
        if (t.touch == 1 && t.valid == 0) {
            func_020037e8(0x66);
            return;
        }
        if (wait != 0) {
            if (cnt-- < 0) {
                return;
            }
        }
    }
}
