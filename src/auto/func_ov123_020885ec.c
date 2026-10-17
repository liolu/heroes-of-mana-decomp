/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a47c(s32, M2C_UNK *, M2C_UNK); /* extern */
extern s32 data_ov123_020e12ac;
extern M2C_UNK func_ov123_0208863c;

void func_ov123_020885ec(void *arg0) {
    if (data_ov123_020e12ac == 1) {
        return;
    }
    data_ov123_020e12ac = 1;
    func_ov123_0207a47c(M2C_FIELD(arg0, s32 *, 0xC), &func_ov123_0208863c, 0);
    data_ov123_020e12ac = 0;
}
