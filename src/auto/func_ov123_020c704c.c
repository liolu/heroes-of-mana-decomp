/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c65ac();                      /* extern */
s32 func_ov123_020c7018();                          /* extern */
M2C_UNK func_ov123_020c7718();                      /* extern */
extern M2C_UNK data_ov123_020de638;
extern M2C_UNK (*data_ov123_020e4704)(M2C_UNK, M2C_UNK *);

void func_ov123_020c704c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        func_ov123_020c7718();
        func_ov123_020c65ac();
        return;
    }
    if (func_ov123_020c7018() != 0) {
        return;
    }
    if (data_ov123_020e4704 != NULL) {
        data_ov123_020e4704(0x08000000, &data_ov123_020de638);
    }
    func_ov123_020c65ac();
}
