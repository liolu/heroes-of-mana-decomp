/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02083578(void *);                    /* extern */
M2C_UNK func_ov123_0208372c(void **, void *);       /* extern */
s32 func_ov123_02083774(void **, M2C_UNK, void **); /* extern */
M2C_UNK func_ov123_02086078(void **, M2C_UNK *);    /* extern */
M2C_UNK func_ov123_020996a0(s32);                   /* extern */
extern M2C_UNK data_ov123_020d9c24;

s32 func_ov123_0207b9fc(void **arg0, M2C_UNK arg1) {
    void *sp0;
    void *temp_r5;

    if ((arg0 == NULL) || (temp_r5 = *arg0, (temp_r5 == NULL))) {
        return 2;
    }
    if (M2C_FIELD(temp_r5, s32 *, 0x108) != 0) {
        return 0;
    }
    if (M2C_FIELD(temp_r5, s32 *, 0x1D8) == 4) {
        func_ov123_02086078(arg0, &data_ov123_020d9c24);
        return 2;
    }
    if (func_ov123_02083774(arg0, arg1, &sp0) == 0) {
        return 0;
    }
    M2C_FIELD(sp0, s32 *, 0x14) = (s32) (M2C_FIELD(sp0, s32 *, 0x14) - 1);
    if ((M2C_FIELD(temp_r5, s32 *, 0x100) == 0) && ((s32) M2C_FIELD(sp0, s32 *, 0x14) <= 0)) {
        func_ov123_020996a0(M2C_FIELD(sp0, s32 *, 0x10));
        M2C_FIELD(sp0, s32 *, 0x10) = 0;
        if (func_ov123_02083578(sp0) != 0) {
            func_ov123_0208372c(arg0, sp0);
        }
    }
    return 0;
}
