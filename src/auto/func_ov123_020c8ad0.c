#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} Pair;

typedef struct {
    u8 pad[0x24];
    s32 f24;
    u8 rest[0x48 - 0x28];
} File;

typedef struct {
    u8 pad0[0x4];
    u8 pad1[0x80];
    u8 arc[1];
} Dummy;

extern u8 *func_ov123_020ca4ec(s32, s32);
extern void func_02013190(File *);
extern s32 FS_OpenFile(File *, void *);
extern void func_0200fddc(void);
extern s16 func_0200cc18(void);
extern void func_0201360c(File *, Pair *, s32);
extern void func_020134b8(File *);
extern void FS_InitArchive(void *);
extern s32 FS_RegisterArchiveName(void *, void *, s32);
extern void FS_SetArchiveProc(void *, void *, s32);
extern s32 FS_LoadArchive(void *, s32, s32, s32, s32, s32, void *, void *);
extern s32 FS_LoadArchiveTables(void *, void *, s32);
extern void *func_ov123_020ca510(s32, s32);
extern s32 func_ov123_020c94ec(s32, void *, s32);
extern void OS_SPrintf(void *, void *, void *);
extern void func_02013688(void *);
extern u8 *data_ov123_020e4710;
extern u8 data_ov123_020de700[];
extern u8 data_ov123_020d8440[];
extern u8 data_ov123_020de718[];
extern u8 func_ov123_020c89cc[];
extern u8 func_ov123_020c8988[];
extern u8 func_ov123_020c8970[];

void func_ov123_020c8ad0(void) {
    u8 buf[0x80];
    File file;
    Pair p2;
    Pair p1;
    s32 r;
    s32 t;

    data_ov123_020e4710 = func_ov123_020ca4ec(0xE8, 4);
    func_02013190(&file);
    if (FS_OpenFile(&file, data_ov123_020de700) == 0) {
        func_0200fddc();
    }
    *(s16 *) (data_ov123_020e4710 + 0xE4) = func_0200cc18();
    t                                     = file.f24;
    func_0201360c(&file, &p1, 8);
    func_0201360c(&file, &p2, 8);
    func_020134b8(&file);
    FS_InitArchive(data_ov123_020e4710 + 0x88);
    if (FS_RegisterArchiveName(data_ov123_020e4710 + 0x88, data_ov123_020d8440, 3) == 0) {
        func_0200fddc();
    }
    FS_SetArchiveProc(data_ov123_020e4710 + 0x88, func_ov123_020c89cc, 0x602);
    if (FS_LoadArchive(data_ov123_020e4710 + 0x88, t, p2.x, p2.y, p1.x, p1.y, func_ov123_020c8988, func_ov123_020c8970) == 0) {
        func_0200fddc();
    }
    r                              = FS_LoadArchiveTables(data_ov123_020e4710 + 0x88, 0, 0);
    *(void **) data_ov123_020e4710 = func_ov123_020ca510(r, 4);
    FS_LoadArchiveTables(data_ov123_020e4710 + 0x88, *(void **) data_ov123_020e4710, r);
    *(s32 *) (data_ov123_020e4710 + 0x84) = func_ov123_020c94ec(0x20, data_ov123_020e4710 + 4, 4);
    OS_SPrintf(buf, data_ov123_020de718, data_ov123_020d8440);
    func_02013688(buf);
}
