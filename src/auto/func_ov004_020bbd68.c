#include "m2c.h"

extern M2C_UNK data_ov004_020cf8bc;

void func_ov004_020bbd68(void) {
    void *obj;
    s32 temp_r1;

    if ((s32) M2C_FIELD(&data_ov004_020cf8bc, s32 *, 4) <= 0) {
        return;
    }
    temp_r1                                   = M2C_FIELD(&data_ov004_020cf8bc, s32 *, 4) - 1;
    M2C_FIELD(&data_ov004_020cf8bc, s32 *, 4) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    obj = M2C_FIELD(&data_ov004_020cf8bc, void **, 0);
    if (obj != NULL) {
        M2C_FIELD(M2C_FIELD(obj, void ***, 0), M2C_UNK(**)(void *), 4)(obj);
    }
    M2C_FIELD(&data_ov004_020cf8bc, void ***, 0) = NULL;
}
