#include "m2c.h"

s32 func_ov123_020c1ba0(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        return 1;
    }
    return 0;
}
