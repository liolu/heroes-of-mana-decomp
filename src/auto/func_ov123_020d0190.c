#include "m2c.h"

s32 func_ov123_020d0190(u8 *arg0, s32 arg1) {
    u8 *p  = arg0 + 0x4000;
    s32 *t = *(s32 **) (p + 0xD54);
    return t[arg1];
}
