typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef struct {
    u8 d[0x48];
} FSFile;
void DC_FlushRange(void *, u32);
void FS_OpenFile(FSFile *, s32);
void FS_SeekFile(FSFile *, u32, s32);
void GX_SetBankForSubOBJExtPltt(s32);
void MI_UncompressLZ8(void *, void *);
void MIi_CpuCopyFast(void *, u32, u32);
void OS_FreeToHeap(s32, s32, void *);
void VBlankIntrWaitInGame(void);
s32 func_0200a564(void);
void *func_0200ed38(s32, s32, u32);
void func_02013190(FSFile *);
void func_020134b8(FSFile *);
void func_0201360c(FSFile *, void *, u32);
extern s32 data_ov112_020ec524[];
void func_ov112_020ea958(s32 idx) {
    FSFile file;
    u32 off;
    s32 t;
    u32 *buf;
    u8 *buf2;
    u32 size;
    u8 *d;
    t = data_ov112_020ec524[2];
    if (idx == 0x3C) {
        idx = 0;
    } else {
        idx = idx - 1;
    }
    func_02013190(&file);
    FS_OpenFile(&file, t);
    buf = func_0200ed38(0, -1, 0x6200);
    if (buf != 0) {
        FS_SeekFile(&file, idx * 4, 0);
        func_0201360c(&file, &off, 4);
        FS_SeekFile(&file, off, 0);
        func_0201360c(&file, buf, 0x6200);
        size = *buf >> 8;
        buf2 = func_0200ed38(0, -1, size);
        if (buf2 != 0) {
            MI_UncompressLZ8(buf, buf2);
            DC_FlushRange(buf2, size);
            VBlankIntrWaitInGame();
            t = func_0200a564();
            MIi_CpuCopyFast(buf2, 0x068A0000, 0x200);
            GX_SetBankForSubOBJExtPltt(t);
            d = (u8 *) 0x06600000;
            d += 0x880;
            d += 0x8000;
            MIi_CpuCopyFast(buf2 + 0x200, (u32) d, 0x6000);
            OS_FreeToHeap(0, -1, buf2);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(&file);
}
