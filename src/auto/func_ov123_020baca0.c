/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c1bf0(s32);                   /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020c530c();                          /* extern */
M2C_UNK func_ov123_020c5320();                      /* extern */
extern void *data_ov123_020e4674;
extern M2C_UNK func_ov123_020bac74;

void func_ov123_020baca0(void) {
    if (func_ov123_020c530c() != 0) {
        return;
    }
    func_ov123_020c36bc(6);
    func_ov123_020c5320();
    func_ov123_020c1bf0(M2C_FIELD(data_ov123_020e4674, s32 *, 0xC));
    func_ov123_020b2410(&func_ov123_020bac74);
}
