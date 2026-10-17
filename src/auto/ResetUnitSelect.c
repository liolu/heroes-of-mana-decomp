/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK putMode2NormalP_Obj();                      /* extern */
M2C_UNK InitNowSelectUnitInAreaMap();                      /* extern */
M2C_UNK deleteHataIcon(s32);                   /* extern */
M2C_UNK DeleteUnitStatusParam();                      /* extern */
M2C_UNK ChgRaceIconOff();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab030;

void ResetUnitSelect(s32 arg0) {
    deleteHataIcon(arg0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x434) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x434) & ~3);
    InitNowSelectUnitInAreaMap();
    putMode2NormalP_Obj();
    DeleteUnitStatusParam();
    ChgRaceIconOff();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF8000) | 0x10000);
}
