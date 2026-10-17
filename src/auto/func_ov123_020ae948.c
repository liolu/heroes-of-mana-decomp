/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae580(M2C_UNK *, M2C_UNK *);  /* extern */
s32 func_ov123_020b2370();                          /* extern */
s32 func_ov123_020ca510(M2C_UNK, M2C_UNK);          /* extern */
extern M2C_UNK data_ov123_020dd824;
extern M2C_UNK data_ov123_020dd874;
extern s32 data_ov123_020e45b4;
extern M2C_UNK func_0200baa4;
extern M2C_UNK func_0200bd44;

void func_ov123_020ae948(void) {
    s32 temp_r0;

    data_ov123_020e45b4 = func_ov123_020ca510(0xC0, 4);
    func_ov123_020ae580(&data_ov123_020dd874, &func_0200bd44);
    temp_r0 = func_ov123_020b2370();
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_ov123_020ae580(M2C_FIELD(&data_ov123_020dd824, M2C_UNK **, 0), &func_0200baa4);
            return;
        case 1:
            func_ov123_020ae580(M2C_FIELD(&data_ov123_020dd824, M2C_UNK **, 4), &func_0200baa4);
            return;
    }
}
