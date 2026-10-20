/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseObjWorkOne(void *);
M2C_UNK SetTrsDataForEtc(s32 *, M2C_UNK);
extern void *data_ov000_02051548;

typedef struct {
    u32 lo : 28;
    u32 bit28 : 1;
    u32 bit29 : 1;
    u32 hi : 2;
} MODE;

void EscapeAndShipInSet(void *arg0) {
    s32 sp0;
    s32 temp_r1;

    if (((MODE *) ((u8 *) data_ov000_02051548 + 0x10))->bit29 &&
        !((MODE *) ((u8 *) data_ov000_02051548 + 0x10))->bit28) {
        temp_r1 = (sp0 & ~0x1F) | 3;
        sp0 = temp_r1;
        sp0 = (((temp_r1 & ~0x1FC00) | ((u32) (M2C_FIELD(arg0, u8 *, 0x38) << 0x19) >> 0xF)) & ~0x3E0) | 0x3E0;
        SetTrsDataForEtc(&sp0, 4);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x2000);
    ReleaseObjWorkOne(arg0);
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~1);
}
