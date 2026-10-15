#include "m2c.h"

extern s32 data_0203a700;
M2C_UNK func_0200fddc();

s32 CARD_IsEnabled();

s32 CARD_IsEnabled(void) {
    return data_0203a700;
}

void CARD_CheckEnabled(void) {
    if (CARD_IsEnabled() != 0) {
        return;
    }
    func_0200fddc();
}
