/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_DestroyThread(void *);                   /* extern */
M2C_UNK func_02000f78(s32);                         /* extern */
M2C_UNK ReleaseRetryData();                      /* extern */
M2C_UNK SetCarisumaSkillInShip();                      /* extern */
M2C_UNK scscstParameterInit();                      /* extern */
extern M2C_UNK data_ov000_020506c0;
extern void *data_ov000_02051548;

void ReleaseSenarioScript(void) {
    if ((M2C_FIELD(data_ov000_02051548, s16 *, 0x38) != -1) && (M2C_FIELD(data_ov000_02051548, s32 *, 0x758) != 0)) {
        OS_DestroyThread(data_ov000_02051548 + 0x698);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x758) = 0;
        func_02000f78(M2C_FIELD(data_ov000_02051548, s16 *, 0x38) + 0x16);
        scscstParameterInit();
        SetCarisumaSkillInShip();
        if (M2C_FIELD(data_ov000_02051548, s16 *, 0x3A) == -1) {
            ReleaseRetryData();
        }
    }
}
