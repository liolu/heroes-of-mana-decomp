/* near start: 32 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct FSFile {
    u8 pad[0x24];
    u32 a;
    u32 b;
    u8 pad2[0x1c];
} FSFile;
typedef struct Dst {
    u8 pad[0x80];
    void *p80;
    void *p84;
    void *p88;
    void *p8c;
    u32 f90;
} Dst;

extern struct {
    u32 pad[3];
    s32 file;
} data_ov117_020efbb0;
extern Dst data_ov117_020f0f30;

void func_ov117_020e3720(void);
void func_02013190(FSFile *);
void FS_OpenFile(FSFile *, s32);
void *func_0200ed38(u32, s32, s32);
void DC_FlushRange(void *, s32);
void FS_SeekFile(FSFile *, s32, s32);
void func_0201360c(FSFile *, void *, s32);
void MIi_CpuCopy16(void *, s32, s32);
void OS_FreeToHeap(u32, s32, void *);
void func_020134b8(FSFile *);

void func_ov117_020e225c(s32 arg) {
    u32 off;
    u32 size;
    FSFile f;
    s32 len;
    void *buf;

    len = data_ov117_020efbb0.file;
    func_ov117_020e3720();
    func_02013190(&f);
    FS_OpenFile(&f, len);
    len = f.b - f.a;
    buf = func_0200ed38(0, -1, 0x10000);
    DC_FlushRange(buf, len);
    FS_SeekFile(&f, arg * 4, 0);
    func_0201360c(&f, &off, 4);
    FS_SeekFile(&f, off, 0);
    func_0201360c(&f, &size, 4);
    data_ov117_020f0f30.p88 = func_0200ed38(0, -1, size);
    func_0201360c(&f, data_ov117_020f0f30.p88, size);
    func_0201360c(&f, &size, 4);
    data_ov117_020f0f30.p8c = func_0200ed38(0, -1, size);
    func_0201360c(&f, data_ov117_020f0f30.p8c, size);
    func_0201360c(&f, &size, 4);
    data_ov117_020f0f30.p80 = func_0200ed38(0, -1, size);
    func_0201360c(&f, data_ov117_020f0f30.p80, size);
    func_0201360c(&f, &size, 4);
    data_ov117_020f0f30.p84 = func_0200ed38(0, -1, size);
    func_0201360c(&f, data_ov117_020f0f30.p84, size);
    func_0201360c(&f, &size, 4);
    func_0201360c(&f, buf, size);
    {
        u8 *vr = (u8 *) 0x6600000;
        MIi_CpuCopy16(buf, (s32) (vr + 0xae00), size);
    }
    func_0201360c(&f, &size, 4);
    func_0201360c(&f, buf, size);
    MIi_CpuCopy16(buf, 0x5000760, size);
    OS_FreeToHeap(0, -1, buf);
    func_020134b8(&f);
    data_ov117_020f0f30.f90 |= 2;
}
