#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} ID;
typedef struct {
    u8 pad0[0x30];
    s32 f30;
    u8 file[0x34 - 0x30 - 4 + 0x48];
    ID id;
    s32 f84;
    s32 f88;
    s32 f8c;
} O;
typedef struct {
    s32 a;
    s32 b;
} P;
extern void *sCurrent;
s32 FS_ConvertPathToFileID(void *p, s32 path);
void func_02013190(void *p);
s32 FS_OpenFileFast(void *file, ID id);
s32 func_02005314(void *o, s32 a, s32 b);
s32 func_02005500(O *o, s32 path, s32 a, s32 b) {
    s32 r;
    o->f8c = 0;
    o->f84 = 0;
    o->f88 = 0;
    if (FS_ConvertPathToFileID(&o->id, path) == 0) {
        return 0;
    }
    func_02013190((u8 *) o + 0x34);
    if (FS_OpenFileFast((u8 *) o + 0x34, o->id) == 0) {
        return 0;
    }
    o->f30 = 1;
    if (func_02005314(o, a, b) == 0) {
        r = 0;
    } else {
        sCurrent = o;
        r        = 1;
    }
    return r;
}
