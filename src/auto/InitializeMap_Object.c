/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReleaseMap_ObjectAll(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9800;

void InitializeMap_Object(void) {
    ReleaseMap_ObjectAll(M2C_FIELD(data_ov000_02051548, s32 *, 0x2F0));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x2F0) = 0;
}
