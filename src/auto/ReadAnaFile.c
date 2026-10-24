/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_02036744;
s32 GetFilePosForSkana(void);
s32 FS_SeekFile(void *, s32, s32);
void func_0200fddc(void);
void *func_0200ed38(u32, s32, s32);
void func_0201360c(void *, void *, s32);
void *ReadAnaFile(s32 a, s32 b, s32 *size) {
    s32 pos = GetFilePosForSkana();
    void *buf;
    if (*size == 0) {
        return 0;
    }
    if (FS_SeekFile(&data_02036744, pos, 0) == 0) {
        func_0200fddc();
    }
    buf = func_0200ed38(0, -1, *size);
    func_0201360c(&data_02036744, buf, *size);
    return buf;
}
