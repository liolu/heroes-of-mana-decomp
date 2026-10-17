#include "m2c.h"

extern M2C_UNK data_ov119_020f2758;
extern s32 data_ov119_020f2f68;

s32 func_ov119_020edeb8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = arg0 & 0xF800;
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            return M2C_FIELD((data_ov119_020f2f68 + ((u32) (arg0 << 0x1B) >> 0x19)), s32 *, 0xF8);
        case 0x1800:
            return *(s32 *) ((u8 *) &data_ov119_020f2758 + ((arg0 & 0x1F) * 4));
        default:
            return 0;
    }
}
