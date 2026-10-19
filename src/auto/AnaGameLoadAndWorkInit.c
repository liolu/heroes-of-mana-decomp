/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02000f44(M2C_UNK);                     /* extern */
M2C_UNK func_02003724();                            /* extern */
M2C_UNK InitAnaGlobalWork();                      /* extern */
M2C_UNK ReleaseAllColorRoll();                      /* extern */
M2C_UNK ReleaseStock_VSMotoData();                      /* extern */
M2C_UNK ReleaseSeireiKazu_ShisetuLevTable();                      /* extern */
M2C_UNK ReleaseNowGameData();                      /* extern */
extern M2C_UNK data_ov000_02050608;
extern void *data_ov000_02051548;

void AnaGameLoadAndWorkInit(void) {
    func_02000f44(3);
    InitAnaGlobalWork();
    M2C_FIELD(data_ov000_02051548, s32 *, 4) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) | 4);
    func_02000f44(0x12);
    M2C_FIELD(data_ov000_02051548, s32 *, 4) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) | 2);
    func_02003724();
    ReleaseAllColorRoll();
    ReleaseSeireiKazu_ShisetuLevTable();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF00);
    M2C_FIELD(data_ov000_02051548, s32 *, 4)    = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 4) & ~0x20000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x3C);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~1);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x10) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x10) & ~0x10000000);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x38) = -1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) & ~1);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3A) = -1;
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C) = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC0) = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC4) = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC2) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1E000) | 0xA000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xFC) = 0;
    ReleaseNowGameData();
    ReleaseStock_VSMotoData();
}
