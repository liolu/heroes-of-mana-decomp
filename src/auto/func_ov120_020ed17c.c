#include "m2c.h"

typedef struct Ent {
    u16 h0;
    s16 x;
    s16 y;
    u16 idx : 10;
    u16 sz : 2;
    u16 shape : 2;
    u16 pad : 2;
} Ent;
typedef struct Obj {
    s32 size;
    void *ptr;
    Ent e[0x80];
    u32 pad;
} Obj;
typedef struct Out {
    u32 w0;
    u16 h4;
    u16 pad;
} Out;
typedef struct G {
    u32 pad0;
    u32 pad4;
    s32 f8;
    s32 fc;
} G;

extern G data_ov120_020f46dc;

void *GetFilePosForSkana(s32, s32, s32 *);
void *ReadOneString(void *, s32, s32 *);
void setStringToObj(void *, void *, s32, Obj *);
void OS_FreeToHeap(u32, s32, void *);
void MIi_CpuCopy16(void *, s32, s32);

s32 func_ov120_020ed17c(s32 a0, s32 a1, s32 a2, s32 a3, s32 mode, u32 flags, s32 farg, Out *out, s32 maxn) {
    s32 dst;
    s32 i;
    u32 at;
    s32 m;
    s32 len;
    s32 pos;
    s32 v;
    s32 sh;
    s32 j2;
    s32 pal;
    s32 idx;
    u32 wd;
    Obj obj;
    s32 hv;
    u8 *buf;

    buf = ReadOneString(GetFilePosForSkana(a0, farg, &pos), a3, &len);
    setStringToObj(buf, buf + len, 2, &obj);
    OS_FreeToHeap(0, -1, buf);
    if (mode == 2) {
        pal = 0xe;
    } else {
        pal = 0xf;
    }
    if (!(flags & 1)) {
        idx                    = data_ov120_020f46dc.f8;
        data_ov120_020f46dc.f8 = idx + obj.size / 32;
        dst                    = 0x6400000;
    } else {
        idx                    = data_ov120_020f46dc.fc;
        data_ov120_020f46dc.fc = idx + obj.size / 32;
        dst                    = 0x6600000;
    }
    if (flags & 8) {
        dst = 0x6808000;
    }
    MIi_CpuCopy16(obj.ptr, dst + idx * 32, obj.size);
    for (i = 0; i < obj.e[0].h0; i++) {
        if (i >= maxn) {
            return 0;
        }
        hv = (idx + obj.e[i].idx * 4) / 2;
        wd = ((u32) obj.e[i].sz << 14) | ((u32) obj.e[i].shape << 30);
        {
            s32 ty = a2 + obj.e[i].y;
            s32 tx = a1 + obj.e[i].x;
            wd     = wd | (ty & 0xff) | ((tx & 0x1ff) << 16);
        }
        out[i].w0 = wd;
        out[i].h4 = hv | (pal << 12);
    }
    for (; i < maxn; i++) {
        out[i].w0 = 0x200;
        out[i].h4 = 0;
    }
    maxn = obj.e[0].h0;
    m    = 0;
    for (j2 = 0; j2 < maxn; j2++) {
        sh = obj.e[j2].shape * 2;
        if (sh == 0) {
            sh++;
        }
        v = obj.e[j2].x + sh * 8;
        if (m < v) {
            m = v;
        }
    }
    OS_FreeToHeap(0, -1, obj.ptr);
    return -m / 2;
}
