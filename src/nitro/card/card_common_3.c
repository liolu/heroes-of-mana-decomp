#include "m2c.h"

extern s32 *cardi_common;
M2C_UNK OS_LockCard(M2C_UNK);

M2C_UNK CARDi_LockResource(M2C_UNK, M2C_UNK);
M2C_UNK OS_UnlockCard();

M2C_UNK CARDi_UnlockResource(M2C_UNK, M2C_UNK);

s32 CARD_GetResultCode(void) {
    return *cardi_common;
}

void CARD_LockRom(M2C_UNK arg0) {
    CARDi_LockResource(arg0, 1);
    OS_LockCard(arg0);
}

void CARD_UnlockRom(M2C_UNK arg0) {
    OS_UnlockCard();
    CARDi_UnlockResource(arg0, 1);
}

void CARD_LockBackup(M2C_UNK arg0) {
    CARDi_LockResource(arg0, 2);
}

void CARD_UnlockBackup(M2C_UNK arg0) {
    CARDi_UnlockResource(arg0, 2);
}
