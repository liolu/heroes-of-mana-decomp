#include "m2c.h"

u32 func_02015f28(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
u32 func_ov000_02046788(u32);                       /* extern */
extern M2C_UNK data_ov122_02065604;

u32 func_ov122_02055590(void) {
    s32 temp_r0_2;
    u32 temp_r0;
    u32 temp_r0_3;

    temp_r0_3 = (u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x18) >> 0x1F;
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0_2 != 1) {
        return (u32) temp_r0_2;
    }
    temp_r0 = (u32) (M2C_FIELD(&data_ov122_02065604, s32 *, 0xDE0) << 0x15) >> 0x1F;
    if (temp_r0 == 0) {
        return func_ov000_02046788(temp_r0);
    }
    return func_02015f28(0xC, 0, 0);
}
