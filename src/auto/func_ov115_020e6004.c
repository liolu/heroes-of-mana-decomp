#include "m2c.h"

typedef struct TPD {
    u16 x, y, touch, valid;
} TPD;
typedef struct D {
    u8 p[0x858];
    u32 a_lo : 8;
    u32 a_mid : 8;
    u32 a_hi : 16;
    u32 b_lo : 16;
    u32 b_bit : 1;
    u32 b_mid : 7;
    u32 b_st : 2;
    u32 b_hi : 6;
} D;
extern D data_ov115_020e9160;
void func_ov115_020e28d4(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TPD *);
s32 func_ov115_020e35b4(u16, u16, s32, s32, s32, s32);
void func_020037e8(s32);
s32 func_ov115_020e2980(s32);

s32 func_ov115_020e6004(void) {
    TPD tp;
    s32 r4;
    s32 r5;
    s32 r;
    r5 = 0;
    r4 = 0x10;
    while (1) {
        func_ov115_020e28d4();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.touch == 1) {
            if (tp.valid == 0) {
                if (r5 == 0) {
                    if (r4 > 0) {
                        r5 = 1;
                        r4--;
                    } else {
                        r5 = 0;
                    }
                    r = func_ov115_020e35b4(tp.x, tp.y, 0, 0x34, data_ov115_020e9160.b_bit, data_ov115_020e9160.a_mid);
                    switch (r) {
                        case 0x29:
                            func_020037e8(0x66);
                            data_ov115_020e9160.b_st = 1;
                            if (func_ov115_020e2980(r) == 0) {
                                data_ov115_020e9160.b_st = 0;
                                break;
                            }
                            return 1;
                        case 0x2a:
                            func_020037e8(0x66);
                            data_ov115_020e9160.b_st = 2;
                            if (func_ov115_020e2980(r) == 0) {
                                data_ov115_020e9160.b_st = 0;
                                break;
                            }
                            return 0;
                    }
                } else {
                    if (r4 > 0) {
                        r5 = 1;
                        r4--;
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
