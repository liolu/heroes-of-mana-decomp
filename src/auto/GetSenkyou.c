/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_0202d478(s32, s32);                    /* extern */
s32 GetUnitKazuInBoard(M2C_UNK);                   /* extern */
extern void *data_0203673c;
extern M2C_UNK data_ov003_020aa3fc;

void GetSenkyou(s32 arg4) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r4;
    void *temp_r1;
    void *temp_r1_2;

    temp_r1 = M2C_FIELD(data_0203673c, void **, 0x28);
    if ((((u32) (M2C_FIELD(temp_r1, s32 *, 0) << 0xB) >> 0x1C) != 0) ||
        (((u32) (M2C_FIELD(temp_r1, s32 *, 0x5A0) << 0xB) >> 0x1C) != 0)) {
        temp_r4 = GetUnitKazuInBoard(0);
        var_r4  = temp_r4 + GetUnitKazuInBoard(2);
    } else {
        var_r4 = 0;
    }
    temp_r1_2 = M2C_FIELD(data_0203673c, void **, 0x28);
    if ((((u32) (M2C_FIELD(temp_r1_2, s32 *, 0x2D0) << 0xB) >> 0x1C) != 0) ||
        (((u32) (M2C_FIELD(temp_r1_2, s32 *, 0x870) << 0xB) >> 0x1C) != 0)) {
        temp_r5 = GetUnitKazuInBoard(1);
        var_r1  = temp_r5 + GetUnitKazuInBoard(3);
    } else {
        var_r1 = 0;
    }
    func_0202d478(var_r4 * 0x64, var_r4 + var_r1);
}
