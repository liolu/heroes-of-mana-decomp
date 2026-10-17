/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0208372c(void **, void *);       /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */

s32 func_ov123_0207e944(void **arg0, void *arg1) {
    void *temp_r1;
    void *temp_r4;

    temp_r1 = M2C_FIELD(arg1, void **, 8);
    temp_r4 = *arg0;
    if ((temp_r1 != NULL) && (M2C_FIELD(temp_r4, s32 *, 0x104) == 0)) {
        func_ov123_020996a0(M2C_FIELD(temp_r1, void **, 8));
        M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 8) = NULL;
        func_ov123_020996a0(M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC));
        M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC) = NULL;
        func_ov123_020996a0(M2C_FIELD(arg1, void **, 8));
        M2C_FIELD(arg1, void **, 8) = NULL;
    }
    func_ov123_020996a0(M2C_FIELD(arg1, void **, 0x10));
    M2C_FIELD(arg1, void **, 0x10) = NULL;
    func_ov123_020996a0(M2C_FIELD(arg1, void **, 0x18));
    M2C_FIELD(arg1, void **, 0x18) = NULL;
    M2C_FIELD(arg1, s32 *, 0x14)   = 0;
    if ((M2C_FIELD(arg1, s32 *, 0xC) == 0) ||
        ((M2C_FIELD(temp_r4, s32 *, 0x104) == 1) && (M2C_FIELD(arg1, void **, 8) == NULL))) {
        func_ov123_0208372c(arg0, arg1);
        return 0;
    }
    return 1;
}
