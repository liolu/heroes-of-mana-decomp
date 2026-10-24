/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern s8 *data_ov000_02051550;
extern u8 *data_ov000_02051548;
u8 *SetKazuByObj(void *, s32, s32, s32, s32, s32, s32, s32);
void SetUnitConditionHpKazu(void *obj) {
    s8 *p = data_ov000_02051550 + 0x400;
    u8 *r;
    *(u8 **) (data_ov000_02051548 + 0x1ec) = SetKazuByObj(obj, 0xeb - p[0x56] + p[0x55], 0x3a, 0, 0, 0, 0, 0);
    r                                      = *(u8 **) (data_ov000_02051548 + 0x1ec);
    r[0xb] |= 0x80;
}
