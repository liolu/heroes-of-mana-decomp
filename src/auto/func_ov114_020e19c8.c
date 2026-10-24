#include "m2c.h"

typedef struct {
    u32 p0;
    char *name;
} Glob;

extern Glob data_ov114_020e60c0;
extern void *data_ov114_020e6148[];

u8 *func_0200aad8(void);
u8 *func_0200a840(void);
void MIi_CpuClear32(s32, void *, s32);
void MIi_CpuCopy16(void *, void *, s32);
void func_02013190(void *);
void FS_OpenFile(void *, char *);
void *func_0200ed38(s32, s32, s32);
void FS_SeekFile(void *, s32, s32);
void func_0201360c(void *, void *, s32);
void MI_UncompressLZ8(void *, void *);
void DC_FlushRange(void *, s32);
void VBlankIntrWaitInGame(void);
void OS_FreeToHeap(s32, s32, void *);
void func_020134b8(void *);

void func_ov114_020e19c8(s32 n) {
    u8 file[0x48];
    u32 off;
    u8 *a;
    u8 *b;
    u32 size;
    u16 *dst;
    u16 *src;
    s32 row;
    s32 col;
    char *name;

    name = data_ov114_020e60c0.name;
    if (n == -1) {
        MIi_CpuClear32(0, func_0200aad8(), 0x20);
        MIi_CpuClear32(0, func_0200a840(), 0x800);
        return;
    }
    if (n >= 0x64) {
        n -= 0x64;
    }
    if (n != 0) {
        n -= 1;
    }
    func_02013190(file);
    FS_OpenFile(file, name);
    a = func_0200ed38(0, -1, 0x5020);
    if (a != 0) {
        FS_SeekFile(file, (n / 2) * 4, 0);
        func_0201360c(file, &off, 4);
        FS_SeekFile(file, off, 0);
        func_0201360c(file, a, 0x5020);
        size = *(u32 *) a >> 8;
        b    = func_0200ed38(0, -1, size);
        if (b != 0) {
            MI_UncompressLZ8(a, b);
            DC_FlushRange(b, size);
            VBlankIntrWaitInGame();
            MIi_CpuCopy16(b, (void *) 0x050005C0, 0x20);
            MIi_CpuCopy16(b + 0x20, func_0200aad8() + 0x3800, 0x4800);
            src = (u16 *) (b + 0x820 + 0x4000);
            dst = (u16 *) (func_0200a840() + 0x42 + 0x100);
            MIi_CpuCopy16(data_ov114_020e6148[0x52C / 4], func_0200a840(), 0x800);
            for (row = 0; row < 0x11; row++) {
                for (col = 0; col < 0x1B; col++) {
                    dst[col] = src[col] + 0x1C0;
                }
                dst += 0x20;
                src += 0x20;
            }
            OS_FreeToHeap(0, -1, b);
        }
        OS_FreeToHeap(0, -1, a);
    }
    func_020134b8(file);
}
