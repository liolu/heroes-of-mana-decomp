/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_02096ca8(void *);                /* extern */
extern M2C_UNK data_ov123_020dc670;
extern void *data_ov123_020e1718;

void func_ov123_020990e0(void) {
    if (data_ov123_020e1718 == NULL) {
        return;
    }
    func_ov123_02096ca8(data_ov123_020e1718 + 8);
    M2C_FIELD(data_ov123_020e1718, M2C_UNK(**)(M2C_UNK *, void *, M2C_UNK), 4)(&data_ov123_020dc670, data_ov123_020e1718, 0);
    data_ov123_020e1718 = NULL;
}
