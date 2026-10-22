/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned a : 1;
    unsigned b : 31;
    unsigned c;
    unsigned d0 : 29;
    unsigned d : 1;
    unsigned d1 : 2;
} Flg;
extern void DC_FlushAll(void);
extern void GX_BeginLoadTex(void);
extern void GX_EndLoadTex(void);
extern void GX_LoadTex(void *, int, int);
extern void OS_FreeToHeap(int, int, void *);
extern void *func_0200ed38(int, int, int);
extern void ReadAnaFileOfsSize(int, void *, int);
extern void NoAnimeTexToVram(void *);
extern unsigned char *data_ov000_02051548;
extern unsigned char data_ov003_020b08b0[];
extern unsigned char data_ov003_020b0cf0[];

void RestoreObjTex(void) {
    int i;
    unsigned char *p;
    unsigned char *q;
    p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p += 0x110) {
        Flg *g = (Flg *) p;
        if (g->a && !g->d) {
            *(unsigned int *) p |= 0x80;
        }
    }
    q = *(unsigned char **) (data_ov000_02051548 + 0x2F0);
    for (; q != 0; q = *(unsigned char **) (q + 0xF0)) {
        Flg *g = (Flg *) q;
        if (g->a && !g->d) {
            *(unsigned int *) q |= 0x80;
        }
    }
    p = data_ov003_020b08b0;
    for (i = 0; i < 4; i++, p += 0x110) {
        if (*(void **) (p + 0x10) != 0) {
            unsigned char *t;
            unsigned char *b;
            *(void **) (p + 0xAC) = func_0200ed38(0, -1, *(int *) (p + 0xB0) + 0xC);
            t                     = *(unsigned char **) (p + 0x10);
            ReadAnaFileOfsSize(*(int *) (t + 4) +
                                   (*(int *) (*(int *) (t + 0xC) + *(unsigned short *) (p + 0xFC) * 4 + 4) & 0xFFFFFF),
                               *(void **) (p + 0xAC), *(int *) (p + 0xB0) + 0xC);
            GX_BeginLoadTex();
            b                              = *(unsigned char **) (p + 0xAC);
            *(unsigned short *) (p + 0x98) = *(unsigned short *) (b + 0);
            *(unsigned short *) (p + 0x9A) = *(unsigned short *) (b + 2);
            *(unsigned short *) (p + 0x88) = *(unsigned short *) (b + 4);
            *(unsigned short *) (p + 0x8A) = *(unsigned short *) (b + 6);
            *(unsigned short *) (p + 0x8C) = *(unsigned short *) (b + 8);
            *(unsigned short *) (p + 0x8E) = *(unsigned short *) (b + 0xA);
            DC_FlushAll();
            GX_LoadTex(b + 0xC, *(int *) (p + 0xB4), (*(unsigned short *) (p + 0x98) * *(unsigned short *) (p + 0x9A)) / 2);
            if (*(void **) (p + 0xAC) != 0) {
                OS_FreeToHeap(0, -1, *(void **) (p + 0xAC));
                *(void **) (p + 0xAC) = 0;
            }
            GX_EndLoadTex();
        }
    }
    NoAnimeTexToVram(data_ov000_02051548 + 0x510);
    NoAnimeTexToVram(data_ov000_02051548 + 0x528);
}
