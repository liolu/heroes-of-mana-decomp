#include "m2c.h"

typedef struct TP {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;

typedef struct D {
    u8 pad[0xA10];
    u32 w10;
    u32 pad16 : 16;
    u32 b15 : 1;
    u32 pad2 : 2;
    u32 m : 2;
    u32 rest : 11;
} D;

void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TP *);
void func_020037e8(s32);
s32 func_ov120_020eaff4(u16, u16, s32, s32, s32, s32);
void func_ov120_020eb20c(void);
s32 func_ov120_020eb2b8(s32);
extern D data_ov120_020f46dc;

s32 func_ov120_020f0f78(void) {
    TP tp;
    s32 res;
    s32 r4;
    s32 r5;

    r5 = 0;
    r4 = 0x10;
    for (;;) {
        func_ov120_020eb20c();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.touch == 1) {
            if (tp.valid == 0) {
                if (r5 == 0) {
                    if (r4 > 0) {
                        r5 = 1;
                        r4 -= 1;
                    } else {
                        r5 = 0;
                    }
                    res = func_ov120_020eaff4(tp.x, tp.y, 0, 0x23, data_ov120_020f46dc.b15, (u16) data_ov120_020f46dc.w10);
                    switch (res) {
                        case 30:
                        case 22:
                            func_020037e8(0x66);
                            data_ov120_020f46dc.m = 1;
                            if (func_ov120_020eb2b8(res) == 0) {
                                data_ov120_020f46dc.m = 0;
                                break;
                            }
                            return 1;
                        case 31:
                        case 23:
                            func_020037e8(0x66);
                            data_ov120_020f46dc.m = 2;
                            if (func_ov120_020eb2b8(res) == 0) {
                                data_ov120_020f46dc.m = 0;
                                break;
                            }
                            return 0;
                    }
                } else {
                    if (r4 > 0) {
                        r5 = 1;
                        r4 -= 1;
                    } else {
                        r5 = 0;
                    }
                }
            }
        } else {
            r4 = 0x10;
            r5 = 0;
        }
    }
}
