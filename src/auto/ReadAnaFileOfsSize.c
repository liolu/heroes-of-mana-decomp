/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 FS_SeekFile(void *, s32, s32);
void func_0200fddc(void);
s32 func_0201360c(void *, s32, s32);
extern u8 data_02036744;

s32 ReadAnaFileOfsSize(s32 ofs, s32 buf, s32 size) {
    s32 r;
    if (FS_SeekFile(&data_02036744, ofs, 0) == 0) {
        func_0200fddc();
        r = 0;
    } else if (func_0201360c(&data_02036744, buf, size) != -1) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
