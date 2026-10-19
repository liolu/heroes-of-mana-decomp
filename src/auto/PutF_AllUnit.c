/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK VBlankIntrWaitInGame();                      /* extern */
M2C_UNK InitMessageScreenForDS(M2C_UNK);               /* extern */
M2C_UNK EndMessageScreenForDS(M2C_UNK);               /* extern */
s32 GetSelectKazu();                          /* extern */
M2C_UNK deleteUPDOWNIcon(s32);                   /* extern */
M2C_UNK PutChangeUpDownIcon(M2C_UNK);               /* extern */
M2C_UNK PutTrentoIcon(M2C_UNK, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK PutGaiaIcon(M2C_UNK, u32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK PutSelectCancelBtn();                      /* extern */
M2C_UNK PutShipIcon(M2C_UNK, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK PutGetRECTIcon(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SetUpNikoChanIcon();                      /* extern */
M2C_UNK PutNikoCyanIcon();                      /* extern */
M2C_UNK DeleteUnitStatusParam();                      /* extern */
M2C_UNK PutUnitRaceIcon();                      /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab22c;

void PutF_AllUnit(M2C_UNK arg0) {
    M2C_UNK var_r0;

    deleteUPDOWNIcon(arg0);
    DeleteUnitStatusParam();
    EndMessageScreenForDS(0);
    InitMessageScreenForDS(0);
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) << 0xD) >> 0x1F) != 0) {
        PutUnitRaceIcon();
    } else {
        SetUpNikoChanIcon();
        PutNikoCyanIcon();
    }
    if (GetSelectKazu() != 0) {
        PutSelectCancelBtn();
    } else {
        PutShipIcon(0,
                    M2C_FIELD(((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                               M2C_FIELD(data_0203673c, s32 *, 0x28)),
                              u16 *, 0x2AE),
                    0x14, 0xAC);
        PutTrentoIcon(0, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C, 0x10, 0x70);
        PutGaiaIcon(0, (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C, 0x10, 0x88);
    }
    if (M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    PutChangeUpDownIcon(var_r0);
    PutGetRECTIcon(0, 0xE8, 0x80);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x18) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x18) & 0xFFFE01FF) | 0x200);
    VBlankIntrWaitInGame();
}
