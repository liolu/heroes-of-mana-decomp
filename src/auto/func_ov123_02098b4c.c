/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void *data_ov123_020e1718;
extern u8 data_ov123_020dc5f8;
extern u8 data_ov123_020dc600;
extern u8 data_ov123_020dc60c;
extern u8 data_ov123_020dc618;
extern u8 data_ov123_020dc620;
extern u8 data_ov123_020dc630;
extern s32 errno;

s32 func_ov123_02096238(void *a, s32 b);
void func_ov123_02099524(s32 a, s32 b);
s32 func_ov123_020961e4(void *a, void *b);
void func_ov123_02098908(void);
s32 func_02026c4c(void *s);
s32 func_ov123_02096190(void *a, void *b, void *c, s32 d);

s32 func_ov123_02098b4c(void) {
    u8 *r4;
    signed char sp0;
    s32 r2;
    s32 ok;

    r4 = (u8 *) data_ov123_020e1718 + 8;
    if (func_ov123_02096238(r4, 0) == 0) {
        func_ov123_02099524(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (func_ov123_020961e4(r4, &data_ov123_020dc5f8) != 0) {
        func_ov123_02098908();
    }
    ok = func_ov123_020961e4(r4, &data_ov123_020dc600);
    if (ok == 0) {
        func_ov123_02099524(0x10, 0xFFFF9DF3);
        return 0;
    }
    r2 = func_02026c4c((void *) ok);
    if (errno == 0x22) {
        func_ov123_02099524(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (r2 != 0xC8) {
        func_ov123_02099524(0x10, (s32) 0xFFFF9E58 - r2);
        return 0;
    }
    if (func_ov123_02096190(r4, &data_ov123_020dc60c, &sp0, 4) <= 0) {
        func_ov123_02099524(0x10, 0xFFFF9DF3);
        return 0;
    }
    r2 = func_02026c4c(&sp0);
    if (errno == 0x22) {
        func_ov123_02099524(0x10, 0xFFFF9DF3);
        return 0;
    }
    if (r2 >= 0x64) {
        func_ov123_02099524(0x10, (s32) 0xFFFFA240 - r2);
        return 0;
    }
    func_ov123_02096190(r4, &data_ov123_020dc618, *(u8 **) ((u8 *) data_ov123_020e1718 + 0x1C1C) + 4, 0x40);
    func_ov123_02096190(r4, &data_ov123_020dc620, *(u8 **) ((u8 *) data_ov123_020e1718 + 0x1C1C) + 0x45, 0x12C);
    func_ov123_02096190(r4, &data_ov123_020dc630, &sp0, 1);
    if (sp0 == 0x59) {
        *(s32 *) *(u8 **) ((u8 *) data_ov123_020e1718 + 0x1C1C) = 1;
    } else {
        *(s32 *) *(u8 **) ((u8 *) data_ov123_020e1718 + 0x1C1C) = 0;
    }
    return 1;
}
