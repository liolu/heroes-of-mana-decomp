/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DC_FlushAll();                              /* extern */
M2C_UNK GX_BeginLoadTex();                          /* extern */
M2C_UNK GX_EndLoadTex();                            /* extern */
M2C_UNK TransTex2VramSub(s32);                   /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a8478;
extern s32 data_ov003_020b08ac;

void TransTex2Vram(void) {
    data_ov003_020b08ac = 0;
    GX_BeginLoadTex();
    DC_FlushAll();
    TransTex2VramSub(data_ov000_02051548 + 0x278);
    GX_EndLoadTex();
}
