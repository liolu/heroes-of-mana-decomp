/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov123_02070f78(s32);                       /* extern */
s32 func_ov123_02071370(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov123_020d9898;
extern void *data_ov123_020e0a00;
extern s32 data_ov123_020e0a10;

s32 func_ov123_02070bf0(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_02070f78(M2C_FIELD(data_ov123_020e0a00, s32 *, 0x20));
    if (temp_r0 >= 0) {
        data_ov123_020e0a10 = func_ov123_02071370(&data_ov123_020d9898);
    }
    return temp_r0;
}
