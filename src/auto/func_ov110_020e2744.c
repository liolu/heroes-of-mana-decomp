/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 FS_SeekFile(s32, s32, M2C_UNK);                 /* extern */
M2C_UNK FS_WaitAsync(s32);                          /* extern */

s32 func_ov110_020e2744(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        FS_WaitAsync(M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    }
    if (FS_SeekFile(M2C_FIELD(arg0, s32 *, 0xC), arg1, 0) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return 1;
}
