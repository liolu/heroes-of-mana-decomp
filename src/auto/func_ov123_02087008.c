/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_0207af18(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov123_0207af34(s32);                   /* extern */
M2C_UNK func_ov123_020865d8();                      /* extern */
M2C_UNK func_ov123_020996a0();                      /* extern */
extern s32 data_ov123_020db368;
extern s32 data_ov123_020e0e94;
extern s32 data_ov123_020e0e98;
extern s32 data_ov123_020e0ea8;

void func_ov123_02087008(void) {
    if (data_ov123_020db368 != -1) {
        func_ov123_0207af18(data_ov123_020db368, 2);
        func_ov123_0207af34(data_ov123_020db368);
    }
    data_ov123_020db368 = -1;
    func_ov123_020865d8();
    if (data_ov123_020e0e98 == 0) {
        return;
    }
    func_ov123_020996a0();
    data_ov123_020e0e98 = 0;
    data_ov123_020e0ea8 = 0;
    data_ov123_020e0e94 = 0;
}
