/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_02094970(void);

s32 func_ov123_02094950(s32 a) {
    if (func_ov123_02094970() != 0) {
        return (s32) ((u64) a & 0xFFFFFFFFULL);
    }
    return 0;
}
