/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int a;
    int b;
    int c;
    int d;
} Q;
typedef struct {
    char p[0x10];
    Q *q;
    int x;
    int pal;
} S;
extern int SearchTexPalMap(int);
extern void SetTexPaletteData(int, int, int, int);
void SetFlyArmPal(S *p) {
    if (p) {
        p->pal = SearchTexPalMap(((unsigned *) p->q)[2] >> 5);
        SetTexPaletteData(p->q->b, p->pal, p->q->c, 0);
    }
}
