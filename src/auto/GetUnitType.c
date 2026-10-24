/* compiler: 2.0/sp1p5 -profile */
/* MATCH 2.0/sp1p5 -profile */
typedef struct {
    unsigned int a : 10;
    unsigned int t : 4;
    unsigned int b : 18;
} Q;
typedef struct {
    unsigned int alive : 1;
    unsigned int p0 : 31;
    int p1;
    unsigned int p2 : 23;
    unsigned int k : 4;
    unsigned int p3 : 5;
    unsigned char pad[0xe0];
    Q *q;
} U;

int GetUnitType(U *u) {
    Q *q;
    if (u == 0) {
        return 0;
    }
    if (u->alive == 0) {
        return 0;
    }
    if (u->k >= 4) {
        return 0;
    }
    q = u->q;
    if (q != 0) {
        return q->t;
    }
    return 0;
}
