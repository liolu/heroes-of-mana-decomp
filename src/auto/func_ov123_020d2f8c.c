#include "m2c.h"

void **func_ov123_020d2688();

s32 func_ov123_020d2f8c(void) {
    void **p;

    if (func_ov123_020d2688() == NULL) {
        return 0;
    }
    p = func_ov123_020d2688();
    return M2C_FIELD(*p, s32(**)(void **), 0x24)(p);
}
