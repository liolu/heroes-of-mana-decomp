#include "m2c.h"
typedef struct Gt {
    u8 pad0[0x410];
    u32 pa : 8;
    u32 f8 : 1;
    u32 f9 : 1;
    u32 pb : 4;
    u32 f14 : 1;
    u32 pc : 1;
    u32 hi : 16;
    u32 lo : 8;
    u32 mid : 8;
    u32 rest : 16;
    u8 pad1[0xA48 - 0x418];
    s32 w;
} Gt;
extern Gt data_ov113_020e4944;
s32 func_0201509c(void *);
void func_02015130(void *);
void func_ov113_020e2338(void);
void TP_RequestSamplingAsync(void);
s32 TP_WaitCalibratedResult(u16 *);
u32 func_ov113_020e2b64(u16, u16, s32, s32, u32, u32);
void func_020037e8(s32);
s32 func_ov113_020e23e4(u32);

u32 func_ov113_020e24bc(void) {
    u8 buf[8];
    u16 tp[4];
    u32 r;
    if (func_0201509c(buf) != 0) {
        func_02015130(buf);
    }
    for (;;) {
        func_ov113_020e2338();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(tp) != 0);
        if (data_ov113_020e4944.f14 != 0) {
            return 0;
        }
        if (tp[2] != 1 || tp[3] != 0) {
            continue;
        }
        r = func_ov113_020e2b64(tp[0], tp[1], 0, 8, data_ov113_020e4944.f9, data_ov113_020e4944.hi);
        switch (r) {
            case 0:
            case 1:
            case 2:
            case 3:
                if (data_ov113_020e4944.w != 0) {
                    continue;
                }
                func_020037e8(0x66);
                data_ov113_020e4944.lo = r;
                if (func_ov113_020e23e4(r) != 0) {
                    return r;
                }
                data_ov113_020e4944.lo = 8;
                break;
            case 4:
                if (data_ov113_020e4944.w != 0) {
                    continue;
                }
                func_020037e8(0x66);
                data_ov113_020e4944.lo = r;
                if (func_ov113_020e23e4(r) == 0) {
                    data_ov113_020e4944.lo = 8;
                    break;
                }
                data_ov113_020e4944.lo = 8;
                return 4;
            case 5:
                func_020037e8(0x66);
                data_ov113_020e4944.mid = 5;
                if (func_ov113_020e23e4(r) != 0) {
                    return 5;
                }
                data_ov113_020e4944.mid = 8;
                break;
            case 6:
                func_020037e8(0x66);
                data_ov113_020e4944.mid = 6;
                if (func_ov113_020e23e4(r) != 0) {
                    return 6;
                }
                data_ov113_020e4944.mid = 8;
                break;
            case 7:
                func_020037e8(0x66);
                data_ov113_020e4944.f8 = 1;
                if (func_ov113_020e23e4(r) == 0) {
                    data_ov113_020e4944.f8 = 0;
                    break;
                }
                data_ov113_020e4944.f8 = 0;
                return 7;
        }
    }
}
