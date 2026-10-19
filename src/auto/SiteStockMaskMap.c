/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *covertVCtoPlane1bit(s32);                     /* extern */
s32 compressPlane(void *, M2C_UNK, M2C_UNK *); /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa294;

void SiteStockMaskMap(void) {
    M2C_UNK sp0;

    M2C_FIELD(data_ov000_02051548, void **, 0x688) = covertVCtoPlane1bit(0x06208000);
    M2C_FIELD(data_ov000_02051548, s8 *, 0x68C)    = 1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x680) = compressPlane(M2C_FIELD(data_ov000_02051548, void **, 0x688), 0x1800, &sp0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x684) = compressPlane(data_ov000_02051548 + 0x540, 0x140, &sp0);
}
