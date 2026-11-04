/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

typedef struct {
    u8 pad0[4];
    s32 name;
} G1T;
typedef struct {
    u8 pad0[4];
    u32 flags;
    u8 pad8[0x9c];
    s32 a4;
    s32 a8;
    s32 ac;
    s32 b0;
} G2T;
extern G1T data_ov122_02061cc0;
extern G2T data_ov122_02062b24;

void func_ov122_020527b0(void);
void func_02013190(void *);
void FS_OpenFile(void *, s32);
void FS_SeekFile(void *, s32, s32);
void func_0201360c(void *, void *, s32);
void func_020134b8(void *);
u32 *func_0200ed38(s32, s32, s32);
void MI_UncompressLZ8(void *, void *);
void DC_FlushRange(void *, u32);
void VBlankIntrWaitInGame(void);
void MIi_CpuCopy16(void *, void *, u32);
void OS_FreeToHeap(s32, s32, void *);

void func_ov122_020533d0(s32 idx) {
    u32 len;
    u8 fs[0x48];
    s32 name = data_ov122_02061cc0.name;
    u32 *buf;
    u32 *dec;
    u32 sz;
    u8 *p;
    u32 n;
    void *d;

    func_ov122_020527b0();
    func_02013190(fs);
    FS_OpenFile(fs, name);
    buf = func_0200ed38(0, -1, 0x4000);
    if (buf != 0) {
        FS_SeekFile(fs, idx * 4, 0);
        func_0201360c(fs, &len, 4);
        FS_SeekFile(fs, len, 0);
        func_0201360c(fs, buf, 0x4000);
        sz  = *buf >> 8;
        dec = func_0200ed38(0, -1, sz);
        if (dec != 0) {
            MI_UncompressLZ8(buf, dec);
            DC_FlushRange(dec, sz);
            VBlankIntrWaitInGame();
            n                      = *dec;
            p                      = (u8 *) dec + 4;
            d                      = func_0200ed38(0, -1, n);
            data_ov122_02062b24.ac = (s32) d;
            MIi_CpuCopy16(p, d, n);
            p += n;
            n = *(u32 *) p;
            p += 4;
            d                      = func_0200ed38(0, -1, n);
            data_ov122_02062b24.b0 = (s32) d;
            MIi_CpuCopy16(p, d, n);
            p += n;
            n = *(u32 *) p;
            p += 4;
            d                      = func_0200ed38(0, -1, n);
            data_ov122_02062b24.a4 = (s32) d;
            MIi_CpuCopy16(p, d, n);
            p += n;
            n = *(u32 *) p;
            p += 4;
            d                      = func_0200ed38(0, -1, n);
            data_ov122_02062b24.a8 = (s32) d;
            MIi_CpuCopy16(p, d, n);
            p += n;
            n = *(u32 *) p;
            p += 4;
            {
                u8 *v = (u8 *) 0x6400000;
                v += 0x3540;
                v += 0x8000;
                MIi_CpuCopy16(p, v, n);
            }
            p += n;
            n = *(u32 *) p;
            p += 4;
            MIi_CpuCopy16(p, (void *) 0x5000340, n);
            data_ov122_02062b24.flags |= 0x20000;
            OS_FreeToHeap(0, -1, dec);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(fs);
}