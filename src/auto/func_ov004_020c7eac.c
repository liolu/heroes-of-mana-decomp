#include "m2c.h"

s32 func_ov004_020c7fec(s32);                       /* extern */

void func_ov004_020c7eac(void *arg0) {
    M2C_UNK sp0;
    s32 temp_r5;
    void **temp_r0;

    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK(**)(void *), 0x18)(M2C_FIELD(arg0, void ***, 0x1C));
    temp_r5 = M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), s32(**)(void *), 0x14)(M2C_FIELD(arg0, void ***, 0x1C));
    if ((temp_r5 >= M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), s32(**)(void *), 0x10)(M2C_FIELD(arg0, void ***, 0x1C))) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0x20) < func_ov004_020c7fec(M2C_FIELD(arg0, s32 *, 0x14)))) {
        M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK(**)(void *), 0xC)(M2C_FIELD(arg0, void ***, 0x1C));
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
    }
    if (M2C_FIELD(arg0, void ***, 0x18) == NULL) {
        return;
    }
    M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x1C), M2C_UNK(**)(M2C_UNK *, void *), 8)(&sp0, M2C_FIELD(arg0, void ***, 0x1C));
    temp_r0 = M2C_FIELD(arg0, void ***, 0x18);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK *), 0x1C)(temp_r0, &sp0);
}
