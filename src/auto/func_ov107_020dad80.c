typedef struct {
    char p[0x10];
    unsigned short a;
    unsigned short b;
} S;
typedef struct {
    char p[0xe8];
    S *s;
} O;
extern int func_0202d478(int, int);
extern int distanceForBattle(void *, void *);
extern void changeOcc(int, void *, void *, int);
int func_ov107_020dad80(O *o, void *p) {
    S *s = o->s;
    if (func_0202d478(s->a * 100, s->b) < 30) {
        return 0;
    }
    if (distanceForBattle(p, o) == 1) {
        changeOcc(3, o, p, 0);
        return 1;
    }
    changeOcc(2, o, p, 0);
    return 1;
}
