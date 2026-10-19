/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK putAllMap_ObjectSub(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a98a8;

void putAllMap_Object(void) {
    putAllMap_ObjectSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x2F0));
}
