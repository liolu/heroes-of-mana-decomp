#include "m2c.h"

extern M2C_UNK data_ov111_020f13c8;
extern s32 data_ov111_020f1bd8;

s32 func_ov111_020e5cd8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = arg0 & 0xF800;
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            return M2C_FIELD((data_ov111_020f1bd8 + ((u32) (arg0 << 0x1B) >> 0x19)), s32 *, 0x10C);
        case 0x1800:
            return *(s32 *) ((u8 *) &data_ov111_020f13c8 + ((arg0 & 0x1F) * 4));
        default:
            return 0;
    }
}
