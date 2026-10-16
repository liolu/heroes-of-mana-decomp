/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                       /* extern */
M2C_UNK func_ov123_02070a6c();                      /* extern */
s32 func_ov123_02070bf0();                          /* extern */
extern s32 data_ov123_020e0a00;

s32 func_ov123_02070c34(s32 arg0) {
    OSi_ReferSymbol(0x02000BC4);
    if (data_ov123_020e0a00 != 0) {
        return 0;
    }
    data_ov123_020e0a00 = arg0;
    func_ov123_02070a6c();
    return func_ov123_02070bf0();
}
