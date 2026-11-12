#include "m2c.h"

typedef struct {
    u32 w0;
    u16 h[27];
} Src;

typedef struct {
    u32 w0;
    u16 h4;
    u16 h6;
    u16 h8;
    u16 ha;
    u32 wc;
    u16 h10;
    u16 h12;
    u16 h14;
    u16 h16;
    u32 w18;
    u16 h1c;
    u16 h1e;
    u16 h20;
    u16 h22;
    u32 w24;
    u16 h28;
    u16 h2a;
    u16 h2c;
    u16 h2e;
    u32 w30;
    u16 h34;
    u16 h36;
    u16 h38;
    u16 h3a;
    u32 w3c;
    u16 h40;
    u16 h42;
    u16 h44;
    u16 h46;
    u32 w48;
    u16 h4c;
    u16 h4e;
    u16 h50;
    u16 h52;
    u32 w54;
    u16 h58;
    u16 h5a;
    u16 h5c;
    u16 h5e;
    u32 w60;
    u16 h64;
    u16 h66;
    u16 h68;
    u16 h6a;
    u32 w6c;
} Rec;

typedef struct {
    s32 w0;
    s32 w4;
    s32 w8;
    s32 wc;
    s32 w10;
    s32 w14;
    s32 w18;
    s32 w1c;
    s32 w20;
    s32 *a24;
    s32 w28;
    s32 *a2c;
    s32 w30;
    s32 *a34;
    s32 w38;
    Rec *a3c;
} Hdr;

typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 rest : 30;
    u8 pad4[0x4c - 4];
    Hdr *p4c;
} Ctx;

typedef struct {
    u8 pad0[0x24];
    s32 start;
    s32 end;
    u8 pad2c[0x48 - 0x2c];
} Fs;

extern char *data_ov111_020ebfa4[];

extern void func_02013190(Fs *f);
extern s32 FS_OpenFile(Fs *f, char *path);
extern void *func_0200ed38(s32 a, s32 b, s32 c);
extern s32 func_0201360c(Fs *f, void *buf, s32 n);
extern void DC_FlushRange(void *p, s32 n);
extern void OS_FreeToHeap(s32 a, s32 b, void *p);
extern void func_020134b8(Fs *f);

