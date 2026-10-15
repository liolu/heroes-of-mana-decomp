/* compiler: 2.0/sp1p5  */
#include "m2c.h"

M2C_UNK OSi_DoUnlockByWord(M2C_UNK, s32, M2C_UNK *, M2C_UNK);

extern M2C_UNK OSi_FreeCartridgeBus;
extern void OS_UnlockCartridge();
// clang-format on
M2C_UNK OSi_DoTryLockByWord(M2C_UNK, s32, M2C_UNK *, M2C_UNK);

extern M2C_UNK OSi_AllocateCartridgeBus;

void OS_UnlockCartridge(M2C_UNK arg0) {
    OSi_DoUnlockByWord(arg0, 0x027FFFE8, &OSi_FreeCartridgeBus, 1);
}

/* func_02006744 from projets/blue-dragon-awakened-shadow/src/donor/func_02006744.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void OS_UnLockCartridge(void) {
    ldr r1, =OS_UnlockCartridge
    bx r1
}

void OS_TryLockCartridge(M2C_UNK arg0) {
    OSi_DoTryLockByWord(arg0, 0x027FFFE8, &OSi_AllocateCartridgeBus, 1);
}
