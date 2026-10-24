#include "m2c.h"

typedef struct {
    u16 p0;
    u16 p2;
    u16 w4;
    u16 w6;
} TP;

typedef struct {
    u8 p[0x4A];
    u16 lo : 4;
    u16 hi : 12;
} S;

extern S data_ov118_020e32e0;
s32 func_0201509c(void *);
void func_02015130(void *);
void func_ov118_020e1c80(void);
void func_020037e8(s32);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TP *);

s32 func_ov118_020e1cd4(void) {
    s32 n;
    u8 buf[8];
    TP tp;
    if (func_0201509c(buf) != 0) {
        func_02015130(buf);
    }
    n = 0x12C;
    while (1) {
        func_ov118_020e1c80();
        if (data_ov118_020e32e0.lo == 2) {
            if (--n < 0) {
                return 0;
            }
            if (((u16) (((*(volatile u16 *) 0x4000130 | *(volatile u16 *) 0x27FFFA8) ^ 0x2FFF) & 0x2FFF)) & 3) {
                func_020037e8(0x66);
                return 0;
            }
        }
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.w4 == 1 && tp.w6 == 0) {
            if (data_ov118_020e32e0.lo == 2) {
                func_020037e8(0x66);
                return 0;
            }
        }
    }
}
