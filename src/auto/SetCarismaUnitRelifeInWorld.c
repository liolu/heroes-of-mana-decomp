/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK RelifeCarisumaOne(s32, s32);              /* extern */
s32 GetShisetuNo(s32);                       /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov109_020ea0ac;
extern s32 *data_ov109_020ea340;

void SetCarismaUnitRelifeInWorld(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r4;

    temp_r4 = arg1;
    temp_r0 = GetShisetuNo(arg0);
    if (temp_r0 != -1) {
        temp_r1 = (((u32) (*data_ov109_020ea340 << 0xF) >> 0x1C) * 0x2D0) + M2C_FIELD(data_0203673c, s32 *, 0x28);
        if (((u32) (M2C_FIELD((temp_r1 + (temp_r0 * 8)), s32 *, 0x21C) << 0x1C) >> 0x1C) == 2) {
            RelifeCarisumaOne(temp_r1, temp_r4);
        }
    }
}
