#include "m2c.h"

s32 func_ov123_020d4cd8(s32 arg0) {
    if (arg0 <= 1) {
        return 0x64;
    }
    if (arg0 <= 2) {
        return 0x46;
    }
    if (arg0 <= 3) {
        return 0x32;
    }
    if (arg0 <= 4) {
        return 0x28;
    }
    if (arg0 <= 5) {
        return 0x1E;
    }
    if (arg0 <= 0xA) {
        return 0x14;
    }
    if (arg0 <= 0x14) {
        return 0xA;
    }
    if (arg0 <= 0x1E) {
        return 7;
    }
    if (arg0 <= 0x28) {
        return 5;
    }
    if (arg0 <= 0x32) {
        return 4;
    }
    if (arg0 <= 0x64) {
        return 3;
    }
    if (arg0 <= 0xC8) {
        return 2;
    }
    return 1;
}
