/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b : 2;
    u32 c : 6;
} Ent;
typedef struct {
    u8 pad[0x28];
    u8 *tbl;
} G0;
typedef struct {
    u8 pad[0x100];
    void *p[4];
} G1;

extern s32 FS_SeekFile(void *, s32, s32);
extern s32 GetFilePosForSkana(s32, s32 *, s32 *);
extern void MIi_CpuClear16(s32, void *, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern void *func_0200ed38(s32, s32, s32);
extern void func_0200fddc(void);
extern s32 func_0201360c(void *, void *, s32);
extern G0 *data_0203673c;
extern u8 data_02036744;
extern G1 *data_ov000_02051548;

void SetCreateInShipPara(s32 idx) {
    void *q;
    struct {
        u32 hdr[2];
        s32 out;
        s32 args[3];
        s32 pad[2];
    } L;
    u32 n;
    s32 pos;

    if (idx >= 4) {
        idx = 0;
    }
    n = ((Ent *) (data_0203673c->tbl + idx * 0x2D0))->c;
    q = data_ov000_02051548->p[idx];
    if (q != 0) {
        if (q != 0) {
            OS_FreeToHeap(0, -1, q);
            data_ov000_02051548->p[idx] = 0;
        }
        data_ov000_02051548->p[idx] = 0;
    }
    if (n != 0) {
        data_ov000_02051548->p[idx] = func_0200ed38(0, -1, 0x38);
        MIi_CpuClear16(0, data_ov000_02051548->p[idx], 0x38);
        L.args[0] = 5;
        L.args[1] = 2;
        L.args[2] = 6;
        pos       = GetFilePosForSkana(3, L.args, &L.out);
        if (FS_SeekFile(&data_02036744, pos, 0) == 0) {
            func_0200fddc();
        }
        if (func_0201360c(&data_02036744, L.hdr, 8) == 0) {
            func_0200fddc();
        }
        if (n >= L.hdr[1]) {
            n = 0;
        }
        if (FS_SeekFile(&data_02036744, n * 0x38 + pos + 8, 0) == 0) {
            func_0200fddc();
        }
        if (func_0201360c(&data_02036744, data_ov000_02051548->p[idx], 0x38) == 0) {
            func_0200fddc();
        }
    }
}
