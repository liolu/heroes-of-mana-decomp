/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WindowVramUpdate();                      /* extern */
M2C_UNK RestoreModelTextureAndPalette();                      /* extern */
M2C_UNK RestoreObjPalette();                      /* extern */
M2C_UNK RestoreObjTex();                      /* extern */
M2C_UNK SetPartysIconInAreaMap();                      /* extern */
M2C_UNK InitObjectETC(s32);                   /* extern */
M2C_UNK ana_InitDisplay3D();                      /* extern */
u32 PutWirelessLevel();                          /* extern */
M2C_UNK MakeIconSetScreenOnVBlank();                      /* extern */
M2C_UNK func_ov004_020cb4f4(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020cb564(M2C_UNK);               /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa224;

s32 MakeGameScreenOn(M2C_UNK arg0) {
    u32 var_r0;

    InitObjectETC(arg0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~1) | 1);
    ana_InitDisplay3D();
    SetPartysIconInAreaMap();
    RestoreModelTextureAndPalette();
    RestoreObjPalette();
    RestoreObjTex();
    MakeIconSetScreenOnVBlank();
    WindowVramUpdate();
    func_ov004_020cb564(1);
    func_ov004_020cb4f4(1);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) * 4) >> 0x1F;
    if (var_r0 != 0) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x7A8) & ~0x38);
        var_r0                                       = PutWirelessLevel();
    }
    return var_r0;
}
