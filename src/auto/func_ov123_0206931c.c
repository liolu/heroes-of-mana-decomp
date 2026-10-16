/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02019ff4(M2C_UNK *, void *, void *, M2C_UNK); /* extern */
void *func_ov123_02067bac();                        /* extern */
M2C_UNK func_ov123_02068fa8(M2C_UNK *);             /* extern */
s32 func_ov123_02069004(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov123_020df190;
extern M2C_UNK func_ov123_02069050;

void func_ov123_0206931c(void) {
    void *temp_r0;

    temp_r0 = func_ov123_02067bac();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x2260) != 9) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226B) == 1) {
        return;
    }
    if (func_ov123_02069004(&data_ov123_020df190) == 0) {
        return;
    }
    if (func_02019ff4(&func_ov123_02069050, temp_r0 + 0x2144, temp_r0 + 0xF00, 0) == 2) {
        return;
    }
    func_ov123_02068fa8(&data_ov123_020df190);
}
