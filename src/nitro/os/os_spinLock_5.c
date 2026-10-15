#include "m2c.h"

M2C_UNK func_0200ca2c(M2C_UNK, s32, M2C_UNK *);

extern M2C_UNK func_0200cbe0;
M2C_UNK OS_UnlockByWord(M2C_UNK, s32, M2C_UNK *);

extern M2C_UNK OSi_FreeCardBus;

void OSi_AllocateCartridgeBus(void) {
    *(u16 *) 0x04000204 &= ~0x80;
}

void OSi_FreeCartridgeBus(void) {
    *(u16 *) 0x04000204 |= 0x80;
}

void OS_LockCard(M2C_UNK arg0) {
    func_0200ca2c(arg0, 0x027FFFE0, &func_0200cbe0);
}

void OS_UnlockCard(M2C_UNK arg0) {
    OS_UnlockByWord(arg0, 0x027FFFE0, &OSi_FreeCardBus);
}
