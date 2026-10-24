typedef struct {
    unsigned a : 8;
    unsigned b : 24;
    unsigned short c;
    unsigned short d;
    int e;
    int f;
    int g;
    int h;
} E;
typedef struct {
    char p0[0xe];
    unsigned short f : 1;
    unsigned short r : 15;
} H;
typedef struct {
    char p0[0x34];
    E e[8];
    char p1[0x104 - 0x34 - 8 * 0x18];
    int idx;
    char p2[0x500 - 0x108];
    H h;
} G;
extern G *data_ov111_020f1bd8;
void func_ov111_020e5dd4(void) {
    data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].a = 0xf;
    data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].d = 0xffff;
    data_ov111_020f1bd8->h.f                           = 1;
}
