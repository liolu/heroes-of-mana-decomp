/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 CanMakeUnitDetail(s32, s32, void *);          /* extern */
M2C_UNK putOneUnitIcon(u32, s32);              /* extern */
M2C_UNK ReleaseUnitListGraData();                      /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov109_020e9fcc;
extern void *data_ov109_020ea340;

void PutListUnitIcon(M2C_UNK arg0, s32 arg5) {
    s32 var_r5;
    s32 var_r6;
    u32 temp_r0;

    if (CanMakeUnitDetail((((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 0) << 0xF) >> 0x1C) * 0x2D0) +
                              M2C_FIELD(data_0203673c, s32 *, 0x28),
                          arg0, data_ov109_020ea340 + 0x364) != 0) {
        M2C_FIELD(data_ov109_020ea340, s32 *, 4) = (s32) (M2C_FIELD(data_ov109_020ea340, s32 *, 4) & ~0x07800000);
        M2C_FIELD(data_ov109_020ea340, s32 *, 0) = (s32) ((M2C_FIELD(data_ov109_020ea340, s32 *, 0) & ~0xF8000000) |
                                                          (M2C_FIELD(data_ov109_020ea340, u32 *, 0x364) << 0x1B));
        ReleaseUnitListGraData();
        var_r5 = 0;
        var_r6 = 0x54;
    loop_2:
        temp_r0 = var_r5 + ((u32) (M2C_FIELD(data_ov109_020ea340, s32 *, 0) << 5) >> 0x1B);
        if (temp_r0 < (u32) M2C_FIELD(data_ov109_020ea340, u32 *, 0x364)) {
            putOneUnitIcon(temp_r0, var_r6);
            var_r5 += 1;
            var_r6 += 0x18;
            if (var_r5 < 6) {
                goto loop_2;
            }
        }
    }
}
