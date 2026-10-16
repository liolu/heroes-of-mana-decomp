#include "m2c.h"

void func_ov123_0208e3ac(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0x20) = arg1;
    }
    M2C_FIELD(arg0, void **, 4)  = arg1;
    M2C_FIELD(arg1, s32 *, 0x20) = 0;
    if (M2C_FIELD(arg0, void **, 0) == NULL) {
        M2C_FIELD(arg0, void **, 0) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
