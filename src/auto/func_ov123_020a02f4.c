/* compiler: 1.2/sp3 */
typedef long long s64;
typedef int s32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef struct G {
    u8 p0[0x15];
    u8 f15;
    u8 p1[4];
    u16 f1A;
    s32 f1C;
    u8 p2[4];
    s32 f24;
    u8 p3[0x7C];
    s16 fA4;
    u8 p4[0x3E];
    s32 fE4;
    u8 p5[0xC];
    s32 fF4;
    u8 p6[0xC4];
    s32 f1BC;
    s64 f1C0;
    s32 f1C8;
    s64 f1CC;
    u8 p7[0x30];
    s32 f204;
    s32 f208;
} G;
typedef struct S {
    s32 a;
    s32 b;
    s32 c;
} S;
extern u8 data_ov123_020dd3c8;
s64 func_0200f510(void);
s16 func_ov123_0208e918(s32);
s32 func_ov123_0208e93c(s32);
s32 func_ov123_0208e944(s32, u8 *, s32);
s32 func_ov123_0208ebcc(s32, s32);
G *func_ov123_0209d368(void);
s32 func_ov123_020a1b40(s32, s32, s32, u16, S *, s32);
s32 func_ov123_020a02f4(s32 arg0, s32 arg1) {
    S sp;
    s32 r4;
    s32 r6;
    if (arg1 != 0 || (func_ov123_0209d368()->f1C == 0 && func_ov123_0209d368()->f1A == 0)) {
        func_ov123_0209d368()->f1BC = 1;
        func_ov123_0209d368()->f1C0 = func_0200f510();
        func_ov123_0209d368()->fF4  = arg0;
        return 0;
    }
    if (func_ov123_0209d368()->f15 == 0) {
        r6                          = func_ov123_0208ebcc(func_ov123_0209d368()->fE4, 0);
        func_ov123_0209d368()->fF4  = func_ov123_0208e944(r6, &data_ov123_020dd3c8, 0);
        func_ov123_0209d368()->f24  = func_ov123_0208e93c(r6);
        func_ov123_0209d368()->fA4  = func_ov123_0208e918(r6);
        func_ov123_0209d368()->f204 = func_ov123_0209d368()->fF4;
        r4                          = 1;
    } else {
        if (func_ov123_0209d368()->f15 == 1) {
            func_ov123_0209d368()->fF4 = arg0;
        }
        func_ov123_0209d368()->f204 = arg0;
        sp.b                        = func_ov123_0209d368()->f1C;
        sp.c                        = func_ov123_0209d368()->f1A;
        r4                          = 3;
    }
    func_ov123_0209d368()->f1C8 = 0x1770;
    func_ov123_0209d368()->f1CC = func_0200f510();
    func_ov123_0209d368()->f1BC = 0;
    {
        s32 r7;
        if (func_ov123_0209d368()->f208 != 0) {
            r7 = 11;
        } else {
            r7 = 1;
        }
        sp.a = func_ov123_0209d368()->f15;
        return func_ov123_020a1b40(r7, arg0, func_ov123_0209d368()->f24, func_ov123_0209d368()->fA4, &sp, r4);
    }
}
