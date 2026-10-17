/* compiler: 1.2/sp3 */
#include "m2c.h"

u32 func_ov123_0208ae78(void **arg0, u32 arg1) {
    void *temp_r2;

    temp_r2 = *arg0;
    return (u32) (M2C_FIELD(temp_r2, s32 *, 0) * M2C_FIELD(temp_r2, u16 *, 4)) % arg1;
}
