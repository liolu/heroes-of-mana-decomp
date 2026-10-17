/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 FS_ReadFileAsync(s32, M2C_UNK, s32);            /* extern */
M2C_UNK FS_SeekFile(s32, s32, M2C_UNK);             /* extern */

s32 func_ov110_020e2654(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r4;

    temp_r3 = M2C_FIELD(arg0, s32 *, 8);
    temp_r1 = temp_r3 & ~0x1FF;
    temp_r5 = temp_r3 - temp_r1;
    var_r4  = arg2 + temp_r5;
    if (var_r4 & 0x1FF) {
        var_r4 = (var_r4 & ~0x1FF) + 0x200;
    }
    FS_SeekFile(M2C_FIELD(arg0, s32 *, 0xC), temp_r1, 0);
    if (FS_ReadFileAsync(M2C_FIELD(arg0, s32 *, 0xC), arg1, var_r4) == -1) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 8) + arg2);
    M2C_FIELD(arg0, s8 *, 0x10) = 1;
    return temp_r5;
}
