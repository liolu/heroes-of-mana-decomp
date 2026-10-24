#include "m2c.h"

extern s32 func_02024c44(s32, u8 *);
extern s32 func_02026aec(u8 *, s32, s32);
extern s32 func_ov123_02099ebc(u8 *, u8 *, u8 *, s32);
extern s32 func_ov123_0209c584(s32, void *);
extern u8 data_ov123_020dd3b4;
extern u8 data_ov123_020dd3b8;

typedef struct St {
    u32 a;
    u32 b;
    u8 buf[0x100];
} St;

u8 func_ov123_0209d220(s32 arg0, s8 *arg1, s8 *arg2, s32 arg3) {
    u8 sp10C[0x10C];
    St st;
    u8 sp0[4];

    if (func_ov123_0209c584(arg0, &st) != 0) {
        if (st.b == 6) {
            if (arg1 != NULL) {
                if (func_ov123_02099ebc(&data_ov123_020dd3b4, sp0, st.buf, 0x2F) <= 0) {
                    *arg1 = 0;
                } else {
                    *arg1 = func_02026aec(sp0, 0, 0xA);
                }
            }
            if (arg2 != NULL) {
                if (func_ov123_02099ebc(&data_ov123_020dd3b8, sp0, st.buf, 0x2F) <= 0) {
                    *arg2 = 0;
                } else {
                    *arg2 = func_02026aec(sp0, 0, 0xA);
                }
            }
        } else {
            if (arg1 != NULL) {
                *arg1 = 0;
            }
            if (arg2 != NULL) {
                *arg2 = 0;
            }
        }
        if (arg3 != 0) {
            func_02024c44(arg3, sp10C);
        }
        return (u8) st.b;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    return 0U;
}
