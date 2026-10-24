/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct Pal {
    u16 h0;
    u16 cnt : 14;
    u16 hi : 2;
    int a4;
    u32 a8;
} Pal;
typedef struct G {
    char pad[0x4dc];
    int tab[3];
} G;
extern G *data_ov000_02051548;
extern Pal *getNewPatternPalette(int, int);
extern Pal *SearchObjPal(int, int);
extern int SearchTexPalMap(u32);
extern void SetTexPaletteData(int, int, u32, int);

void SetSnowAndStonePal(int mode) {
    Pal *sp[3];
    int i;
    if (mode == 1) {
        sp[0] = getNewPatternPalette(4, 2);
        sp[1] = getNewPatternPalette(3, 2);
        sp[2] = getNewPatternPalette(5, 2);
    } else {
        Pal *p;
        p = SearchObjPal(4, 2);
        p->cnt++;
        sp[0] = p;
        p     = SearchObjPal(3, 2);
        p->cnt++;
        sp[1] = p;
        p     = SearchObjPal(5, 2);
        sp[2] = p;
        p->cnt++;
    }
    i = 0;
    do {
        Pal *q                      = sp[i];
        data_ov000_02051548->tab[i] = SearchTexPalMap(q->a8 >> 5);
        SetTexPaletteData(q->a4, data_ov000_02051548->tab[i], q->a8, 0);
        i++;
    } while (i < 3);
}
