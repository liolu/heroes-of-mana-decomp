#include "m2c.h"

M2C_UNK func_ov123_020adfe4();                      /* extern */
M2C_UNK func_ov123_020c8c80(s32, M2C_UNK, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_ov123_020cb618(M2C_UNK, M2C_UNK *);    /* extern */
extern M2C_UNK data_ov123_020d7968;
extern void *data_ov123_020e4568;
extern M2C_UNK func_ov123_020adf14;

void func_ov123_020adf70(M2C_UNK arg0) {
    s32 sp4;
    M2C_UNK sp0;

    func_ov123_020c8c80(M2C_FIELD(data_ov123_020e4568, s32 *, 8), 0, &sp0, &sp4);
    sp4 -= 4;
    func_ov123_020adfe4();
    if (sp4 > (s32) M2C_FIELD(&data_ov123_020d7968, u16 *, 2)) {
        return;
    }
    func_ov123_020adfe4();
    func_ov123_020cb618(arg0, &func_ov123_020adf14);
}
