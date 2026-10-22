/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetLogicNo();                          /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020abaf8;
extern s32 data_ov107_020e0de4;
extern u8 data_ov107_020e0df0[];
extern s32 data_ov108_020da3e4;
extern u8 data_ov108_020da3f0[];

void Logic_separate(void *arg0) {
    M2C_UNK (*temp_r1)(s32);
    M2C_UNK (*temp_r1_2)(s32);
    s32 temp_r0;

    temp_r0 = GetLogicNo();
    if (temp_r0 != 0) {
        if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) << 0x1E) >> 0x1F) != 0) {
            if (temp_r0 < (s32) data_ov108_020da3e4) {
                temp_r1 = *(M2C_UNK(**)(s32))(&data_ov108_020da3f0[temp_r0 * 0x14]);
                if (temp_r1 != NULL) {
                    temp_r1(arg0);
                }
            }
        } else if (temp_r0 < (s32) data_ov107_020e0de4) {
            temp_r1_2 = *(M2C_UNK(**)(s32))(&data_ov107_020e0df0[temp_r0 * 0x14]);
            if (temp_r1_2 != NULL) {
                temp_r1_2(arg0);
            }
        }
    }
}
