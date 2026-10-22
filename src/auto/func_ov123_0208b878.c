#include "m2c.h"

void func_ov123_0207af34(s32);                      /* extern */
void *func_ov123_0208c098();                        /* extern */

void func_ov123_0208b878(void) {
    void *p;

    p = func_ov123_0208c098();
    if (p == NULL) {
        return;
    }
    if (M2C_FIELD(p, s32 *, 0) != -1) {
        func_ov123_0207af34(M2C_FIELD(p, s32 *, 0));
    }
    M2C_FIELD(p, s32 *, 0)    = -1;
    M2C_FIELD(p, s32 *, 0x10) = 4;
}
