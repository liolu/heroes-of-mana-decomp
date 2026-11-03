/* near start: 4 diffs with profile "2.0/sp1p5" */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct Sh {
    int pad[4];
    u16 h10;
} Sh;
typedef struct Ob {
    char pad[0xa8];
    u16 lo : 14;
    u16 b : 2;
} Ob;
typedef struct En {
    Sh *p;
    char pad[0x10c];
} En;
typedef struct G {
    char pad[0x8c];
    u32 f8c;
    char pad2[0x10];
    int a0;
    int a4;
} G;
extern G *data_ov000_02051548;
extern En data_ov003_020b0dd8[];
extern void SetDestination(void *, int, int);
extern int GetGaiaTrentFromShip(void *);
extern void ReOrderOrderUnit(void *);
extern void researchHookObj(void *);
extern int GetHookAooNo(void *, int, int, int);
extern int checkHookStatus(int);
extern void changeOccWithKihon(int, void *, int, int);

void func_ov108_020d837c(Ob *o) {
    int r4;
    int t;
    G *g = data_ov000_02051548;
    if ((g->f8c & 8) == 8) {
        SetDestination(o, g->a0, g->a4);
        return;
    }
    if (o->b == 2) {
        t = GetGaiaTrentFromShip(o);
        if (t == -1) {
            return;
        }
        if (data_ov003_020b0dd8[t].p->h10 >= 5) {
            ReOrderOrderUnit(o);
            return;
        }
    }
    researchHookObj(o);
    r4 = GetHookAooNo(o, 0, 0, 1);
    if (r4 == -1 || checkHookStatus(r4) != -1) {
        r4 = GetHookAooNo(o, 0, 0, 2);
    }
    if (r4 == -1 || checkHookStatus(r4) != -1) {
        r4 = GetHookAooNo(o, 0, 0, 3);
    }
    if (r4 == -1 || checkHookStatus(r4) != -1) {
        r4 = GetHookAooNo(o, 0, 1, 1);
    }
    if (r4 == -1) {
        return;
    }
    if (checkHookStatus(r4) != -1) {
        return;
    }
    changeOccWithKihon(2, o, r4, 0);
}
