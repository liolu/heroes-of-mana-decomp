/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020b2388();                          /* extern */
extern M2C_UNK data_ov123_020d79c0;

s32 func_ov123_020ae394(void) {
    return *(s32 *) ((u8 *) &data_ov123_020d79c0 + (func_ov123_020b2388() * 4));
}
