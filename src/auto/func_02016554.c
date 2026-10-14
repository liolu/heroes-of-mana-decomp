#include "m2c.h"

s32 func_020164e4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_02016c08();                            /* extern */
extern M2C_UNK data_0203a6d4;
extern M2C_UNK func_02016bf8;

s32 func_02016554(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020164e4(arg0, &func_02016bf8, 0);
    M2C_FIELD(&data_0203a6d4, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_02016c08();
    }
    return M2C_FIELD(&data_0203a6d4, s32 *, 0x24);
}
