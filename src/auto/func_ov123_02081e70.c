/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207af18(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov123_0207af34(s32);                   /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */
extern M2C_UNK data_ov123_020daaec;
extern M2C_UNK data_ov123_020daafc;

void func_ov123_02081e70(void **arg0, void *arg1) {
    void *temp_r2;
    void *temp_r4;

    temp_r2 = *arg0;
    if (M2C_FIELD(arg1, s32 *, 0) == 3) {
        temp_r4                          = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x210) - 1);
        if ((s32) M2C_FIELD(temp_r2, s32 *, 0x210) < 0) {
            func_02020d04(&data_ov123_020daafc, &data_ov123_020daaec, 0, 0xB6);
        }
        func_ov123_0207af18(M2C_FIELD(temp_r4, s32 *, 4), 2);
        func_ov123_0207af34(M2C_FIELD(temp_r4, s32 *, 4));
        func_ov123_020996a0(M2C_FIELD(temp_r4, void **, 0x18));
        M2C_FIELD(temp_r4, void **, 0x18) = NULL;
        func_ov123_020996a0(M2C_FIELD(temp_r4, void **, 8));
        M2C_FIELD(temp_r4, void **, 8) = NULL;
    }
    func_ov123_020996a0(M2C_FIELD(arg1, void **, 4));
    M2C_FIELD(arg1, void **, 4) = NULL;
    func_ov123_020996a0(arg1);
}
