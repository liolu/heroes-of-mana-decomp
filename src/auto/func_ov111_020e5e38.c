#include "m2c.h"

s16 func_ov111_020e5d60(M2C_UNK);                   /* extern */
extern void *data_ov111_020f1bd8;

void func_ov111_020e5e38(void) {
    M2C_FIELD(data_ov111_020f1bd8, s16 *, 0x50C) = func_ov111_020e5d60(1);
}
