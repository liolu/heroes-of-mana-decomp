/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_ov123_020996d4(s32);                     /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b70;
extern M2C_UNK data_ov123_020d9b78;
extern M2C_UNK data_ov123_020d9b84;

void *func_ov123_0207a27c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r6;
    void *temp_r0;

    var_r6  = arg1;
    temp_r0 = func_ov123_020996d4(0x18);
    if (temp_r0 == NULL) {
        func_02020d04(&data_ov123_020d9b70, &data_ov123_020d9b18, 0, 0x52);
    }
    if (arg0 == 0) {
        func_02020d04(&data_ov123_020d9b78, &data_ov123_020d9b18, 0, 0x53);
    }
    if (var_r6 == 0) {
        var_r6 = 8;
    }
    M2C_FIELD(temp_r0, s32 *, 0)    = 0;
    M2C_FIELD(temp_r0, s32 *, 4)    = var_r6;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = var_r6;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg2;
    temp_r1                         = M2C_FIELD(temp_r0, s32 *, 4);
    if (temp_r1 != 0) {
        M2C_FIELD(temp_r0, void **, 0x14) = func_ov123_020996d4(temp_r1 * M2C_FIELD(temp_r0, s32 *, 8));
        if (M2C_FIELD(temp_r0, void **, 0x14) == NULL) {
            func_02020d04(&data_ov123_020d9b84, &data_ov123_020d9b18, 0, 0x5E);
        }
    } else {
        M2C_FIELD(temp_r0, void **, 0x14) = NULL;
    }
    return temp_r0;
}
