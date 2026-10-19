/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK UseObjectSetUp(s32, M2C_UNK *);        /* extern */
M2C_UNK MakeKYOTEN_SET_GND_ByKyotenNo(u16, M2C_UNK *);        /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa17c;

void SetUnitPos4VS(void) {
    u8 sp0[8];

    MakeKYOTEN_SET_GND_ByKyotenNo(M2C_FIELD(data_ov000_02051548, u16 *, 0x258), (void *) sp0);
    UseObjectSetUp(M2C_FIELD(data_ov000_02051548, u16 *, 0x258) + 1, (void *) sp0);
}
