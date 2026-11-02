/* compiler: 1.2/sp3 */
#include "m2c.h"
extern void func_02020d04(u8 *, u8 *, s32, s32);
extern void func_ov123_0208ab90(u8 *o8);
extern u8 data_ov123_020db508[];
extern u8 data_ov123_020db4f8[];
typedef void (*FPO)(u8 *, s32);
s32 func_ov123_02087b44(u8 *o, s32 a1) {
    u8 *o8;
    if (o == 0) {
        func_02020d04(data_ov123_020db508, data_ov123_020db4f8, 0, 0xBA);
    }
    if (o == 0) {
        return 1;
    }
    if (*(s32 *) (o + 0x30) == 0) {
        return 1;
    }
    *(s32 *) (o + 0x24)  = *(s32 *) (o + 0x24) + 1;
    o8                   = *(u8 **) (o + 0x8);
    *(s32 *) (o8 + 0x1C) = *(s32 *) (o8 + 0x1C) + 1;
    (*(FPO *) (o + 0x30))(o, a1);
    *(s32 *) (o + 0x24)  = *(s32 *) (o + 0x24) - 1;
    o8                   = *(u8 **) (o + 0x8);
    *(s32 *) (o8 + 0x1C) = *(s32 *) (o8 + 0x1C) - 1;
    o8                   = *(u8 **) (o + 0x8);
    if (*(s32 *) (o8 + 0x14) != 0 && *(s32 *) (o8 + 0x1C) == 0) {
        func_ov123_0208ab90(o8);
        return 0;
    }
    return 1;
}
