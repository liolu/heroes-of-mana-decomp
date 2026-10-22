/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetCanBuildHouseDetail(s32, void *);               /* extern */
M2C_UNK putOneShisetuIcon(u32, s32);              /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov109_020e9d20;
extern void *data_ov109_020ea340;

void PutShisetuIcon(s32 arg5) {
    s32 var_r4;
    s32 var_r5;
    u32 temp_r0;

    if (GetCanBuildHouseDetail((((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 0) << 0xF) >> 0x1C) * 0x2D0) +
                                   M2C_FIELD(data_0203673c, s32 *, 0x28),
                               data_ov109_020ea340 + 0x364) != 0) {
        var_r4                                     = 0;
        M2C_FIELD(data_ov109_020ea340, s32 *, 0)   = (s32) ((M2C_FIELD(data_ov109_020ea340, s32 *, 0) & ~0xF8000000) |
                                                          (M2C_FIELD(data_ov109_020ea340, u32 *, 0x364) << 0x1B));
        var_r5                                     = 0x54;
        M2C_FIELD(data_ov109_020ea340, u8 *, 0x31) = 0xFF;
    loop_2:
        temp_r0 = var_r4 + ((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 0) << 5) >> 0x1B);
        if (temp_r0 < (u32) M2C_FIELD(data_ov109_020ea340, u32 *, 0x364)) {
            putOneShisetuIcon(temp_r0, var_r5);
            var_r4 += 1;
            var_r5 += 0x18;
            if (var_r4 < 6) {
                goto loop_2;
            }
        }
    }
}
