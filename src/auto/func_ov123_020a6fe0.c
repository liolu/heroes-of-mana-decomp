/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

extern u8 *data_ov123_020e20b4;
extern u8 data_ov123_020e20cc[];
extern u8 data_ov123_020dd52c[];
extern s32 data_ov123_020e20a0;
extern void func_ov123_020a68cc(u8 *, s32, s32);
extern s32 func_ov123_020a67dc(s32);
extern s32 func_ov123_020a67f4(s32);
extern void func_ov123_020a6e88(s32, u8 *, u8 *, u8 *, u8 *, u8 *);
extern void func_ov123_020a68d8(u8 *, u8 *, s32);
extern s32 func_ov123_020a6a90(u8 *, s32, u8 *, s32);
extern void func_ov123_020a8000(s32);
extern void func_ov123_020a6e28(u8 *, s32, s32, s32, s32, s32, u8 *);
extern void func_ov123_020a6dc0(u8 *, s32, s32, s32);

s32 func_ov123_020a6fe0(s32 unused, s32 b, s32 c) {
    s32 out[3];
    u8 F[0x1C];
    u8 *r4;
    s32 r5;
    s32 r6;
    s32 t;
    s32 v;

    r5               = b;
    r6               = c;
    *(u8 *) (F + 0)  = 0;
    *(u16 *) (F + 2) = 0;
    *(u16 *) (F + 4) = 0;
    r4               = data_ov123_020e20b4;
    func_ov123_020a68cc(F + 0x10, 0, 8);
    func_ov123_020a68cc(r4, 0, 0x5DC);
    *(u8 *) (F + 0x10)  = 2;
    *(u8 *) (F + 0x11)  = 0;
    t                   = func_ov123_020a67dc(4);
    *(u16 *) (F + 0x12) = (u16) t;
    t                   = *(s32 *) (data_ov123_020e20cc + 8);
    *(s32 *) (F + 0x14) = t;
    *(s32 *) (F + 0x14) = func_ov123_020a67f4(t);
    *(u16 *) (F + 2)    = 8;
    out[0]              = (s32) (F + 4);
    out[1]              = (s32) (F + 0);
    func_ov123_020a6e88(data_ov123_020e20a0, r4 + 0x18, F + 0x10, F + 2, (u8 *) out[0], (u8 *) out[1]);
    func_ov123_020a68d8(F + 6, (u8 *) (r5 + 8), 8);
    if (func_ov123_020a6a90(F + 6, 8, data_ov123_020dd52c, 6) != 0) {
        func_ov123_020a8000(2);
        return -1;
    }
    out[0] = (s8) * (u8 *) (F + 0);
    out[1] = 0x11;
    out[2] = (s32) (F + 6);
    func_ov123_020a6e28(r4, 0x2000, (s16) * (u16 *) (F + 2), (s16) * (u16 *) (F + 4), out[0], out[1], (u8 *) out[2]);
    v                = (s16) * (u16 *) (F + 2);
    v                = v + 0x18;
    *(u16 *) (F + 2) = (u16) v;
    func_ov123_020a6dc0(r4, (s16) * (u16 *) (F + 2), 0, r6);
    return 0;
}
