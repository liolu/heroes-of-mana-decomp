/* compiler: 1.2/sp3 */
#include "m2c.h"

void *func_ov123_0209d368();                        /* extern */
M2C_UNK func_ov123_0209efa0();                      /* extern */
M2C_UNK func_ov123_0209f158(M2C_UNK);               /* extern */

void func_ov123_0209f114(void) {
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 2) {
        return;
    }
    if (M2C_FIELD(func_ov123_0209d368(), u8 *, 0x15) == 3) {
        return;
    }
    func_ov123_0209efa0();
    func_ov123_0209f158(1);
}
