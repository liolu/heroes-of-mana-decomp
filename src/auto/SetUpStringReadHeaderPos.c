/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
} Q;
s32 FS_SeekFile(void *, s32, s32);
s32 GetFilePosForSkana(s32, Q *, s32 *);
void func_0200fddc(void);
s32 func_0201360c(void *, void *, s32);
extern u8 data_02036744[];
extern u8 *data_ov000_02051550;

void SetUpStringReadHeaderPos(void) {
    Q q;
    s32 out;
    s32 i;
    s32 off;
    s32 pos;
    i   = 0;
    off = 0;
    q.a = 4;
    q.b = 1;
    do {
        q.c                                        = i;
        pos                                        = GetFilePosForSkana(3, &q, &out);
        ((s32 *) (data_ov000_02051550 + 0x238))[i] = pos;
        if (FS_SeekFile(data_02036744, pos, 0) == 0) {
            func_0200fddc();
        }
        if (func_0201360c(data_02036744, data_ov000_02051550 + 0x278 + off, 0xc) == 0) {
            func_0200fddc();
        }
        i++;
        off += 0xc;
    } while (i < 0x10);
    q.a                                    = 4;
    q.b                                    = 0;
    q.c                                    = 0;
    pos                                    = GetFilePosForSkana(3, &q, &out);
    *(s32 *) (data_ov000_02051550 + 0x228) = pos;
    if (FS_SeekFile(data_02036744, pos, 0) == 0) {
        func_0200fddc();
    }
    if (func_0201360c(data_02036744, data_ov000_02051550 + 0x22c, 0xc) == 0) {
        func_0200fddc();
    }
}
