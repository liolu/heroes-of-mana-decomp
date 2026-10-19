/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK PutShipIcon(M2C_UNK, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK deleteShipIcon(s32);                   /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab24c;

void RedrawShipIcon(M2C_UNK arg0) {
    deleteShipIcon(arg0);
    PutShipIcon(0,
                M2C_FIELD(((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                           M2C_FIELD(data_0203673c, s32 *, 0x28)),
                          u16 *, 0x2AE),
                0x14, 0xAC);
}
