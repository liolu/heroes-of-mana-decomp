#include "m2c.h"

extern u8 *data_ov119_020f1a00;
extern u8 data_ov119_020f2750[];

void func_02013190(void *f);
s32 FS_OpenFile(void *f, u8 *name);
void FS_SeekFile(void *f, s32 pos, s32 whence);
void func_0201360c(void *f, void *buf, s32 n);
void *func_0200ed38(u32 a, s32 b, s32 c);
void MI_UncompressLZ8(void *src, void *dst);
void DC_FlushRange(void *p, s32 n);
void OS_FreeToHeap(u32 a, s32 b, void *p);
s32 func_020134b8(void *f);

void func_ov119_020eb07c(s32 arg0) {
    u32 tmp;
    u8 file[0x48];
    u8 *name;
    u8 *p;
    u8 *q;
    u32 sz;

    name = data_ov119_020f1a00;
    func_02013190(file);
    if (FS_OpenFile(file, name) == 0) {
        return;
    }
    p = func_0200ed38(0, -1, 0x8000);
    if (p != NULL) {
        FS_SeekFile(file, arg0 << 2, 0);
        func_0201360c(file, &tmp, 4);
        FS_SeekFile(file, tmp, 0);
        func_0201360c(file, p, 0x8000);
        sz                                     = *(u32 *) p >> 8;
        q                                      = func_0200ed38(0, -1, sz);
        *(u8 **) (data_ov119_020f2750 + 0x808) = q;
        if (q != NULL) {
            MI_UncompressLZ8(p, q);
            DC_FlushRange(*(u8 **) (data_ov119_020f2750 + 0x808), sz);
        }
        OS_FreeToHeap(0, -1, p);
    }
    func_020134b8(file);
}
