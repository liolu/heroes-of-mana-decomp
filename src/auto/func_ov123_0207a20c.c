/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0207a3d8(void *, s32);           /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */
extern M2C_UNK data_ov123_020d9b18;
extern M2C_UNK data_ov123_020d9b70;

void func_ov123_0207a20c(void *arg0) {
    s32 var_r4;

    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020d9b70, &data_ov123_020d9b18, 0, 0x69);
    }
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
        do {
            func_ov123_0207a3d8(arg0, var_r4);
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0));
    }
    func_ov123_020996a0(M2C_FIELD(arg0, void **, 0x14));
    func_ov123_020996a0(arg0);
}
