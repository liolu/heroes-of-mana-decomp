#include "m2c.h"

u8 *func_ov123_020c35d4(void);
s32 func_ov123_020a56b4(u8 *);
s32 func_ov123_020a56e0(u8 *, u8 *);

s32 func_ov123_020bacec(void) {
    u8 *p = func_ov123_020c35d4();
    if (p[0x40] == 0) {
        return 0;
    }
    if (p[0xF6] == 0 && func_ov123_020a56b4(p + 0xC8) == 0 && func_ov123_020a56b4(p + 0xCC) == 0) {
        return 0;
    }
    if (p[0xF5] == 0) {
        if (func_ov123_020a56b4(p + 0xC0) == 0) {
            return 0;
        }
        if (func_ov123_020a56b4(p + 0xC4) == 0) {
            return 0;
        }
        if (func_ov123_020a56e0(p + 0xC0, p + 0xF0) == 0) {
            return 0;
        }
    }
    return 1;
}