void func_ov111_020e34b8(s32 idx, Ctx *o) {
    Fs fs;
    char *path = data_ov111_020ebfa4[idx];
    s32 size;
    s32 n;
    s32 i;
    s32 *buf;
    s32 *src;
    u8 *sr;
    if (!o->b0) {
        return;
    }
    func_02013190(&fs);
    if (!FS_OpenFile(&fs, path)) {
        return;
    }
    size = fs.end - fs.start;
    buf  = func_0200ed38(0, -1, size);
    if (buf != 0) {
        n = func_0201360c(&fs, buf, size);
        DC_FlushRange(buf, n);
        o->b1       = 1;
        o->p4c      = func_0200ed38(0, -1, 0x40);
        o->p4c->w0  = buf[0];
        o->p4c->w4  = buf[1];
        o->p4c->w8  = buf[2];
        o->p4c->wc  = buf[3];
        o->p4c->w10 = buf[4];
        o->p4c->w14 = buf[5];
        o->p4c->w18 = buf[6];
        o->p4c->w1c = buf[7];
        o->p4c->w20 = buf[8];
        src         = buf + 9;
        if (o->p4c->w20 != 0) {
            o->p4c->a24 = func_0200ed38(0, -1, o->p4c->w20 * 4);
            for (i = 0; i < o->p4c->w20; i++) {
                o->p4c->a24[i] = *src++;
            }
        }
        o->p4c->w28 = *src++;
        if (o->p4c->w28 != 0) {
            o->p4c->a2c = func_0200ed38(0, -1, o->p4c->w28 * 4);
            for (i = 0; i < o->p4c->w28; i++) {
                o->p4c->a2c[i] = *src++;
            }
        }
        o->p4c->w30 = *src++;
        if (o->p4c->w30 != 0) {
            o->p4c->a34 = func_0200ed38(0, -1, o->p4c->w30 * 4);
            for (i = 0; i < o->p4c->w30; i++) {
                o->p4c->a34[i] = *src++;
            }
        }
        o->p4c->w38 = *src++;
        sr          = (u8 *) src;
        if (o->p4c->w38 != 0) {
            o->p4c->a3c = func_0200ed38(0, -1, o->p4c->w38 * 0x70);
            for (i = 0; i < o->p4c->w38; i++) {
                o->p4c->a3c[i].w0  = *(u32 *) sr;
                o->p4c->a3c[i].h4  = *(u16 *) (sr + 4);
                o->p4c->a3c[i].h6  = *(u16 *) (sr + 6);
                o->p4c->a3c[i].h8  = *(u16 *) (sr + 8);
                o->p4c->a3c[i].ha  = 0;
                o->p4c->a3c[i].wc  = 0;
                o->p4c->a3c[i].h10 = *(u16 *) (sr + 10);
                o->p4c->a3c[i].h12 = *(u16 *) (sr + 12);
                o->p4c->a3c[i].h14 = *(u16 *) (sr + 14);
                o->p4c->a3c[i].h16 = 0;
                o->p4c->a3c[i].w18 = 0;
                o->p4c->a3c[i].h1c = *(u16 *) (sr + 16);
                o->p4c->a3c[i].h1e = *(u16 *) (sr + 18);
                o->p4c->a3c[i].h20 = *(u16 *) (sr + 20);
                o->p4c->a3c[i].h22 = 0;
                o->p4c->a3c[i].w24 = 0;
                o->p4c->a3c[i].h28 = *(u16 *) (sr + 22);
                o->p4c->a3c[i].h2a = *(u16 *) (sr + 24);
                o->p4c->a3c[i].h2c = *(u16 *) (sr + 26);
                o->p4c->a3c[i].h2e = 0;
                o->p4c->a3c[i].w30 = 0;
                o->p4c->a3c[i].h34 = *(u16 *) (sr + 28);
                o->p4c->a3c[i].h36 = *(u16 *) (sr + 30);
                o->p4c->a3c[i].h38 = *(u16 *) (sr + 32);
                o->p4c->a3c[i].h3a = 0;
                o->p4c->a3c[i].w3c = 0;
                o->p4c->a3c[i].h40 = *(u16 *) (sr + 34);
                o->p4c->a3c[i].h42 = *(u16 *) (sr + 36);
                o->p4c->a3c[i].h44 = *(u16 *) (sr + 38);
                o->p4c->a3c[i].h46 = 0;
                o->p4c->a3c[i].w48 = 0;
                o->p4c->a3c[i].h4c = *(u16 *) (sr + 40);
                o->p4c->a3c[i].h4e = *(u16 *) (sr + 42);
                o->p4c->a3c[i].h50 = *(u16 *) (sr + 44);
                o->p4c->a3c[i].h52 = 0;
                o->p4c->a3c[i].w54 = 0;
                o->p4c->a3c[i].h58 = *(u16 *) (sr + 46);
                o->p4c->a3c[i].h5a = *(u16 *) (sr + 48);
                o->p4c->a3c[i].h5c = *(u16 *) (sr + 50);
                o->p4c->a3c[i].h5e = 0;
                o->p4c->a3c[i].w60 = 0;
                o->p4c->a3c[i].h64 = *(u16 *) (sr + 52);
                o->p4c->a3c[i].h66 = *(u16 *) (sr + 54);
                o->p4c->a3c[i].h68 = *(u16 *) (sr + 56);
                o->p4c->a3c[i].h6a = 0;
                o->p4c->a3c[i].w6c = 0;
                sr += 0x3a;
            }
        }
        OS_FreeToHeap(0, -1, buf);
    }
    func_020134b8(&fs);
}
