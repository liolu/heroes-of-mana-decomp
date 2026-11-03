/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    char p[0x24];
    int q;
} G;
typedef struct {
    int sz;
} H;
extern G *data_0203673c;
extern void *func_0200ed38(int, int, int);
extern void MIi_CpuCopy16(int, void *, int);
void *SetTrsDataFirstForParent(H *h) {
    void *r;
    r = func_0200ed38(0, -1, h->sz = 0x11e0);
    MIi_CpuCopy16(data_0203673c->q, r, 0x11e0);
    return r;
}
