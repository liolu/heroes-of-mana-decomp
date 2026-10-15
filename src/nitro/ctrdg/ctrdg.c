#include "m2c.h"

s32 CTRDGi_IsAgbCartridgeAtInit();

s32 func_0201fd9c();

s32 CTRDG_IsOptionCartridge(void) {
    if ((func_0201fd9c() != 0) && (CTRDGi_IsAgbCartridgeAtInit() == 0)) {
        return 1;
    }
    return 0;
}
