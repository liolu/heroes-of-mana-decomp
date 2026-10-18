/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_0207e0f0(void **, void *, s32);  /* extern */
M2C_UNK func_ov123_0207e128(void **, void *, M2C_UNK *); /* extern */
s32 func_ov123_02083578(void *);                    /* extern */
M2C_UNK func_ov123_02083618(void **, M2C_UNK *, s32); /* extern */
M2C_UNK func_ov123_0208372c(void **, void *);       /* extern */
s32 func_ov123_02083774(void **, M2C_UNK, void **); /* extern */
M2C_UNK func_ov123_02086078(void **, M2C_UNK *);    /* extern */
M2C_UNK func_ov123_020996a0(s32 *);                 /* extern */
extern M2C_UNK data_ov123_020d9f78;
extern M2C_UNK data_ov123_020d9f8c;
extern M2C_UNK data_ov123_020d9f98;
extern M2C_UNK data_ov123_020d9fa4;
extern M2C_UNK data_ov123_020d9fb4;
extern M2C_UNK data_ov123_020d9fbc;
extern M2C_UNK data_ov123_020d9fc8;
extern M2C_UNK data_ov123_020d9fd4;
extern M2C_UNK func_ov123_0207caec;

s32 func_ov123_0207c93c(void **arg0, M2C_UNK arg1) {
    void *sp0;
    s32 *temp_r0;
    void *temp_r5;
    s32 temp_r4;

    temp_r5 = *arg0;
    if (func_ov123_02083774(arg0, arg1, &sp0) == 0) {
        func_ov123_02086078(arg0, &data_ov123_020d9f78);
        return 2;
    }
    func_ov123_0207e128(arg0, temp_r5 + 0x1F4, &data_ov123_020d9f8c);
    func_ov123_0207e128(arg0, temp_r5 + 0x1F4, &data_ov123_020d9f98);
    func_ov123_0207e0f0(arg0, temp_r5 + 0x1F4, M2C_FIELD(temp_r5, s32 *, 0x198));
    func_ov123_0207e128(arg0, temp_r5 + 0x1F4, &data_ov123_020d9fa4);
    func_ov123_0207e0f0(arg0, temp_r5 + 0x1F4, M2C_FIELD(sp0, s32 *, 0));
    func_ov123_0207e128(arg0, temp_r5 + 0x1F4, &data_ov123_020d9fb4);
    temp_r0 = M2C_FIELD(sp0, s32 **, 8);
    if (temp_r0 != NULL) {
        temp_r4 = *temp_r0;
        if (temp_r4 < 0) {
            func_02020d04(&data_ov123_020d9fbc, &data_ov123_020d9fc8, 0, 0x1FD);
        }
        func_ov123_020996a0(M2C_FIELD(M2C_FIELD(sp0, s32 **, 8), s32 **, 8));
        M2C_FIELD(M2C_FIELD(sp0, s32 **, 8), s32 *, 8) = 0;
        func_ov123_020996a0(M2C_FIELD(M2C_FIELD(sp0, s32 **, 8), s32 **, 0xC));
        M2C_FIELD(M2C_FIELD(sp0, s32 **, 8), s32 *, 0xC) = 0;
        func_ov123_020996a0(M2C_FIELD(sp0, s32 **, 8));
        M2C_FIELD(sp0, s32 **, 8) = NULL;
        if (func_ov123_02083578(sp0) != 0) {
            func_ov123_0208372c(arg0, sp0);
        }
        M2C_FIELD(temp_r5, s32 *, 0x430) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x430) - 1);
        if ((s32) M2C_FIELD(temp_r5, s32 *, 0x430) < 0) {
            func_02020d04(&data_ov123_020d9fd4, &data_ov123_020d9fc8, 0, 0x204);
        }
        func_ov123_02083618(arg0, &func_ov123_0207caec, temp_r4);
    }
    return 0;
}
