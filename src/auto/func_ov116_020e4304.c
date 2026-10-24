#include "m2c.h"
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(void *);
void func_020037e8(s32);
void func_ov116_020e22e4(void);
void func_ov116_020e4304(void) {
    u16 sp[4];
    do {
        func_ov116_020e22e4();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(sp) != 0);
    } while (sp[2] == 1);
    do {
        func_ov116_020e22e4();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(sp) != 0);
    } while (!(sp[2] == 1 && sp[3] == 0));
    func_020037e8(0x66);
}
