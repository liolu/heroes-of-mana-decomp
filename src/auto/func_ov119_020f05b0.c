#include "m2c.h"

typedef struct D {
    u8 pad0[0x34];
    u32 p0 : 16;
    u32 on : 1;
    u32 p1 : 15;
    u8 pad1[0x438 - 0x38];
    s32 v438;
    s32 cnt;
    s32 ctr;
    u8 pad2[0x4D4 - 0x444];
    u32 base;
} D;
extern D data_ov119_020f2258;

void MIi_CpuCopy16(u32, u32, s32);
u32 func_0200aa50(void);
void func_ov119_020ea798(s32, s32);

void func_ov119_020f05b0(void) {
    s32 n;
    s32 i;
    s32 r6;
    u32 q;
    n                       = data_ov119_020f2258.cnt;
    data_ov119_020f2258.cnt = 0;
    if (data_ov119_020f2258.on == 0) {
        return;
    }
    r6 = data_ov119_020f2258.v438 >> 3;
    q  = func_0200aa50() + ((u32) (r6 << 27) >> 17);
    MIi_CpuCopy16(data_ov119_020f2258.base + (u16) (r6 << 10), q, 0x400);
    i = 0;
    if (n <= 0) {
        return;
    }
    do {
        func_ov119_020ea798(data_ov119_020f2258.ctr + 1, data_ov119_020f2258.ctr & 1);
        i++;
        data_ov119_020f2258.ctr = data_ov119_020f2258.ctr + 1;
    } while (i < n);
}
