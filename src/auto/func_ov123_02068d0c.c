/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK MIi_CpuCopyFast(void *, void *, M2C_UNK);   /* extern */
void *func_ov123_02067bac();                        /* extern */
M2C_UNK func_ov123_02068a24(void *);                /* extern */
void *func_ov123_02068b60(void *);                  /* extern */
void *func_ov123_02068be4();                        /* extern */
void *func_ov123_02068c28();                        /* extern */

void func_ov123_02068d0c(void *arg0, s16 arg1) {
    void *temp_r0;
    void *var_r6;

    temp_r0 = func_ov123_02067bac();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226A) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0x3C) != 0) {
        return;
    }
    var_r6 = func_ov123_02068b60(arg0 + 4);
    if (var_r6 == NULL) {
        var_r6 = func_ov123_02068c28();
    }
    if ((var_r6 == NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2278) == 1)) {
        var_r6 = func_ov123_02068be4();
    }
    if (var_r6 == NULL) {
        return;
    }
    M2C_FIELD(var_r6, s16 *, 2) = arg1;
    MIi_CpuCopyFast(arg0, var_r6 + 0x10, 0xC0);
    func_ov123_02068a24(var_r6);
}
