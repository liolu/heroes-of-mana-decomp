/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void func_ov123_02077470(s32 arg0, s32 arg1) {
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r2 == NULL) {
        return;
    }
    temp_r2_2 = M2C_FIELD(temp_r2, void **, 0xC);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, s32 *, 0x814) = arg0;
        M2C_FIELD(temp_r2_2, s32 *, 0x818) = arg1;
    }
}
