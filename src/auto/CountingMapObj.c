/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 checkCanSeeUnitByUser(M2C_UNK *);                 /* extern */
s32 CheckAreaMapMaskForEnemy(s8, s8);                    /* extern */
extern void *data_ov000_02051548;
extern u8 data_ov003_020b0cf0[];

s32 CountingMapObj(void *arg0, void *arg1, s32 arg7) {
    u8 *var_r4;
    s32 temp_r0;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    u32 temp_r1;
    void *temp_r1_2;

    temp_r0 = (s32) arg0;
    var_r7  = 0;
    temp_r8 = (s32) arg1;
    var_r6  = 0;
    temp_r1 = M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14;
    var_r4  = data_ov003_020b0cf0;
    if ((temp_r0 != (temp_r1 >> 0x1C)) && (temp_r0 != ((temp_r1 >> 0x1C) + 2))) {

    } else {
        var_r6 = 1;
    }
    var_r5 = 0;
    do {
        if ((((u32) (M2C_FIELD(var_r4, s32 *, 0) << 0x1F) >> 0x1F) != 0) &&
            (temp_r1_2 = M2C_FIELD(var_r4, void **, 0xE8), (temp_r1_2 != NULL))) {
            if ((((u32) (M2C_FIELD(temp_r1_2, s32 *, 8) << 8) >> 0x1F) == 0) && (M2C_FIELD(temp_r1_2, u16 *, 0x10) != 0) &&
                (temp_r8 == ((u32) (M2C_FIELD(var_r4, s32 *, 8) << 5) >> 0x1C))) {
                if (var_r6 != 0) {
                    var_r0 = checkCanSeeUnitByUser((M2C_UNK *) var_r4);
                } else {
                    var_r0 = CheckAreaMapMaskForEnemy(M2C_FIELD(var_r4, s8 *, 0x60), M2C_FIELD(var_r4, s8 *, 0x61));
                }
                if (var_r0 == 1) {
                    var_r7 += 1;
                }
            }
        }
        var_r5 += 1;
        var_r4 += 0x110;
    } while (var_r5 < 0x42);
    return var_r7;
}
