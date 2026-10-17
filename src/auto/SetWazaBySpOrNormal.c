/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetUseWaza(void *, s32, u16);      /* extern */
extern M2C_UNK data_ov003_020abacc;

void SetWazaBySpOrNormal(void *arg0, void *arg1) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = arg0;
    temp_r1 = arg1;
    SetUseWaza(temp_r0, temp_r1, M2C_FIELD((M2C_FIELD(temp_r0, s32 *, 0xE8) + (temp_r1 * 2)), u16 *, 0x14));
}
