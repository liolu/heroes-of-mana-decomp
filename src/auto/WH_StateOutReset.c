/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    short a;
    unsigned short e;
} G;
void WH_ChangeSysState(int);
void WH_SetError(int);
void WH_StateOutReset(G *g) {
    if (g->e != 0) {
        WH_ChangeSysState(9);
        WH_SetError(g->e);
    } else {
        WH_ChangeSysState(1);
    }
}
