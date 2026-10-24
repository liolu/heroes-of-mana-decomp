#include "m2c.h"

extern void func_ov111_020e4bc8(void);
extern void TP_RequestSamplingAsync(void);
extern s32 TP_WaitCalibratedResult(void *);
extern void *func_ov111_020e571c(u16, u16, s32, s32, u32);

typedef struct {
    u8 pad[0x410];
    u32 lo : 8;
    u32 b : 1;
    u32 hi : 23;
} G;
extern G data_ov111_020ec674;

typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;

s32 func_ov111_020e4c68(void *arg0) {
    TP tp;

loop:
    func_ov111_020e4bc8();
    do {
        TP_RequestSamplingAsync();
    } while (TP_WaitCalibratedResult(&tp) != 0);
    if (tp.touch == 1) {
        if (tp.valid == 0 && func_ov111_020e571c(tp.x, tp.y, 0, 0x10, data_ov111_020ec674.b) != arg0) {
            return 0;
        }
        goto loop;
    }
    return 1;
}
