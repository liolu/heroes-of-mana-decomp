/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac038;

void scscstParameterInit(void) {
    M2C_FIELD(data_ov000_02051548, s16 *, 0x38)  = -1;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xC8)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xC8) & ~1);
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C)  = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC0)  = 0;
    M2C_FIELD(data_ov000_02051548, s16 *, 0xC4)  = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0)  = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1E000) | 0xA000);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xD0)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x800);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x758) = 0;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x24)  = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) & ~0x100);
    M2C_FIELD(data_ov000_02051548, s32 *, 0xFC)  = 0;
}
