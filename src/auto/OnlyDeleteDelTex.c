/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OnlyDeleteDelTexOne(s32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a8408;

void OnlyDeleteDelTex(void) {
    OnlyDeleteDelTexOne(M2C_FIELD(data_ov000_02051548, s32 *, 0x274));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x274) = 0;
}
