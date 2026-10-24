#include "m2c.h"
s32 *func_ov123_020c8f80(void *, s32);
void func_ov123_020b0f78(s32, s32);
void func_ov123_020cb618(void *, void *);
void func_ov123_020b0c44(void);
typedef struct {
    u8 pad[0x40];
    void *q;
} Y;
extern Y *data_ov123_020e45c0;
void func_ov123_020b0cbc(void *arg) {
    volatile u32 sp4;
    volatile u32 sp0;
    volatile u32 *p = (volatile u32 *) func_ov123_020c8f80(data_ov123_020e45c0->q, 0);
    u32 v;
    sp0 = (*p & 0x1ff0000) >> 16;
    v   = *p & 0xff;
    sp4 = v;
    sp4 = v + 0xc;
    func_ov123_020b0f78(4, v + 0xc);
    if ((s32) sp4 >= 0xc0) {
        func_ov123_020cb618(arg, func_ov123_020b0c44);
    }
}
