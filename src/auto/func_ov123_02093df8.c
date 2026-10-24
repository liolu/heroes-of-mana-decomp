#include "m2c.h"

s32 func_ov123_02093df8(u32 c) {
    if (c >= 0x41 && c <= 0x5a) {
        return c - 0x41;
    }
    if (c >= 0x61 && c <= 0x7a) {
        s32 v = c - 0x61;
        v += 0x1a;
        return v;
    }
    if (c >= 0x30 && c <= 0x39) {
        s32 v = c - 0x30;
        v += 0x34;
        return v;
    }
    if (c == 0x2b) {
        return 0x3e;
    }
    if (c == 0x2f) {
        return 0x3f;
    }
    if (c == 0x3d) {
        return 0;
    }
    return -1;
}
