/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK G3_LoadMtx43(M2C_UNK *);                    /* extern */
extern M2C_UNK data_ov003_020a9d04;

void CalcModelMatrix2(M2C_UNK arg4) {
    *(s32 *) 0x04000440 = 1;
    G3_LoadMtx43(&arg4);
    *(s32 *) 0x0400044C = 0;
}
