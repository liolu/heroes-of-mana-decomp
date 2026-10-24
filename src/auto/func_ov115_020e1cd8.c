#include "m2c.h"
typedef struct F {
    u8 pad[0x24];
    s32 start;
    s32 end;
    u8 pad2[0x1c];
} F;
extern s32 data_ov115_020e8ce0;
extern s32 data_ov115_020e9160[];
void func_02013190(F *);
s32 FS_OpenFile(F *, s32);
void *func_0200ed38(u32, s32, s32);
void func_0201360c(F *, void *, s32);
void MI_UncompressLZ8(void *, void *);
void DC_FlushRange(void *, u32);
void MIi_CpuCopy16(void *, void *, s32);
void *func_0200aaa4(void);
void *func_0200aad8(void);
void *func_0200a840(void);
void *func_0200a80c(void);
void *G2S_GetBG2ScrPtr(void);
void *G2S_GetBG3ScrPtr(void);
void *G2_GetBG2ScrPtr(void);
void *G2_GetBG3ScrPtr(void);
void OS_FreeToHeap(u32, s32, void *);
void func_020134b8(F *);

void func_ov115_020e1cd8(void) {
    F f;
    s32 id;
    u32 *p4;
    u8 *p5;
    s32 sz;
    u32 usz;
    id = data_ov115_020e8ce0;
    func_02013190(&f);
    if (FS_OpenFile(&f, id) == 0) {
        return;
    }
    sz = f.end - f.start;
    p4 = func_0200ed38(0, -1, sz);
    if (p4 != NULL) {
        func_0201360c(&f, p4, sz);
        usz = *p4 >> 8;
        p5  = func_0200ed38(0, -1, usz);
        if (p5 != NULL) {
            MI_UncompressLZ8(p4, p5);
            DC_FlushRange(p5, usz);
            MIi_CpuCopy16(p5, (void *) 0x5000000, 0x200);
            MIi_CpuCopy16(p5, (void *) 0x5000400, 0x200);
            MIi_CpuCopy16(p5 + 0x200, (void *) 0x5000200, 0x200);
            MIi_CpuCopy16(p5 + 0x200, (void *) 0x5000600, 0x200);
            MIi_CpuCopy16(p5 + 0x400, func_0200aaa4(), 0x8000);
            MIi_CpuCopy16(p5 + 0x400, func_0200aad8(), 0x8000);
            MIi_CpuCopy16(p5 + 0x8400, (void *) 0x6400000, 0x8000);
            MIi_CpuCopy16(p5 + 0x8400, (void *) 0x6600000, 0x8000);
            MIi_CpuCopy16(p5 + 0x10400, func_0200a840(), 0x800);
            MIi_CpuCopy16(p5 + 0x10C00, G2S_GetBG2ScrPtr(), 0x800);
            MIi_CpuCopy16(p5 + 0x11400, G2S_GetBG3ScrPtr(), 0x800);
            MIi_CpuCopy16(p5 + 0x11C00, func_0200a80c(), 0x800);
            MIi_CpuCopy16(p5 + 0x12400, G2_GetBG2ScrPtr(), 0x800);
            MIi_CpuCopy16(p5 + 0x12C00, G2_GetBG3ScrPtr(), 0x800);
            MIi_CpuCopy16(p5 + 0x10C00, (u8 *) G2_GetBG2ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16(p5 + 0x11400, (u8 *) G2_GetBG3ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16(p5 + 0x12400, (u8 *) G2S_GetBG2ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16(p5 + 0x12C00, (u8 *) G2S_GetBG3ScrPtr() + 0x800, 0x800);
            MIi_CpuCopy16(p5 + 0x13400, (void *) data_ov115_020e9160[0x860 / 4], 0x800);
            MIi_CpuCopy16(p5 + 0x13C00, (void *) data_ov115_020e9160[0x864 / 4], 0x800);
            MIi_CpuCopy16(p5 + 0x14400, (void *) data_ov115_020e9160[0x868 / 4], 0x800);
            MIi_CpuCopy16(p5 + 0x11C00, (void *) data_ov115_020e9160[0x86C / 4], 0x800);
            MIi_CpuCopy16(p5 + 0x14C00, (void *) data_ov115_020e9160[0x870 / 4], 0x800);
            OS_FreeToHeap(0, -1, p5);
        }
        OS_FreeToHeap(0, -1, p4);
    }
    func_020134b8(&f);
}
