/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 FS_SeekFile(M2C_UNK *, s32, M2C_UNK);           /* extern */
s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0200fddc();                            /* extern */
s32 func_0201360c(M2C_UNK *, s32, M2C_UNK);         /* extern */
extern M2C_UNK data_02036744;
extern M2C_UNK data_ov000_020513e8;

s32 ReadOneFontData(void *arg0, void *arg1, s32 arg5) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = arg0;
    temp_r5 = arg1;
    temp_r4 = func_0200ed38(0, -1, 0x80);
    if (FS_SeekFile(&data_02036744, temp_r5 + (temp_r6 << 7), 0) == 0) {
        func_0200fddc();
    }
    if (func_0201360c(&data_02036744, temp_r4, 0x80) == 0) {
        func_0200fddc();
    }
    return temp_r4;
}
