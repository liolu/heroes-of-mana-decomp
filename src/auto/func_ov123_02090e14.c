/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_02024c28(s32);                             /* extern */
s32 func_02024ea0(s32, s32, u32);                   /* extern */
M2C_UNK func_ov123_0208fed0(void *, s32);           /* extern */
M2C_UNK func_ov123_02090624(void *);                /* extern */
extern s32 data_ov123_020dbd98;
extern s32 data_ov123_020e1654;

void func_ov123_02090e14(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r5 > 0) {
        temp_r6 = data_ov123_020dbd98;
        if ((u32) temp_r5 > func_02024c28(temp_r6)) {
            temp_r7   = M2C_FIELD(arg0, s32 *, 0x7C);
            temp_r5_2 = data_ov123_020dbd98;
            if (func_02024ea0(temp_r7, temp_r5_2, func_02024c28(temp_r5_2)) == 0) {
                func_ov123_0208fed0(arg0, temp_r7 + func_02024c28(temp_r6));
                M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 5, data_ov123_020e1654,
                                                                               M2C_FIELD(arg0, s32 *, 0x494));
            }
        }
    }
    M2C_FIELD(arg0, M2C_UNK(**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 4, data_ov123_020e1654,
                                                                   M2C_FIELD(arg0, s32 *, 0x494));
    func_ov123_02090624(arg0);
}
