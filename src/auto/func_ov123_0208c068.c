#include "m2c.h"

void func_ov123_0207af34(s32);                      /* extern */

void func_ov123_0208c068(void *arg0) {
    s32 v;

    v = M2C_FIELD(arg0, s32 *, 0);
    if (v != -1) {
        func_ov123_0207af34(v);
    }
    M2C_FIELD(arg0, s32 *, 0)    = -1;
    M2C_FIELD(arg0, s32 *, 0x10) = 4;
}
