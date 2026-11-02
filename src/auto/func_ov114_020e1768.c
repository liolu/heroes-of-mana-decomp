#include "m2c.h"

extern void *data_ov114_020e60c0;
extern u8 data_ov114_020e6148[];

void func_02013190(void *a);
s32 FS_OpenFile(void *a, void *b);
void *func_0200ed38(u32 a, s32 b, s32 c);
void func_0201360c(void *a, void *b, s32 c);
void MI_UncompressLZ8(void *a, void *b);
void DC_FlushRange(void *a, u32 b);
void MIi_CpuCopy16(void *src, void *dst, u32 n);
void *func_0200aaa4(void);
void *G2S_GetBG2CharPtr(void);
void *G2S_GetBG2ScrPtr(void);
void *G2S_GetBG3ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void *G2_GetBG3ScrPtr(void);
void *func_0200a80c(void);
void OS_FreeToHeap(u32 a, s32 b, void *c);
s32 func_020134b8(void *a);

void func_ov114_020e1768(void) {
    u8 fs[0x48];
    void *buf;
    void *dst;
    u32 size;
    u32 usize;
    void *path;

    path = data_ov114_020e60c0;
    func_02013190(fs);
    if (FS_OpenFile(fs, path) == 0) {
        return;
    }
    size = *(u32 *) (fs + 0x28) - *(u32 *) (fs + 0x24);
    buf  = func_0200ed38(0, -1, size);
    if (buf != NULL) {
        func_0201360c(fs, buf, size);
        usize = *(u32 *) buf >> 8;
        dst   = func_0200ed38(0, -1, usize);
        if (dst != NULL) {
            MI_UncompressLZ8(buf, dst);
            DC_FlushRange(dst, usize);
            MIi_CpuCopy16(dst, (void *) 0x5000000, 0x200);
            MIi_CpuCopy16(dst, (void *) 0x5000400, 0x200);
            MIi_CpuCopy16((u8 *) dst + 0x200, (void *) 0x5000200, 0x200);
            MIi_CpuCopy16((u8 *) dst + 0x200, (void *) 0x5000600, 0x200);
            MIi_CpuCopy16((u8 *) dst + 0x400, func_0200aaa4(), 0x8000);
            MIi_CpuCopy16((u8 *) dst + 0x400, G2S_GetBG2CharPtr(), 0x8000);
            MIi_CpuCopy16((u8 *) dst + 0x8400, (void *) 0x6400000, 0x8000);
            MIi_CpuCopy16((u8 *) dst + 0x8400, (void *) 0x6600000, 0x8000);
            MIi_CpuCopy16((u8 *) dst + 0x14C00, G2S_GetBG2ScrPtr(), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x12400, G2S_GetBG3ScrPtr(), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x14400, G2_GetBG2ScrPtr(), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x13C00, G2_GetBG3ScrPtr(), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x14C00, (u8 *) G2_GetBG2ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x12400, (u8 *) G2_GetBG3ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x14400, (u8 *) G2S_GetBG2ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x13C00, (u8 *) G2S_GetBG3ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x12C00, func_0200a80c(), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x12C00, *(void **) (data_ov114_020e6148 + 0x528), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x11C00, *(void **) (data_ov114_020e6148 + 0x52C), 0x800);
            MIi_CpuCopy16((u8 *) dst + 0x13400, *(void **) (data_ov114_020e6148 + 0x530), 0x800);
            OS_FreeToHeap(0, -1, dst);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(fs);
}
