/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned char pad[0x600];
    unsigned short pad2;
    unsigned short m;
} E;
extern unsigned char *data_ov000_0205154c;
extern void ReleaseObjPaletteTransByNoAndSize(int, int);
void ResetObjPalMapX(int a, int n, int k) {
    int i;
    for (i = 0; i < n; i++) {
        E *e = (E *) ((unsigned char *) (k * 0x4b0) + (int) data_ov000_0205154c);
        e->m = e->m & ~(1 << (a + i));
    }
    ReleaseObjPaletteTransByNoAndSize(a, n);
}
