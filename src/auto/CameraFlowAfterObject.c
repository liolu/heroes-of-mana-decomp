/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef struct O {
    u32 flag : 1;
    u32 rest : 31;
    char p[0x3c];
    int x;
    int y;
    int v;
    int w;
} O;
typedef struct G {
    char p[0x1b4];
    int x;
    int y;
    int z;
    char q[0xc];
    int fl;
    O *o;
} G;
extern G *data_ov000_02051548;
extern void CameraPosToObj(O *);
void CameraFlowAfterObject(void) {
    G *g = data_ov000_02051548;
    O *o = g->o;
    if (o != 0 && o->flag) {
        if (g->x == o->x && g->z == o->v && g->y == o->y + o->w + 0x2800) {
            return;
        }
        CameraPosToObj(o);
        if (data_ov000_02051548->fl == 0) {
            data_ov000_02051548->fl = 1;
        }
    }
}
