#include "m2c.h"

extern M2C_UNK data_ov122_02066494;

void func_ov122_0205561c(void) {
    M2C_FIELD(&data_ov122_02066494, s32 *, 4) =
        (s32) ((M2C_FIELD(&data_ov122_02066494, s32 *, 8) * M2C_FIELD(&data_ov122_02066494, s32 *, 4)) +
               M2C_FIELD(&data_ov122_02066494, s32 *, 0xC));
}
