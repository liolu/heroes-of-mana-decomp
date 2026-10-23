#include "m2c.h"
typedef struct {
    u16 x, y, touch, valid;
} T;
void func_ov115_020e28d4(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(T *);
void func_ov115_020e625c(void) {
    T t;
    do {
        func_ov115_020e28d4();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&t) != 0);
    } while (t.touch != 1 || t.valid != 0);
}
