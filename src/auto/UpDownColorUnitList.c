/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK SetExtObjPaletteData(s32, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK UpDownColor(s32, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK data_ov109_020ea048;
extern void *data_ov109_020ea340;

void UpDownColorUnitList(void) {
    s32 temp_r0;
    u32 temp_r1;

    temp_r1 = (u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 4) << 5) >> 0x1C;
    if ((temp_r1 != 0) && (M2C_FIELD(((temp_r1 * 0xC) + (s32) data_ov109_020ea340), s32 *, 0x2E4) != 0)) {
        temp_r0 = func_0200ed38(0, -1, 0x20);
        UpDownColor(
            M2C_FIELD(((((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 4) << 5) >> 0x1C) * 0xC) + (s32) data_ov109_020ea340),
                      s32 *, 0x2E4),
            temp_r0, M2C_FIELD(data_ov109_020ea340, s32 *, 0x14), 0xF);
        SetExtObjPaletteData(temp_r0, (((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 4) << 5) >> 0x1C) + 0x2F) << 5, 0x20, 1);
    }
}
