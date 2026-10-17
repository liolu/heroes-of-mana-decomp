/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020c66b0(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020c7a60();                      /* extern */
extern void *data_ov123_020e470c;
extern M2C_UNK func_ov123_020c7aac;

void func_ov123_020c7d28(void) {
    func_ov123_020c7a60();
    func_ov123_020c66b0(&func_ov123_020c7aac);
    M2C_FIELD(data_ov123_020e470c, s8 *, 0xA90) = 8;
}
