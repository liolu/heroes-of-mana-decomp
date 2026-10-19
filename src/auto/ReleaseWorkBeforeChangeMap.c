/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_0200f1bc(M2C_UNK, s32);                /* extern */
M2C_UNK ModelWorkInit();                      /* extern */
M2C_UNK ResetTexPalMap();                      /* extern */
M2C_UNK ObjTexGetInit();                      /* extern */
M2C_UNK ReleaseTexGet();                      /* extern */
M2C_UNK InitObjectETC();                      /* extern */
M2C_UNK Initial_polygon_work();                      /* extern */
M2C_UNK AreaMapRoll();                      /* extern */
M2C_UNK ana_InitVRAM();                      /* extern */
M2C_UNK SetFirstEyePosition();                      /* extern */
M2C_UNK ReleaseWorkForMapChange();                      /* extern */
M2C_UNK ana_InitDisplay3D();                      /* extern */
M2C_UNK StopAllAikyoEffect(s32);                   /* extern */
M2C_UNK CloseNowInputScMode();                      /* extern */
extern s32 data_02036724;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa458;

void ReleaseWorkBeforeChangeMap(M2C_UNK arg0) {
    s32 var_r3;

    StopAllAikyoEffect(arg0);
    CloseNowInputScMode();
    ReleaseWorkForMapChange();
    var_r3                                       = 0;
    M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) = 0U;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1C)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x1C) & ~0x800);
    if (M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) != 0) {
        var_r3 = 1;
    }
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & ~0x8000) | (var_r3 << 0xF);
    ReleaseTexGet();
    ObjTexGetInit();
    SetFirstEyePosition();
    ResetTexPalMap();
    ana_InitVRAM();
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) & ~0x180000);
    ana_InitDisplay3D();
    ModelWorkInit();
    Initial_polygon_work();
    InitObjectETC();
    AreaMapRoll();
    func_0200f1bc(0, data_02036724);
}
