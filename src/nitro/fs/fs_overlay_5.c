#include "m2c.h"

s32 func_02013b00(M2C_UNK *, M2C_UNK, M2C_UNK);

s32 FS_UnloadOverlayImage(M2C_UNK *);

s32 FS_UnloadOverlay(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((func_02013b00(sp0, arg0, arg1) == 0) || (FS_UnloadOverlayImage(sp0) == 0)) {
        return 0;
    }
    return 1;
}
