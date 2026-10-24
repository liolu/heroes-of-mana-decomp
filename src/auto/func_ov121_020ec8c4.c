#include "m2c.h"

typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TpSample;

typedef struct {
    u8 pad0[0xa40];
    s32 a40;
    u32 pad44;
    u32 pad48 : 24;
    u32 bit : 1;
    u32 rest : 7;
} G121;

typedef struct {
    u8 pad[0xc];
    u32 p : 26;
    u32 q : 3;
    u32 r : 3;
} G0;

extern G121 data_ov121_020f6d60;
extern G0 *data_ov000_02051548;
extern void func_ov121_020ec77c(void);
extern void TP_RequestSamplingAsync(void);
extern s32 TP_WaitCalibratedResult(TpSample *);
extern s32 func_ov121_020ead78(u16, u16, s32, s32, s32, s32);

s32 func_ov121_020ec8c4(s32 arg0) {
    TpSample s;
    s32 t;
    while (1) {
        func_ov121_020ec77c();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&s) != 0);
        if (s.touch == 1) {
            if (s.valid == 0) {
                t = func_ov121_020ead78(s.x, s.y, 0, 0x31, data_ov121_020f6d60.bit, data_ov121_020f6d60.a40);
                if (t != arg0) {
                    return 0;
                }
            }
        } else {
            return 1;
        }
        if (data_ov000_02051548 != 0 && data_ov000_02051548->q != 0) {
            return 0;
        }
    }
}
