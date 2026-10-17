/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c6400();                      /* extern */
s32 func_ov123_020c6db4();                          /* extern */
extern void *data_ov123_020e470c;

s32 func_ov123_020c7ae8(void) {
    if (func_ov123_020c6db4() != 1) {
        return 0;
    }
    func_ov123_020c6400();
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA90) = 1;
    return 1;
}
