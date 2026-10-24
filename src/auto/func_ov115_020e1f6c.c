#include "m2c.h"

typedef struct {
    u8 b[0x48];
} Fs;

extern s32 func_0200a840(void);
extern void MIi_CpuClear16(s32, s32, s32);
extern void func_02013190(Fs *);
extern void FS_OpenFile(Fs *, s32);
extern void *func_0200ed38(s32, s32, s32);
extern void FS_SeekFile(Fs *, s32, s32);
extern void func_0201360c(Fs *, void *, s32);
extern void MI_UncompressLZ8(void *, void *);
extern void DC_FlushRange(void *, s32);
extern void VBlankIntrWaitInGame(void);
extern void MIi_CpuCopy16(void *, s32, s32);
extern s32 func_0200aad8(void);
extern void OS_FreeToHeap(s32, s32, void *);
extern void func_020134b8(Fs *);
extern struct {
    s32 a;
    s32 name;
} data_ov115_020e8ce0;

void func_ov115_020e1f6c(s32 n) {
    u32 off;
    Fs f;
    s32 name;
    u8 *buf;
    u8 *out;
    u32 size;
    u16 *src;
    s32 i;
    u16 *dst;
    s32 j;

    name = data_ov115_020e8ce0.name;
    if (n == -1) {
        dst = (u16 *) (func_0200a840() + 0x42 + 0x100);
        for (i = 0; i < 17; i++) {
            MIi_CpuClear16(0x37, (s32) dst, 0x36);
            dst += 0x20;
        }
        return;
    }
    if (n != 0) {
        n--;
    }
    n = n / 2;
    if (n >= 100) {
        n -= 100;
    }
    func_02013190(&f);
    FS_OpenFile(&f, name);
    buf = func_0200ed38(0, -1, 0x5020);
    if (buf != 0) {
        FS_SeekFile(&f, n * 4, 0);
        func_0201360c(&f, &off, 4);
        FS_SeekFile(&f, off, 0);
        func_0201360c(&f, buf, 0x5020);
        size = *(u32 *) buf >> 8;
        out  = func_0200ed38(0, -1, size);
        if (out != 0) {
            MI_UncompressLZ8(buf, out);
            DC_FlushRange(out, size);
            VBlankIntrWaitInGame();
            MIi_CpuCopy16(out, 0x050005C0, 0x20);
            MIi_CpuCopy16(out + 0x20, func_0200aad8() + 0x3800, 0x4800);
            src = (u16 *) (out + 0x820 + 0x4000);
            dst = (u16 *) (func_0200a840() + 0x42 + 0x100);
            for (i = 0; i < 17; i++) {
                for (j = 0; j < 27; j++) {
                    dst[j] = src[j] + 0x1C0;
                }
                dst += 0x20;
                src += 0x20;
            }
            OS_FreeToHeap(0, -1, out);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(&f);
}
