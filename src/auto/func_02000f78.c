#include "m2c.h"

M2C_UNK func_0200fddc();
s32 FS_UnloadOverlay(M2C_UNK, s32);
extern M2C_UNK data_02035880;

void func_02000f78(s32 arg0) {
    if (FS_UnloadOverlay(0, *((M2C_UNK *) ((s8 *) &data_02035880 + (arg0 * 4)))) != 0) {
        return;
    }
    func_0200fddc();
}
