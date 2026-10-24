/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned int pad : 17;
    unsigned int v : 4;
    unsigned int rest : 11;
    unsigned char p2[0x2d0 - 4];
} U;
typedef struct {
    unsigned char pad[0x28];
    U *u;
} G;
extern G *data_0203673c;
extern void PutSituationGageIcon(int, int, int);
void KuniNameSet(int idx, int v) {
    if (idx < 4) {
        U *u     = data_0203673c->u;
        u[idx].v = v;
        PutSituationGageIcon(1, 0x80, 0xb0);
    }
}
