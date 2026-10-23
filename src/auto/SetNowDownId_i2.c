/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned a : 26;
    unsigned t : 3;
    unsigned b : 3;
    char pad[0x68];
    int q;
} C;
int SetNowDownId_i(int, int, int);
int SetNowDownId_i2(int a, int b, C *c) {
    int r = SetNowDownId_i(a, b, c->q);
    if (c->t != 3 && c->t != 5) {
        r &= ~1;
    }
    return r;
}
