#include "m2c.h"

s16 func_ov119_020edf40(M2C_UNK);                   /* extern */
extern void *data_ov119_020f2f68;

void func_ov119_020ee018(void) {
    M2C_FIELD(data_ov119_020f2f68, s16 *, 0x4F8) = func_ov119_020edf40(1);
}
