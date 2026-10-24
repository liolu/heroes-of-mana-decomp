/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int x;
    int y;
    int z;
} V;
typedef struct {
    unsigned char pad[0x27c];
    int x;
    int y;
    int z;
} G;
extern G *data_ov000_02051548;
extern void objZahyou2ScreenZahyou(V *);
void GetHata3Dto2DZahyou(int *ox, int *oy) {
    V v;
    G *g = data_ov000_02051548;
    v.x  = g->x;
    v.y  = g->y;
    v.z  = g->z;
    objZahyou2ScreenZahyou(&v);
    *ox = v.x;
    *oy = v.y;
}
