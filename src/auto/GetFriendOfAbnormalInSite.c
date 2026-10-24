/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned int a : 18;
    unsigned int kind : 5;
    unsigned int b : 9;
} W;
typedef struct {
    unsigned char pad[8];
    W w[1];
} Tb;
typedef struct {
    unsigned int a : 11;
    unsigned int id : 8;
    unsigned int b : 13;
} I;
typedef struct {
    unsigned char pad[0x10];
    unsigned char *tbl;
} G;
typedef struct {
    unsigned char pad[0x2c];
    unsigned short flag : 1;
    unsigned short r : 15;
} X;
extern G *data_0203673c;
extern void is_thereFriendOfAbnormalInSite(void *, int);
void GetFriendOfAbnormalInSite(unsigned char *u) {
    I *i = *(I **) (u + 0xe8);
    W *w = (W *) (data_0203673c->tbl + i->id * 4 + 8);
    X *x = (X *) u;
    if (w->kind == 4) {
        is_thereFriendOfAbnormalInSite(u, x->flag ^ 1);
    } else {
        is_thereFriendOfAbnormalInSite(u, x->flag);
    }
}
