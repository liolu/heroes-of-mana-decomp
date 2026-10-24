/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;
void SetStatusIcon(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void PutSelectIconInMes(s32 x, s32 y, s32 c, s32 idx, s32 e) {
    u8 *a;
    u16 v = *(u16 *) (data_ov000_0205154c + idx * 0x4b0 + 0x56c);
    a     = data_ov000_02051548;
    if (a != 0) {
        SetStatusIcon(c + 0xffab, e, x - 0x10, y + 0xc, v, 0, 0, (s32) (a + 0x38c + 0x400), *(s32 *) (a + 0x12c), idx);
    }
}
