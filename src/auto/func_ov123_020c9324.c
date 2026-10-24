#include "m2c.h"

typedef struct Hd {
    u16 count;
    u16 pad;
    u32 off;
} Hd;
extern u8 *data_ov123_020e4718[];
void MIi_CpuClear32(s32, void *, s32);
void MIi_CpuCopy16(void *, void *, s32);
void MIi_CpuCopy32(void *, void *, s32);

void func_ov123_020c9324(s32 a, s32 b, u8 *out) {
    u8 *base = data_ov123_020e4718[a];
    s32 i;
    u8 *src = base + ((Hd *) base)[b].off;
    u16 cnt = *(u16 *) (base + (b << 3));
    u8 tmp[8];
    MIi_CpuClear32(0, tmp, 8);
    for (i = 0; i < cnt; i++) {
        MIi_CpuCopy16(src, tmp, 6);
        MIi_CpuCopy32(tmp, out, 8);
        src += 6;
        out += 8;
    }
}
