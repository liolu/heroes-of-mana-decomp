#include "m2c.h"

typedef struct FileInfo {
    u8 d[0x48];
} FileInfo;
typedef struct Tbl {
    u32 a;
    void *name;
} Tbl;
extern Tbl data_ov117_020efbb0;
extern u8 *data_ov117_020f23e0[];
s32 func_0200a840(void);
s32 func_0200aad8(void);
void MIi_CpuClear16(s16, s32, s32);
void MIi_CpuCopy16(s32, s32, s32);
void func_02013190(void *);
void *func_0200ed38(u32, s32, s32);
void func_0201360c(void *, void *, s32);
void FS_OpenFile(void *, void *);
void FS_SeekFile(void *, s32, s32);
void VBlankIntrWaitInGame(void);
void OS_FreeToHeap(u32, s32, void *);
void func_020134b8(void *);
void MI_UncompressLZ8(void *, void *);
void DC_FlushRange(void *, s32);

void func_ov117_020e1e54(s32 arg) {
    FileInfo fi;
    u32 size;
    u32 *buf;
    u8 *dec;
    u8 *src;
    s32 i, j;
    u16 *dst;
    u32 sz;
    void *name = data_ov117_020efbb0.name;
    if (arg == -1) {
        dst = (u16 *) (func_0200a840() + 0x42 + 0x100);
        for (i = 0; i < 17; i++) {
            MIi_CpuClear16(0x37, (s32) dst, 0x36);
            dst += 32;
        }
        return;
    }
    if (arg >= 100) {
        arg -= 100;
    }
    if (arg != 0) {
        arg -= 1;
    }
    func_02013190(&fi);
    FS_OpenFile(&fi, name);
    buf = func_0200ed38(0, -1, 0x5020);
    if (buf == 0) {
        goto end;
    }
    FS_SeekFile(&fi, arg * 4, 0);
    func_0201360c(&fi, &size, 4);
    FS_SeekFile(&fi, size, 0);
    func_0201360c(&fi, buf, 0x5020);
    sz  = *buf >> 8;
    dec = func_0200ed38(0, -1, sz);
    if (dec != 0) {
        MI_UncompressLZ8(buf, dec);
        DC_FlushRange(dec, sz);
        VBlankIntrWaitInGame();
        *(volatile u16 *) 0x400100a = (*(volatile u16 *) 0x400100a & 0x43) | 0x20c;
        MIi_CpuCopy16((s32) data_ov117_020f23e0[0xa94 / 4], func_0200a840(), 0x800);
        MIi_CpuCopy16((s32) dec, 0x50005c0, 0x20);
        MIi_CpuCopy16((s32) (dec + 0x20), func_0200aad8() + 0x3000, 0x4800);
        src = dec + 0x820 + 0x4000;
        dst = (u16 *) (func_0200a840() + 0x42 + 0x100);
        for (i = 0; i < 17; i++) {
            for (j = 0; j < 27; j++) {
                dst[j] = ((u16 *) src)[j] + 0x180;
            }
            dst += 32;
            src += 0x40;
        }
        OS_FreeToHeap(0, -1, dec);
    }
    OS_FreeToHeap(0, -1, buf);
end:
    func_020134b8(&fi);
}
