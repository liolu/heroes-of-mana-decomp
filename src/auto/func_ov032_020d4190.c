#include "m2c.h"

M2C_UNK EquipItem(s32, M2C_UNK);          /* extern */
M2C_UNK EquipSeirei(s32, M2C_UNK);          /* extern */
s32 GetGameLevelMode();                          /* extern */
M2C_UNK SetFreeScenarioOnOff(M2C_UNK, M2C_UNK);      /* extern */

void func_ov032_020d4190(void) {
    s32 var_r7;

    var_r7 = 0;
    do {
        EquipItem(var_r7, -1);
        EquipItem(var_r7, -2);
        EquipItem(var_r7, -3);
        EquipSeirei(var_r7, -1);
        var_r7 += 1;
    } while (var_r7 < 0xB);
    if (GetGameLevelMode() != 1) {
        return;
    }
    SetFreeScenarioOnOff(0x25, 1);
}
