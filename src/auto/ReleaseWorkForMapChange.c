/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);            /* extern */
M2C_UNK ReleaseShipInPara();                      /* extern */
M2C_UNK deleteObjCharDataInVBlank();                      /* extern */
M2C_UNK ReleaseObjWork();                      /* extern */
M2C_UNK PutOrderingInitialize();                      /* extern */
M2C_UNK ReleaseTexGet();                      /* extern */
M2C_UNK OnlyDeleteDelTex();                      /* extern */
M2C_UNK ClsTransTex2Vram();                      /* extern */
M2C_UNK ReleaseTexPaletteTrans();                      /* extern */
M2C_UNK ReleaseExtObjPaletteTrans();                      /* extern */
M2C_UNK ReleaseObjPaletteTrans();                      /* extern */
M2C_UNK InitializeMap_Object();                      /* extern */
M2C_UNK DeleteNoAnimeObj();                      /* extern */
M2C_UNK ModelWorkReleaseAll();                      /* extern */
M2C_UNK ReleaseKaoGraCommon();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa134;

void ReleaseWorkForMapChange(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x784) != 0) {
        OS_FreeToHeap(0, -1, M2C_FIELD(data_ov000_02051548, s32 *, 0x784));
        M2C_FIELD(data_ov000_02051548, s32 *, 0x784) = 0;
    }
    ReleaseKaoGraCommon();
    ReleaseObjWork();
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x2EC) != 0) {
        OS_FreeToHeap(0, -1, M2C_FIELD(data_ov000_02051548, s32 *, 0x2EC));
        M2C_FIELD(data_ov000_02051548, s32 *, 0x2EC) = 0;
    }
    ReleaseShipInPara();
    ModelWorkReleaseAll();
    PutOrderingInitialize();
    DeleteNoAnimeObj();
    deleteObjCharDataInVBlank();
    InitializeMap_Object();
    OnlyDeleteDelTex();
    ReleaseTexGet();
    ReleaseTexPaletteTrans();
    ReleaseExtObjPaletteTrans();
    ReleaseObjPaletteTrans();
    ClsTransTex2Vram();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x18) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x18) & 0xFFFE01FF);
}
