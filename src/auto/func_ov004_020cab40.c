#include "m2c.h"
typedef struct {
    u8 b[0x48];
} F;
typedef struct {
    u32 off;
    u32 size;
} Hdr;
typedef struct {
    s32 pad;
    s32 idx;
    u32 size;
    void *data;
} O;
extern char data_ov004_020cf824[];
extern char data_ov004_020cf83c[];
void func_02013190(F *);
void FS_OpenFile(F *, char *);
void FS_SeekFile(F *, s32, s32);
void func_0201360c(F *, void *, s32);
void func_020134b8(F *);
void *func_0202f470(u32);
s32 func_ov004_020cab40(O *o, s32 idx) {
    Hdr h;
    F f1;
    F f2;
    u32 off;
    u32 size;
    void *buf;
    o->idx = idx;
    func_02013190(&f1);
    FS_OpenFile(&f1, data_ov004_020cf824);
    FS_SeekFile(&f1, idx * 8, 0);
    func_0201360c(&f1, &h, 8);
    func_020134b8(&f1);
    size = h.size;
    off  = h.off;
    buf  = func_0202f470(size);
    func_02013190(&f2);
    FS_OpenFile(&f2, data_ov004_020cf83c);
    FS_SeekFile(&f2, off, 0);
    func_0201360c(&f2, buf, size);
    func_020134b8(&f2);
    o->data = buf;
    o->size = size;
    return 1;
}
