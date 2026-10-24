typedef struct {
    unsigned char pad[0x50e];
    unsigned short a : 2;
    unsigned short f : 1;
    unsigned short r : 13;
    unsigned char p2[0x510 - 0x510];
} E;
typedef struct {
    unsigned char pad[0x28];
    unsigned char *buf;
    unsigned char p2[0x500 - 0x2c];
    unsigned short p3[6];
    unsigned short pos;
} G;
typedef struct {
    int pad;
    unsigned char *base;
} T;
extern T data_ov111_020f13c0;
extern G *data_ov111_020f1bd8;
extern int func_ov111_020e5d60(int);
void func_ov111_020e6938(void) {
    int n = func_ov111_020e5d60(2);
    E *e  = (E *) (data_ov111_020f13c0.base + n * 0x510);
    G *g  = data_ov111_020f1bd8;
    e->f  = g->buf[g->pos + 1];
    data_ov111_020f1bd8->pos += 4;
}
