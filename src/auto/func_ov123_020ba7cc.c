/* compiler: 1.2/sp3 */
/* near start: 9 diffs with profile "1.2/sp3" */
#include "m2c.h"

extern s32 data_ov123_020e4660;
extern s32 data_ov123_020e45fc;
extern u8 data_ov123_020d7fc0[];
extern u8 data_ov123_020d7fc8[];
extern u8 data_ov123_020d7fd0[];
extern u8 data_ov123_020ddf7c[];

void func_ov123_020b2398(s32 *, s32 *);
u8 func_ov123_020b2388(void);
void *func_ov123_020c9c88(s32, s32);
s32 func_ov123_020b29dc(s32, s32);
void func_02028bf0(void *, s32, void *, s32);
void func_ov123_020c99c0(s32, u16, u16, s32, s32, void *, s32);
s32 func_ov123_020ae394(void);
void func_ov123_020c9988(s32, u16, u16, u16, s32, s32, s32, s32);
void func_ov123_020c98a8(s32);

void func_ov123_020ba7cc(void) {
    s32 sp10;
    s32 sp14[5];
    s32 r4;
    s32 r5;
    s32 r6;
    s32 v;
    s32 idx;
    u16 h1;
    u16 h6;

    func_ov123_020b2398(0, &sp10);
    v = data_ov123_020e4660;
    if (v >= (s32) 0xFFFFB17D) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFFB17C) {
        r4 = 2;
    } else if (v >= (s32) 0xFFFFB17B) {
        r4 = 0x13;
    } else if (v >= (s32) 0xFFFFB175) {
        r4 = 2;
    } else if (v >= (s32) 0xFFFFB174) {
        r4 = 0x12;
    } else if (v >= (s32) 0xFFFFB173) {
        r4 = 2;
    } else if (v >= (s32) 0xFFFFB172) {
        r4 = 3;
    } else if (v >= (s32) 0xFFFFADF9) {
        r4 = 2;
    } else if (v >= (s32) 0xFFFFA629) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFFA241) {
        r4 = 0x13;
    } else if (v >= (s32) 0xFFFF3CB1) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3CAE) {
        r4 = 7;
    } else if (v >= (s32) 0xFFFF3CAD) {
        r4 = 5;
    } else if (v >= (s32) 0xFFFF3C4E) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3C4D) {
        r4 = (sp10 == 2) ? 5 : 7;
    } else if (v >= (s32) 0xFFFF3866) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3865) {
        r4 = (sp10 == 2) ? 5 : 8;
    } else if (v >= (s32) 0xFFFF3862) {
        r4 = 9;
    } else if (v >= (s32) 0xFFFF3861) {
        r4 = 5;
    } else if (v >= (s32) 0xFFFF3801) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF379D) {
        r4 = 0x14;
    } else if (v >= (s32) 0xFFFF379A) {
        r4 = 0x15;
    } else if (v >= (s32) 0xFFFF3799) {
        r4 = 4;
    } else if (v >= (s32) 0xFFFF34E1) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF34DE) {
        r4 = 0xA;
    } else if (v >= (s32) 0xFFFF34DD) {
        r4 = 0x16;
    } else if (v >= (s32) 0xFFFF347D) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3479) {
        r4 = 0xB;
    } else if (v >= (s32) 0xFFFF3419) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3415) {
        r4 = 0xB;
    } else if (v >= (s32) 0xFFFF33B5) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF3351) {
        r4 = 2;
    } else if (v >= (s32) 0xFFFF30F9) {
        r4 = 0;
    } else if (v >= (s32) 0xFFFF2FCD) {
        r4 = 2;
    } else {
        r4 = 0;
    }
    r5 = (s32) func_ov123_020c9c88(0, data_ov123_020d7fc0[func_ov123_020b2388()]);
    r6 = func_ov123_020b29dc(data_ov123_020e45fc, r4);
    func_02028bf0(sp14, 8, data_ov123_020ddf7c, 0 - data_ov123_020e4660);
    idx = func_ov123_020b2388();
    h6  = *(u16 *) (data_ov123_020d7fd0 + 2 + idx * 4);
    h1  = *(u16 *) (data_ov123_020d7fd0 + func_ov123_020b2388() * 4);
    func_ov123_020c99c0(r5, h1, h6, 2, 0xA, sp14, 0);
    func_ov123_020c9988(r5, *(u16 *) (data_ov123_020d7fc8 + 0), *(u16 *) (data_ov123_020d7fc8 + 2),
                        *(u16 *) (data_ov123_020d7fc8 + 4), *(u16 *) (data_ov123_020d7fc8 + 6), 2, func_ov123_020ae394(), r6);
    func_ov123_020c98a8(r5);
}
