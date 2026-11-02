#include "m2c.h"

extern s32 GetAooNoFromCharNo(s32);
extern s32 func_0202d478(s32, s32);
extern s32 distanceForBattle(s32, u8 *);
extern void changeOcc(s32, u8 *, s32, s32);
extern u8 data_ov003_020b0dd8[];

s32 func_ov107_020dc220(u8 *obj) {
    s32 r4;
    s32 r5;
    s32 n;
    u8 *p;

    r4 = 0;
    n  = GetAooNoFromCharNo(0xf0d);
    if (n == -1) {
        r4 = 1;
    } else {
        p = *(u8 **) (data_ov003_020b0dd8 + n * 0x110);
        if (*(u16 *) (p + 0x10) < 0x32) {
            r4 = 1;
        }
    }
    n = GetAooNoFromCharNo(0xf0e);
    if (n == -1) {
        s32 t = r4 | 2;
        r4    = t & 0xff;
    } else {
        p = *(u8 **) (data_ov003_020b0dd8 + n * 0x110);
        if (*(u16 *) (p + 0x10) < 0x32) {
            s32 t = r4 | 2;
            r4    = t & 0xff;
        }
    }
    r5 = GetAooNoFromCharNo(0xf0f);
    if (r5 == -1) {
        s32 t = r4 | 4;
        r4    = t & 0xff;
    } else {
        p = *(u8 **) (data_ov003_020b0dd8 + r5 * 0x110);
        if (*(u16 *) (p + 0x10) < 0x32) {
            s32 t = r4 | 4;
            r4    = t & 0xff;
        }
    }
    p  = *(u8 **) (obj + 0xe8);
    r4 = r4 & 7;
    if (func_0202d478(*(u16 *) (p + 0x10) * 100, *(u16 *) (p + 0x12)) < 0x32) {
        r4 = 7;
    }
    if (r4 == 7) {
        return 0;
    }
    if (distanceForBattle(r5, obj) == 1) {
        changeOcc(3, obj, r5, 0);
        return 1;
    }
    changeOcc(2, obj, r5, 0);
    return 1;
}
