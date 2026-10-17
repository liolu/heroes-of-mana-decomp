/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ChangeCamera2MyKuniLeader();                      /* extern */
M2C_UNK SetCarisumaSkillInShip();                      /* extern */
M2C_UNK PutIconInit(M2C_UNK, M2C_UNK);      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac3a0;

void Routine_BattleStart(void) {
    M2C_UNK var_r0;

    M2C_FIELD(data_ov000_02051548, s32 *, 0x24) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x24) & ~0x100);
    if (M2C_FIELD(data_ov000_02051548, u16 *, 0x7AC) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    PutIconInit(var_r0, 0);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x14) = (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0x14) & ~0xF8000) | 0x10000);
    ChangeCamera2MyKuniLeader();
    M2C_FIELD(data_ov000_02051548, s32 *, 0x1CC) = 0x1E;
    SetCarisumaSkillInShip();
    M2C_FIELD(data_ov000_02051548, s16 *, 0x3C) = 0;
}
