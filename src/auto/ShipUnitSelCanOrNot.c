/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac4a8;

void ShipUnitSelCanOrNot(s32 arg0) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
        (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0x20000) | ((u32) (arg0 << 0x1F) >> 0xE));
}
