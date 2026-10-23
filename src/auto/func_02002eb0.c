#include "m2c.h"
extern u8 data_02036744;
u32 *func_0200ed38(u32, s32, s32);
void func_0200fddc(void);
s32 FS_SeekFile(void *, s32, s32);
void func_0201360c(void *, void *, s32);
void OS_FreeToHeap(u32, s32, void *);
u32 func_02002eb0(s32 n, u32 *p, s32 *out) {
    s32 cnt, i;
    u32 *buf;
    u32 off;
    buf = func_0200ed38(0, -1, 0x10);
    if (FS_SeekFile(&data_02036744, (*p++) * 4 + 4, 0) == 0) {
        func_0200fddc();
    }
    func_0201360c(&data_02036744, buf, 8);
    *out = buf[1] - buf[0];
    cnt  = n - 1;
    off  = buf[0];
    i    = 0;
    if (cnt > 0) {
        do {
            if (FS_SeekFile(&data_02036744, off, 0) == 0) {
                func_0200fddc();
            }
            func_0201360c(&data_02036744, buf, 4);
            if (buf[0] <= *p) {
                *p = 0;
            }
            if (FS_SeekFile(&data_02036744, off + ((*p++) * 4 + 4), 0) == 0) {
                func_0200fddc();
            }
            func_0201360c(&data_02036744, buf, 8);
            *out = buf[1] - buf[0];
            i++;
            off = buf[0];
        } while (i < cnt);
    }
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    return off;
}
