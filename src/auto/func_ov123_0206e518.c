/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u64 func_0200f510(void);
extern void func_ov123_0206e76c(void *, s32, s32);
extern void func_ov123_0206e818(void *, void *);

void func_ov123_0206e518(u8 *arg0, u8 *arg1, u8 *arg2) {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
    u16 e;
    u16 f;
    u16 g;

    *(s8 *) (arg2 + 8)     = 3;
    *(u32 *) (arg2 + 0x10) = (u32) (func_0200f510() >> 16);
    a                      = *(u16 *) (arg0 + 0x10);
    b                      = *(u16 *) (arg0 + 0x12);
    *(u32 *) (arg2 + 0x14) = ((u16) (((s32) a >> 8) | (a << 8)) << 16) | (u16) (((s32) b >> 8) | (b << 8));
    c                      = *(u16 *) (arg1 + 0);
    *(u16 *) (arg2 + 0x18) = (u16) (((s32) c >> 8) | (c << 8));
    d                      = *(u16 *) (arg0 + 0xC);
    e                      = *(u16 *) (arg0 + 0xE);
    *(u32 *) (arg2 + 0x1C) = ((u16) (((s32) d >> 8) | (d << 8)) << 16) | (u16) (((s32) e >> 8) | (e << 8));
    f                      = *(u16 *) (arg1 + 4);
    g                      = *(u16 *) (arg1 + 6);
    *(u32 *) (arg2 + 0x24) = (((u16) (((s32) f >> 8) | (f << 8)) << 16) | (u16) (((s32) g >> 8) | (g << 8))) + 1;
    func_ov123_0206e818(arg1, arg2);
    func_ov123_0206e76c(arg2, 0x12, 0);
}
