/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetPaletteDataToVram(s32, M2C_UNK);          /* extern */
M2C_UNK DeleteNameByNoAnimeObj(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK ResetColorRoll(M2C_UNK);               /* extern */
M2C_UNK ResetObjPalMapX(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK deleteComObjByComnoRect(void *, s32, M2C_UNK);  /* extern */
M2C_UNK ReleaseObjectGraCommon();                      /* extern */
extern void *data_ov000_02051548;
extern void *data_ov000_0205154c;
extern M2C_UNK data_ov003_020ab484;

void Delete_MissionGameOver(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) & ~0x20000);
    ResetColorRoll(0);
    deleteComObjByComnoRect(data_ov000_02051548 + 0x78C, 0xFFA5, 0xFFA8);
    ReleaseObjectGraCommon();
    DeleteNameByNoAnimeObj(0, 0);
    DeleteNameByNoAnimeObj(0, 1);
    SetPaletteDataToVram(M2C_FIELD(data_ov000_0205154c, s32 *, 0x160) + (M2C_FIELD(data_ov000_0205154c, u16 *, 0x570) << 5),
                         0);
    ResetObjPalMapX(M2C_FIELD(data_ov000_02051548, s32 *, 0x264), 1, 0);
}
