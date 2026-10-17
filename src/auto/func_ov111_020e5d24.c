/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov111_020f13c8;
extern s32 data_ov111_020f1bd8;

void func_ov111_020e5d24(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = arg0 & 0xF800;
    switch (temp_r2) {                              /* irregular */
        case 0x1800:
            *(s32 *) ((u8 *) &data_ov111_020f13c8 + ((arg0 & 0x1F) * 4)) = arg1;
            return;
        case 0x0:
            M2C_FIELD((data_ov111_020f1bd8 + ((u32) (arg0 << 0x1B) >> 0x19)), s32 *, 0x10C) = arg1;
            return;
    }
}
