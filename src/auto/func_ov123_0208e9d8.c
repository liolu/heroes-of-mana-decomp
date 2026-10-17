/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_ov123_0207a4f0(s32, s32 *);              /* extern */
extern M2C_UNK data_ov123_020dbd7c;
extern M2C_UNK data_ov123_020dbd84;

s32 func_ov123_0208e9d8(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 var_r4;
    void *temp_r0;

    var_r4 = arg2;
    if (arg0 == NULL) {
        func_02020d04(&data_ov123_020dbd7c, &data_ov123_020dbd84, 0, 0x97);
    }
    if (arg0 == NULL) {
        return 0;
    }
    sp0     = arg1;
    temp_r0 = func_ov123_0207a4f0(M2C_FIELD(arg0, s32 *, 0x18), &sp0);
    if (temp_r0 != NULL) {
        var_r4 = M2C_FIELD(temp_r0, s32 *, 4);
    }
    return var_r4;
}
