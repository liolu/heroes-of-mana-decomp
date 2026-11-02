/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK FS_SeekFile(s32, s32, M2C_UNK);             /* extern */
M2C_UNK FS_WaitAsync(s32);                          /* extern */
s32 func_0201360c(s32, M2C_UNK, s32);               /* extern */

s32 func_ov110_020e26d8(void *arg0, M2C_UNK arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        FS_WaitAsync(M2C_FIELD(arg0, s32 *, 0xC));
        FS_SeekFile(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8), 0);
        M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    }
    if (func_0201360c(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2) == -1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
    return 1;
}
