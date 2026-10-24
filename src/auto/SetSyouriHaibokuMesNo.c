/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 FS_SeekFile(void *, s32, s32);
extern s32 GetFilePosForSkana(s32, s32 *, s32 *);
extern void func_0200fddc(void);
extern s32 func_0201360c(void *, void *, s32);
extern u8 data_02036744[];

void SetSyouriHaibokuMesNo(s32 arg0, u32 arg1, s32 *arg2) {
    struct {
        s32 hdr[2];
        s32 res;
        s32 prm[3];
        s32 pad;
    } L;
    s32 pos;

    L.prm[0] = 5;
    L.prm[1] = 2;
    L.prm[2] = arg0 + 0xA;
    pos      = GetFilePosForSkana(3, L.prm, &L.res);
    if (FS_SeekFile(data_02036744, pos, 0) == 0) {
        func_0200fddc();
    }
    if (func_0201360c(data_02036744, L.hdr, 8) == 0) {
        func_0200fddc();
    }
    if (arg1 >= L.hdr[1]) {
        arg1 = 0;
    }
    if (FS_SeekFile(data_02036744, pos + (arg1 * 4) + 8, 0) == 0) {
        func_0200fddc();
    }
    if (func_0201360c(data_02036744, arg2, 4) == 0) {
        func_0200fddc();
    }
}
