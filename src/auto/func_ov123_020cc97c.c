#include "m2c.h"
typedef struct {
    s32 st;
    s32 v;
} G2;
extern G2 data_ov123_020e4798;
void func_ov123_020cc97c(s32 a, s32 b) {
    if (b < 0x2710) {
        b = b - 0x2710;
    }
    if (data_ov123_020e4798.st != 9) {
        data_ov123_020e4798.st = a;
        data_ov123_020e4798.v  = b;
    }
}
