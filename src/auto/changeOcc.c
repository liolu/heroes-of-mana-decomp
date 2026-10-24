/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int p0;
    int p1;
    unsigned a : 23;
    unsigned x : 1;
    unsigned b : 8;
} W;
typedef struct {
    unsigned f : 1;
    unsigned g : 31;
    char p[0xc8];
    unsigned char cc;
    char q[0x1b];
    W *e8;
} O;
extern void changeOccasion(int, void *, void *, int, int);
void changeOcc(int a, O *o, int b, int d) {
    if (o->f && o->e8 != 0 && !o->e8->x) {
        o->cc = 0xff;
        changeOccasion(a, &o->cc, o, b, d);
    }
}
