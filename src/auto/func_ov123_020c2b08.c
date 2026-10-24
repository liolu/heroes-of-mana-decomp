/* compiler: 1.2/sp3 */
/* near start: 14 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct G {
    u8 p0[0xe7];
    u8 b0[0x8];
    u8 flags;
    u8 p1[0xff];
    u8 flags2;
} G;
extern G *data_ov123_020e46d0;
void MI_CpuFill8(void *, u8, u32);
u16 MATH_CalcCRC16(void *, void *, u32);
s32 func_ov123_020ca510(s32, s32);
void func_ov123_020a58b0(void *, void *, s32);
void func_ov123_020ca49c(s32 *);

void func_ov123_020c2b08(s32 slot) {
    s32 vals[4];
    s32 h;
    u8 b;
    u32 bit;
    s32 on = 0;
    s32 i;
    b   = *((u8 *) data_ov123_020e46d0 + slot * 0x100 + 0xe7);
    bit = 1 << slot;
    MI_CpuFill8(vals, on, 0x10);
    vals[slot] = 1;
    if (slot <= 2) {
        if (data_ov123_020e46d0->flags & bit) {
            on = 1;
        }
        if (b == 0xff && on) {
            data_ov123_020e46d0->flags &= ~bit;
            data_ov123_020e46d0->flags2 &= ~bit;
            vals[1] = 1;
            vals[0] = 1;
        } else if (b != 0xff && !on) {
            data_ov123_020e46d0->flags |= bit;
            data_ov123_020e46d0->flags2 |= bit;
            vals[1] = 1;
            vals[0] = 1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (vals[i] != 0) {
            u16 crc = MATH_CalcCRC16((u8 *) data_ov123_020e46d0 + 0x4f8, (u8 *) data_ov123_020e46d0 + i * 0x100, 0xfe);
            ((u16 *) ((u8 *) data_ov123_020e46d0 + 0xfe))[i * 0x80] = crc;
        }
    }
    h = func_ov123_020ca510(0x100, 0x20);
    func_ov123_020a58b0(data_ov123_020e46d0, vals, h);
    func_ov123_020ca49c(&h);
}
