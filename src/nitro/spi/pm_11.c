#include "m2c.h"

M2C_UNK func_02016348(M2C_UNK *, M2C_UNK);

extern M2C_UNK data_0203a678;
M2C_UNK PMi_AppendList(M2C_UNK *, M2C_UNK);

extern M2C_UNK data_0203a680;

void PMi_ExecuteList(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == NULL) {
        return;
    }
    do {
        M2C_FIELD(var_r4, M2C_UNK(**)(s32), 0)(M2C_FIELD(var_r4, s32 *, 4));
        var_r4 = M2C_FIELD(var_r4, void **, 8);
    } while (var_r4 != NULL);
}

void PM_PrependPreSleepCallback(M2C_UNK arg0) {
    func_02016348(&data_0203a678, arg0);
}

void PM_AppendPostSleepCallback(M2C_UNK arg0) {
    PMi_AppendList(&data_0203a680, arg0);
}
