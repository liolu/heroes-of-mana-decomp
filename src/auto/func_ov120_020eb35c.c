#include "m2c.h"
typedef struct TP {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;
extern void func_ov120_020eb20c(void);
extern void TP_RequestSamplingAsync(void);
extern s32 TP_WaitCalibratedResult(TP *);
extern void func_020037e8(s32);
void func_ov120_020eb35c(s32 a) {
    TP tp;
    s32 n = 300;
    while (1) {
        func_ov120_020eb20c();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.touch != 1) {
            break;
        }
        if (a == 0) {
            continue;
        }
        if (n-- >= 0) {
            continue;
        }
        return;
    }
    while (1) {
        func_ov120_020eb20c();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.touch == 1 && tp.valid == 0) {
            func_020037e8(0x66);
            return;
        }
        if (a == 0) {
            continue;
        }
        if (n-- >= 0) {
            continue;
        }
        return;
    }
}
