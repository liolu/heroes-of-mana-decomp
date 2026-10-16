#include "m2c.h"

extern M2C_UNK data_ov111_020f1bcc;

void func_ov111_020e48d8(void) {
    M2C_FIELD(&data_ov111_020f1bcc, s32 *, 0) =
        (s32) ((M2C_FIELD(&data_ov111_020f1bcc, s32 *, 4) * M2C_FIELD(&data_ov111_020f1bcc, s32 *, 0)) +
               M2C_FIELD(&data_ov111_020f1bcc, s32 *, 8));
}
