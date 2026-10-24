/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

typedef struct Fl {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 rest : 28;
} Fl;
typedef struct Obj {
    void *p0;
    void *p4;
    void *p8;
    void *pc;
    u8 pad[0x40];
    Fl f50;
} Obj;
typedef struct Sys {
    u8 pad[0x1444];
    Fl f1444;
    u8 mid2[0x40c];
    Fl f1854;
} Sys;
typedef struct Ctx {
    u8 pad[0xc];
    s32 name;
} Ctx;

extern Ctx data_ov119_020f1a00;
extern Sys *data_ov119_020f1e40;

void func_ov119_020e9ebc(Obj *);
void func_02013190(void *);
s32 FS_OpenFile(void *, s32);
void *func_0200ed38(u32, s32, s32);
void FS_SeekFile(void *, s32, s32);
void func_0201360c(void *, void *, s32);
void MI_UncompressLZ8(void *, void *);
void DC_FlushRange(void *, s32);
void VBlankIntrWaitInGame(void);
void MIi_CpuCopy16(void *, void *, s32);
void OS_FreeToHeap(u32, s32, void *);
s32 func_020134b8(void *);

void func_ov119_020eacec(s32 idx, Obj *obj) {
    u8 file[0x48];
    u32 off;
    s32 name;
    u32 *buf;
    u32 *out;
    u32 usz;
    u8 *p;
    u32 sz;
    u8 *q;
    void *vb;

    name = data_ov119_020f1a00.name;
    func_ov119_020e9ebc(obj);
    func_02013190(file);
    if (FS_OpenFile(file, name) == 0) {
        return;
    }
    buf = func_0200ed38(0, -1, 0x8000);
    if (buf != NULL) {
        FS_SeekFile(file, idx * 4, 0);
        func_0201360c(file, &off, 4);
        FS_SeekFile(file, off, 0);
        func_0201360c(file, buf, 0x8000);
        usz = *buf >> 8;
        out = func_0200ed38(0, -1, usz);
        if (out != NULL) {
            MI_UncompressLZ8(buf, out);
            DC_FlushRange(out, usz);
            VBlankIntrWaitInGame();
            p       = (u8 *) out + 4;
            sz      = *out;
            obj->p8 = func_0200ed38(0, -1, sz);
            MIi_CpuCopy16(p, obj->p8, sz);
            q       = p + sz;
            sz      = *(u32 *) (p + sz);
            p       = q + 4;
            obj->pc = func_0200ed38(0, -1, sz);
            MIi_CpuCopy16(p, obj->pc, sz);
            q       = p + sz;
            sz      = *(u32 *) (p + sz);
            p       = q + 4;
            obj->p0 = func_0200ed38(0, -1, sz);
            MIi_CpuCopy16(p, obj->p0, sz);
            q       = p + sz;
            sz      = *(u32 *) (p + sz);
            p       = q + 4;
            obj->p4 = func_0200ed38(0, -1, sz);
            MIi_CpuCopy16(p, obj->p4, sz);
            q  = p + sz;
            sz = *(u32 *) (p + sz);
            p  = q + 4;
            if (obj->f50.b3 == 1) {
                vb = (void *) 0x6600000;
                if (obj->f50.b1 == 0) {
                    MIi_CpuCopy16(p, (u8 *) vb, sz);
                } else {
                    MIi_CpuCopy16(p, (u8 *) vb + 0x4000, sz);
                }
            } else {
                vb = (void *) 0x6400000;
                if (obj->f50.b1 == 0) {
                    MIi_CpuCopy16(p, (u8 *) vb, sz);
                } else {
                    MIi_CpuCopy16(p, (u8 *) vb + 0x4000, sz);
                }
            }
            p += sz;
            sz = *(u32 *) p;
            if (obj->f50.b3 == 1) {
                if (obj->f50.b1 == 0) {
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1550, sz);
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1750, sz);
                } else {
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1590, sz);
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1790, sz);
                }
                data_ov119_020f1e40->f1854.b0 = 1;
            } else {
                if (obj->f50.b1 == 0) {
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1140, sz);
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1340, sz);
                } else {
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1180, sz);
                    MIi_CpuCopy16(p + 4, (u8 *) data_ov119_020f1e40 + 0x1380, sz);
                }
                data_ov119_020f1e40->f1444.b0 = 1;
            }
            obj->f50.b0 = 1;
            OS_FreeToHeap(0, -1, out);
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(file);
}
