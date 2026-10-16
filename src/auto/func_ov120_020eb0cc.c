#include "m2c.h"

extern M2C_UNK data_ov120_020f5140;

void func_ov120_020eb0cc(void) {
    M2C_FIELD(&data_ov120_020f5140, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov120_020f5140, s32 *, 4) * M2C_FIELD(&data_ov120_020f5140, s32 *, 0)) +
               M2C_FIELD(&data_ov120_020f5140, s32 *, 8));
}
