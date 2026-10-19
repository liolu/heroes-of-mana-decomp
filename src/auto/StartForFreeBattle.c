/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ReadUnitLogic(u32);                   /* extern */
M2C_UNK SetUpSenarioScript(s16);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa624;

void StartForFreeBattle(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD8) & ~0x180000);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3A) = -1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0x100000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) | 2);
    ReadUnitLogic((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) << 0x1E) >> 0x1F);
    SetUpSenarioScript(M2C_FIELD(data_ov000_02051548, s16 *, 0x38));
    M2C_FIELD(data_ov000_02051548, s32 *, 0x24) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) | 0x100);
}
