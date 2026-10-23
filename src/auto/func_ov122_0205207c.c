typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef struct Spr {
    u32 a : 1;
    u32 b : 1;
    u32 x : 1;
    u32 c : 8;
    u32 d : 8;
    u32 e : 8;
    u32 y : 5;
    u16 g : 5;
    u16 z : 11;
} Spr;
typedef struct Oam {
    Spr s[12];
    u8 ids[6];
} Oam;
typedef struct Ent {
    u32 on : 1;
    u32 v : 8;
    u32 r : 23;
    u8 pad[28];
} Ent;
typedef struct Tab {
    u8 pad[14];
    u16 h1;
    u16 h2;
    u8 pad2[14];
} Tab;
typedef struct Hdr {
    u8 pad[0x48];
    s16 f48;
    u8 pad2[8];
    s16 f52;
    u8 pad3[4];
    s16 f58;
    s16 f5a;
    s16 f5c;
    s16 f5e;
} Hdr;
typedef struct Gl {
    u8 pad[0xd4c];
    s8 cnt;
    u8 pad2[7];
    u32 q : 10;
    u32 f : 8;
    u32 w : 14;
} Gl;
extern Oam data_ov122_020630e0;
extern Ent data_ov122_02064894[];
extern Tab data_ov122_020647c0[];
extern Hdr data_ov122_02063820;
extern Gl data_ov122_02062b20;
extern u8 data_ov122_0206386c[];
extern void func_ov122_02051a20(void *);
void func_ov122_0205207c(void) {
    int n;
    int i;
    Ent *e;
    Spr *d;
    int k;
    for (i = 0; i < 12; i++) {
        data_ov122_020630e0.s[i].a = 0;
        data_ov122_020630e0.s[i].b = 0;
    }
    for (i = 0; i < 6; i++) {
        data_ov122_020630e0.ids[i] = 0xff;
    }
    func_ov122_02051a20(data_ov122_0206386c);
    data_ov122_02063820.f5c = 0x38;
    data_ov122_02063820.f52 = 0x60;
    data_ov122_02063820.f5e = 1;
    data_ov122_02063820.f58 = 8;
    data_ov122_02063820.f5a = -0xa8;
    k                       = 0;
    data_ov122_02062b20.f   = 5;
    e                       = data_ov122_02064894;
    d                       = data_ov122_020630e0.s;
    n                       = k;
    for (; k < 5; k++, e++) {
        if (e->on) {
            d->a = 1;
            d->d = e->v;
            d->c = data_ov122_020647c0[k + 7].h1;
            d->e = data_ov122_020647c0[k + 7].h2;
            d->g = k;
            n++;
            d++;
        }
    }
    data_ov122_02062b20.cnt = n;
    data_ov122_02063820.f48 = 0;
}
