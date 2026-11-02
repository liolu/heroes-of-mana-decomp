/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0209d33c(s32, M2C_UNK *);            /* extern */
extern void *data_ov123_020e18dc;

void func_ov123_0209cc3c(s32 arg0) {
    struct {
        u8 pad[0x108];
        u8 sp108[0x108];
    } L;
    M2C_UNK (*temp_r2)(s32, s32);
    u8 *d;
    s32 r;

    temp_r2 = M2C_FIELD(data_ov123_020e18dc, M2C_UNK(**)(s32, s32), 0x44);
    if ((temp_r2 != NULL) && (M2C_FIELD(data_ov123_020e18dc, s32 *, 0) != 1)) {
        temp_r2(arg0, M2C_FIELD(data_ov123_020e18dc, s32 *, 0x48));
    }
    d = data_ov123_020e18dc;
    if (*(void **) (d + 0x34) == NULL) {
        return;
    }
    r = func_ov123_0209d33c((arg0 * 0xC) + *(s32 *) (d + 0x18), (M2C_UNK *) L.sp108);
    M2C_FIELD(data_ov123_020e18dc, M2C_UNK(**)(s32, s32, M2C_UNK *, s32), 0x34)(arg0, r, (M2C_UNK *) L.sp108,
                                                                                M2C_FIELD(data_ov123_020e18dc, s32 *, 0x38));
}
