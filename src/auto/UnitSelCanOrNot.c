/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *Get_aONEOBJadrsByCharno(s32);                     /* extern */
extern M2C_UNK data_ov003_020ac498;

void UnitSelCanOrNot(void *arg0, void *arg1) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r2;

    temp_r4 = arg1;
    temp_r0 = Get_aONEOBJadrsByCharno(arg0);
    if ((temp_r0 != NULL) && (temp_r2 = M2C_FIELD(temp_r0, void **, 0xE8), (temp_r2 != NULL))) {
        M2C_FIELD(temp_r2, s32 *, 4) = (s32) ((M2C_FIELD(temp_r2, s32 *, 4) & ~0x40000000) | ((u32) (temp_r4 << 0x1F) >> 1));
    }
}
