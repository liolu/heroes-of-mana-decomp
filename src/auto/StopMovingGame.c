/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK EndMessageScreenForDS(M2C_UNK);               /* extern */
M2C_UNK InitNowSelectUnitInAreaMap();                      /* extern */
M2C_UNK DeleteNoAnimeObj();                      /* extern */
M2C_UNK deleteCompasIcon();                      /* extern */
M2C_UNK deleteUPDOWNIcon();                      /* extern */
M2C_UNK deleteHataIcon();                      /* extern */
M2C_UNK DeleteUnitStatusParam();                      /* extern */
M2C_UNK DeleteWin_HookTakeOff();                      /* extern */
M2C_UNK CloseNowInputScMode();                      /* extern */
M2C_UNK ReleaseFlyArmWork();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac3b4;

void StopMovingGame(void) {
    s32 temp_r1;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) << 0x16) >> 0x1C) == 2) {
        DeleteWin_HookTakeOff();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x3C0);
    }
    temp_r1 = M2C_FIELD(data_ov000_02051548, s32 *, 0x10);
    if ((u32) (((u32) (temp_r1 << 0x16) >> 0x1C) - 3) <= 1U) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (temp_r1 & ~0x3C0);
    }
    EndMessageScreenForDS(0);
    EndMessageScreenForDS(1);
    ReleaseFlyArmWork();
    M2C_FIELD(data_ov000_02051548, s32 *, 4)     = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) & ~0x10000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x440) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x440) & ~3);
    CloseNowInputScMode();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF8000);
    deleteUPDOWNIcon();
    deleteCompasIcon();
    deleteHataIcon();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x434) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x434) & ~3);
    DeleteUnitStatusParam();
    InitNowSelectUnitInAreaMap();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF8000) | 0x10000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x24) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) | 0x100);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1C) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x1C) & ~0x20000000);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C) = 0;
    DeleteNoAnimeObj();
}
