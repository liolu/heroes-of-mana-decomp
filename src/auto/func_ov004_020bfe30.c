#include "m2c.h"

void func_ov004_020bfe30(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x60);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x10)(temp_r0, 0);
}
