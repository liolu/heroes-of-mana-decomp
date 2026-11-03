/* near start: 3 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

extern s32 data_ov111_020ebfa0;
extern u8 data_ov111_020f13c0[];
extern void func_02013190(void *fs);
extern s32 FS_OpenFile(void *fs, s32 id);
extern void FS_SeekFile(void *fs, u32 pos, s32 mode);
extern u32 *func_0200ed38(s32 heap, s32 size, u32 align);
extern s32 func_0201360c(void *fs, void *dst, u32 n);
extern void func_020134b8(void *fs);
extern void MI_UncompressLZ8(u32 *src, u32 *dst);
extern void DC_FlushRange(u32 *p, u32 n);
extern void OS_FreeToHeap(s32 heap, s32 unused, u32 *p);

typedef struct {
    u32 pos;
    u8 fs[0x44];
    u32 pad;
} Loc;

void func_ov111_020e4784(s32 idx) {
    Loc L;
    u32 *buf;
    u32 size;
    u32 *tmp;
    s32 id;

    id = data_ov111_020ebfa0;
    func_02013190(L.fs);
    if (FS_OpenFile(L.fs, id) == 0) {
        return;
    }
    buf = func_0200ed38(0, -1, 0x8000);
    if (buf != NULL) {
        FS_SeekFile(L.fs, idx << 2, 0);
        func_0201360c(L.fs, &L.pos, 4);
        FS_SeekFile(L.fs, L.pos, 0);
        func_0201360c(L.fs, buf, 0x8000);
        size                                    = buf[0] >> 8;
        tmp                                     = func_0200ed38(0, -1, size);
        *(u32 **) (data_ov111_020f13c0 + 0x808) = tmp;
        if (tmp != NULL) {
            MI_UncompressLZ8(buf, tmp);
            DC_FlushRange(*(u32 **) (data_ov111_020f13c0 + 0x808), size);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(L.fs);
}
