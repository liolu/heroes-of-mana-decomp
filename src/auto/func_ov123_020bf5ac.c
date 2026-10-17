/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c3d78();                      /* extern */
M2C_UNK func_ov123_020c95a4(M2C_UNK);               /* extern */
extern void *data_ov123_020e4694;
extern M2C_UNK func_ov123_020bf514;

void func_ov123_020bf5ac(void) {
    if (M2C_FIELD(data_ov123_020e4694, u8 *, 0x1D) == 2) {
        func_ov123_020c3d78();
    }
    func_ov123_020ae090();
    func_ov123_020c95a4(8);
    func_ov123_020b2410(&func_ov123_020bf514);
}
