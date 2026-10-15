#include "m2c.h"

M2C_UNK FS_EndOverlay();

s32 FS_UnloadOverlayImage(void) {
    FS_EndOverlay();
    return 1;
}
