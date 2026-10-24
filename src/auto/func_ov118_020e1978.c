/* near start: 19 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct {
    u8 p[0x24];
    u32 start;
    u32 end;
    u8 q[0x1c];
} FileInfo;
typedef struct {
    s32 a;
    s32 file;
} G;
extern G data_ov118_020e30a0;
extern void func_02013190(FileInfo *);
extern s32 FS_OpenFile(FileInfo *, s32);
extern u8 *func_0200ed38(s32, s32, u32);
extern s32 func_0201360c(FileInfo *, u8 *, u32);
extern void DC_FlushRange(void *, s32);
extern void MI_UncompressLZ8(u8 *, u8 *);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void *G2S_GetBG3CharPtr(void);
extern void *G2S_GetBG3ScrPtr(void);
extern void *func_0200aad8(void);
extern void *func_0200a840(void);
extern void OS_FreeToHeap(s32, s32, void *);
extern void func_020134b8(FileInfo *);

void func_ov118_020e1978(s32 sel) {
    FileInfo fi;
    u8 *dst;
    u8 *src;
    u32 size = data_ov118_020e30a0.file;
    u32 usize;
    func_02013190(&fi);
    if (FS_OpenFile(&fi, size) == 0) {
        return;
    }
    size = fi.end - fi.start;
    src  = func_0200ed38(0, -1, size);
    if (src != 0) {
        DC_FlushRange(src, func_0201360c(&fi, src, size));
        usize = *(u32 *) src >> 8;
        dst   = func_0200ed38(0, -1, usize);
        if (dst != 0) {
            MI_UncompressLZ8(src, dst);
            DC_FlushRange(dst, usize);
            MIi_CpuCopy16(dst, (void *) 0x05000400, 0x200);
            MIi_CpuCopy16(dst + 0x400, G2S_GetBG3CharPtr(), 0x8000);
            MIi_CpuCopy16(dst + 0x10400, G2S_GetBG3ScrPtr(), 0x800);
            MIi_CpuCopy16(dst + 0x10c00, func_0200aad8(), 0x1000);
            if (sel == 0) {
                MIi_CpuCopy16(dst + 0x11c00, func_0200a840(), 0x800);
            } else {
                MIi_CpuCopy16(dst + 0x12400, func_0200a840(), 0x800);
            }
            OS_FreeToHeap(0, -1, dst);
        }
        OS_FreeToHeap(0, -1, src);
    }
    func_020134b8(&fi);
}
