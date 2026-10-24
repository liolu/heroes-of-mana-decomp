/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 pad28[0x34 - 0x28];
    u8 file[0x84 - 0x34];
    void *volatile p84;
    void *volatile p88;
    void *volatile p8c;
} SndData;

extern u8 func_02004e30[];
extern u8 func_02004e24[];
extern u8 func_02004e18[];

s32 FS_SeekFile(void *, s32, s32);
s32 func_0201360c(void *, void *, s32);
void *NNS_SndHeapAlloc(void *, s32, void *, void *, s32);

s32 func_02005314(SndData *arg0, void *arg1, s32 arg2) {
    s32 t;

    if (FS_SeekFile(arg0->file, 0, 0) == 0) {
        return 0;
    }
    if (func_0201360c(arg0->file, arg0, 0x30) != 0x30) {
        return 0;
    }
    if (arg1 != 0) {
        arg0->p8c = NNS_SndHeapAlloc(arg1, arg0->f1c, func_02004e30, arg0, 0);
        if (arg0->p8c == 0) {
            return 0;
        }
        if (FS_SeekFile(arg0->file, arg0->f18, 0) == 0) {
            return 0;
        }
        t = func_0201360c(arg0->file, arg0->p8c, arg0->f1c);
        if (t != arg0->f1c) {
            return 0;
        }
        arg0->p84 = NNS_SndHeapAlloc(arg1, arg0->f24, func_02004e24, arg0, 0);
        if (arg0->p84 == 0) {
            return 0;
        }
        if (FS_SeekFile(arg0->file, arg0->f20, 0) == 0) {
            return 0;
        }
        t = func_0201360c(arg0->file, arg0->p84, arg0->f24);
        if (t != arg0->f24) {
            return 0;
        }
        if (arg2 != 0 && arg0->f14 != 0) {
            arg0->p88 = NNS_SndHeapAlloc(arg1, arg0->f14, func_02004e18, arg0, 0);
            if (arg0->p88 == 0) {
                return 0;
            }
            if (FS_SeekFile(arg0->file, arg0->f10, 0) == 0) {
                return 0;
            }
            t = func_0201360c(arg0->file, arg0->p88, arg0->f14);
            if (t != arg0->f14) {
                return 0;
            }
        }
    }
    return 1;
}
