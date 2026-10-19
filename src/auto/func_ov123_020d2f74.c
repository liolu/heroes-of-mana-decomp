#include "m2c.h"

void **func_ov123_020d2688();

void func_ov123_020d2f74(void) {
    void **p;

    p = func_ov123_020d2688();
    M2C_FIELD(*p, M2C_UNK(**)(void **), 0x20)(p);
}
