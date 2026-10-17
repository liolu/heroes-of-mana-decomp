/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_02071370(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov123_020d9868;
extern M2C_UNK data_ov123_020d9880;

void func_ov123_02073e18(void *arg0, s32 arg1) {
    if (arg1 == 1) {
        func_ov123_02071370(&data_ov123_020d9880);
        return;
    }
    func_ov123_02071370(&data_ov123_020d9868);
}
