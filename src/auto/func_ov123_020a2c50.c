/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    s32 *f4;
    u8 pad1[5];
    u8 fD;
    u8 pad2[7];
    u8 f15;
    u8 pad3[0x186];
    s32 f19C;
    s32 f1A0;
    u8 pad4[4];
    u8 f1A8;
    u8 f1A9;
    u8 pad5[0x46];
    s64 f1F0;
    u8 pad6[0x10];
    s32 f208;
    u8 pad7[0xC4];
    s8 f2D0;
} G;

s64 func_0200f510(void);
void func_ov123_020885ec(s32);
void func_ov123_0208b878(s32);
s32 func_ov123_0209ab40(void);
void func_ov123_0209d354(s32);
G *func_ov123_0209d368(void);
void func_ov123_0209f054(void);
void func_ov123_0209f158(s32);
void func_ov123_020a2fe4(s32, s32);

s32 func_ov123_020a2c50(s32 arg0, s32 arg1) {
    G *g;

    if (func_ov123_0209ab40() != 5) {
        return 0;
    }
    if (func_ov123_0209d368()->f15 == 2) {
        return 1;
    }
    if (arg0 != 0) {
        func_ov123_020a2fe4(arg0, arg1 + 0xFFFEC780);
        return 1;
    }
    func_ov123_0209d368()->f2D0 = 0;
    if (func_ov123_0209d368()->f1A9 == 1 || func_ov123_0209d368()->f1A8 == 1 || func_ov123_0209d368()->f1A8 == 2) {
        return 1;
    }
    if (func_ov123_0209d368()->f19C != 0) {
        func_ov123_0208b878(func_ov123_0209d368()->f19C);
        func_ov123_0209d368()->f19C = 0;
    }
    if (func_ov123_0209d368()->fD != 0) {
        if (func_ov123_0209d368()->f1A8 == 0) {
            func_ov123_0209d368()->f1A8 = 3;
            func_ov123_020885ec(*func_ov123_0209d368()->f4);
        }
    } else if (func_ov123_0209d368()->f15 == 3) {
        func_ov123_020a2fe4(6, 0xFFFEC5D2);
    } else if (func_ov123_0209d368()->f208 != 0) {
        func_ov123_0209f054();
    } else if (func_ov123_0209d368()->f1A0 == 1) {
        func_ov123_0209d354(0x12);
        g       = func_ov123_0209d368();
        g->f1F0 = func_0200f510();
    } else {
        func_ov123_0209f158(1);
    }
    return 1;
}
