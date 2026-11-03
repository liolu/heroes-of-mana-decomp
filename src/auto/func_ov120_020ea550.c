#include "m2c.h"

void MIi_CpuCopy16(void *, void *, s32);
void func_ov120_020ea1f0(s32, u32);
extern u8 *data_0203673c;
extern u8 data_ov120_020f4200[];

void func_ov120_020ea550(void) {
    s32 i;
    s32 cnt;
    u8 *r8;
    s32 r9;
    s32 r10;
    u32 x;

    i   = 0;
    cnt = 0;
    r9  = 0;
    r10 = 0;
    do {
        r8 = *(u8 **) (data_0203673c + 0x2C) + r9;
        if ((((u32) * (s32 *) (r8 + 0xC)) << 3) >> 31) {
            x = (((u32) * (s32 *) (r8 + 0x10)) << 2) >> 24;
            if ((x >= 0x32) && (x <= 0x5C)) {
                MIi_CpuCopy16(r8, *(u8 **) (data_ov120_020f4200 + 4) + r10, 0x14);
                func_ov120_020ea1f0(cnt, (((u32) * (s32 *) (r8 + 0x10)) << 2) >> 24);
                r10 += 0x14;
                cnt += 1;
            }
        }
        i += 1;
        r9 += 0x14;
    } while (i < 0x80);
    *(s32 *) (data_ov120_020f4200 + 0x30) = cnt;
}
