#include "m2c.h"

extern s32 data_ov112_020eedb0;
void func_ov112_020e289c(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(u16 *);
void func_020037e8(s32);

void func_ov112_020e2a4c(s32 arg0) {
    u16 res[4];
    s32 cnt;

    cnt = 0x12C;
    while (1) {
        func_ov112_020e289c();
        if (data_ov112_020eedb0 != 0) {
            return;
        }
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(res) != 0);
        if (res[2] != 1) {
            break;
        }
        if (arg0 != 0) {
            if (cnt-- < 0) {
                return;
            }
        }
    }
    while (1) {
        func_ov112_020e289c();
        if (data_ov112_020eedb0 != 0) {
            return;
        }
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(res) != 0);
        if (res[2] == 1 && res[3] == 0) {
            func_020037e8(0x66);
            return;
        }
        if (arg0 != 0) {
            if (cnt-- < 0) {
                return;
            }
        }
    }
}
