#include "m2c.h"

typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TPData;
typedef struct {
    u8 p[0x10];
    u32 pad : 2;
    u32 mode : 4;
    u32 rest : 26;
} S1;
typedef struct {
    u8 p[0xA40];
    u32 f40;
    u32 pad44;
    u32 pad : 24;
    u32 b24 : 1;
    u32 pad2 : 3;
    u32 m : 2;
    u32 rest : 2;
} S2;

extern S1 *data_ov000_02051548;
extern S2 data_ov121_020f6d60;

void func_ov121_020ec77c(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(TPData *);
s32 func_ov121_020ead78(s32, s32, s32, s32, s32, s32);
void func_020037e8(s32);
void func_ov121_020f2bec(s32, s32, s32, s32, s32, s32, s32);
s32 func_ov121_020ec828(s32);

s32 func_ov121_020f2c54(s32 arg) {
    TPData tp;
    s32 r4;
    s32 r5;
    s32 r6;

    r6 = 0;
    r5 = 0x10;
    for (;;) {
        func_ov121_020ec77c();
        if (arg == 1) {
            if (data_ov000_02051548->mode == 2) {
                return -1;
            }
        }
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&tp) != 0);
        if (tp.touch == 1) {
            if (tp.valid == 0) {
                if (r6 == 0) {
                    if (r5 > 0) {
                        r6 = 1;
                        r5 -= 1;
                    } else {
                        r6 = 0;
                    }
                    r4 = func_ov121_020ead78(tp.x, tp.y, 0, 0x31, data_ov121_020f6d60.b24, data_ov121_020f6d60.f40);
                    switch (r4) {
                        case 8:
                        case 11:
                            func_020037e8(0x66);
                            func_ov121_020f2bec(0x14, 0x1B, 0xA, 3, 0xB, 0x13, 0);
                            if (func_ov121_020ec828(r4) == 0) {
                                func_ov121_020f2bec(0x14, 0x18, 0xA, 3, 0xB, 0x13, 0);
                                break;
                            }
                            func_ov121_020f2bec(0x14, 0x18, 0xA, 3, 0xB, 0x13, 0);
                            return 0;
                        case 9:
                            func_020037e8(0x66);
                            func_ov121_020f2bec(0, 0x1B, 0xA, 3, 5, 0x13, 0);
                            if (func_ov121_020ec828(r4) == 0) {
                                func_ov121_020f2bec(0, 0x18, 0xA, 3, 5, 0x13, 0);
                                break;
                            }
                            func_ov121_020f2bec(0, 0x18, 0xA, 3, 5, 0x13, 0);
                            return 1;
                        case 10:
                            func_020037e8(0x66);
                            func_ov121_020f2bec(0xA, 0x1B, 0xA, 3, 0x11, 0x13, 0);
                            if (func_ov121_020ec828(r4) == 0) {
                                func_ov121_020f2bec(0xA, 0x18, 0xA, 3, 0x11, 0x13, 0);
                                break;
                            }
                            func_ov121_020f2bec(0xA, 0x18, 0xA, 3, 0x11, 0x13, 0);
                            return 0;
                        case 0x24:
                            func_020037e8(0x66);
                            data_ov121_020f6d60.m = 1;
                            if (func_ov121_020ec828(r4) == 0) {
                                data_ov121_020f6d60.m = 0;
                                break;
                            }
                            return 1;
                        case 0x25:
                            func_020037e8(0x66);
                            data_ov121_020f6d60.m = 2;
                            if (func_ov121_020ec828(r4) == 0) {
                                data_ov121_020f6d60.m = 0;
                                break;
                            }
                            return 0;
                        case 0x26:
                            func_020037e8(0x66);
                            func_ov121_020f2bec(0, 0x1B, 0xA, 3, 0xB, 0x13, 0);
                            if (func_ov121_020ec828(r4) == 0) {
                                func_ov121_020f2bec(0, 0x18, 0xA, 3, 0xB, 0x13, 0);
                                break;
                            }
                            func_ov121_020f2bec(0, 0x18, 0xA, 3, 0xB, 0x13, 0);
                            return 0;
                    }
                } else {
                    if (r5 > 0) {
                        r6 = 1;
                        r5 -= 1;
                    } else {
                        r6 = 0;
                    }
                }
            }
        } else {
            r5 = 0x10;
            r6 = 0;
        }
    }
}
