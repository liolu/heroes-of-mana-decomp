/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
M2C_UNK func_ov123_02079f1c(s32, M2C_UNK);          /* extern */
void *func_ov123_0207a194(s32, M2C_UNK);            /* extern */
s32 func_ov123_0207a204(s32);                       /* extern */
M2C_UNK func_ov123_0207ccec(void **, s32, s32, s32); /* extern */
M2C_UNK func_ov123_02082b6c(void **, void *);       /* extern */
M2C_UNK func_ov123_0208655c(void **, M2C_UNK *);    /* extern */
extern M2C_UNK data_ov123_020dab68;
extern M2C_UNK data_ov123_020dab78;
extern M2C_UNK data_ov123_020dac7c;
extern M2C_UNK data_ov123_020dac80;

void func_ov123_02082a58(void **arg0, void *arg1) {
    s32 temp_r2;
    void *temp_r0;
    void *temp_r6;
    void *var_r0;
    void *var_r1;

    temp_r6 = *arg0;
    if (arg1 == NULL) {
        func_02020d04(&data_ov123_020dab68, &data_ov123_020dab78, 0, 0x213);
    }
    var_r1 = M2C_FIELD(temp_r6, void **, 0x434);
    if (var_r1 == arg1) {
        M2C_FIELD(temp_r6, void **, 0x434) = (void *) M2C_FIELD(arg1, void **, 0x3C);
        goto block_9;
    }
    var_r0 = M2C_FIELD(var_r1, void **, 0x3C);
    if (var_r0 != arg1) {
    loop_5:
        if (var_r0 == NULL) {
            func_02020d04(&data_ov123_020dac7c, &data_ov123_020dab78, 0, 0x225);
            func_ov123_0208655c(arg0, &data_ov123_020dac80);
            return;
        }
        var_r1 = var_r0;
        var_r0 = M2C_FIELD(var_r0, void **, 0x3C);
        if (var_r0 == arg1) {
            goto block_8;
        }
        goto loop_5;
    }
block_8:
    M2C_FIELD(var_r1, void **, 0x3C) = (void *) M2C_FIELD(arg1, void **, 0x3C);
block_9:
    if (func_ov123_0207a204(M2C_FIELD(arg1, s32 *, 0x38)) != 0) {
        do {
            temp_r0 = func_ov123_0207a194(M2C_FIELD(arg1, s32 *, 0x38), 0);
            temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x10);
            if (temp_r2 < 0x64) {
                func_ov123_0207ccec(arg0, M2C_FIELD(arg1, s32 *, 0xC), temp_r2,
                                    M2C_FIELD(temp_r0, s32 *, 0) + M2C_FIELD(temp_r0, s32 *, 0x14));
            }
            func_ov123_02079f1c(M2C_FIELD(arg1, s32 *, 0x38), 0);
        } while (func_ov123_0207a204(M2C_FIELD(arg1, s32 *, 0x38)) != 0);
    }
    func_ov123_02082b6c(arg0, arg1);
}
