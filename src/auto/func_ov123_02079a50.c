#include "m2c.h"

void func_02024c44(u8 *, s32);
void func_ov123_0207b3e4(void);
void func_0202373c(u8 *, u8 *, s32);
s32 func_ov123_02079b98(u8 *, s32, u8 *);
s32 func_ov123_0207af50(s32, s32, s32);
s32 func_02024c28(s32);
void func_02021318(u8 *, s32, s32);
void func_ov123_02079b48(void);

extern u8 data_ov123_020e0db8[];
extern u8 data_ov123_020e0df8[];
extern u8 data_ov123_020e0d78[];
extern u8 data_ov123_020d9af0[];
extern u8 data_ov123_020e0dfc[];
extern u8 data_ov123_020e0e04[];

void func_ov123_02079a50(s32 arg0) {
    u8 buf[0x44];
    s32 r5;
    s32 r;

    func_02024c44(data_ov123_020e0db8, arg0);
    *(s32 *) data_ov123_020e0df8 = -1;
    func_ov123_0207b3e4();
    r5 = (s8) data_ov123_020e0d78[0];
    if (r5 == 0) {
        func_0202373c(buf, data_ov123_020d9af0, arg0);
    }
    if (func_ov123_02079b98(r5 != 0 ? data_ov123_020e0d78 : buf, 0x6CFC, data_ov123_020e0dfc) == 0) {
        return;
    }
    r                            = func_ov123_0207af50(2, 2, 0);
    *(s32 *) data_ov123_020e0df8 = r;
    if (r == -1) {
        return;
    }
    data_ov123_020e0df8[0xC] = 9;
    r5                       = func_02024c28(arg0);
    func_02021318(data_ov123_020e0e04 + 5, arg0, r5 + 1);
    *(s32 *) (data_ov123_020e0df8 + 0x4C) = r5 + 6;
    func_ov123_02079b48();
    *(s32 *) (data_ov123_020e0df8 + 0x54) = 0;
}
