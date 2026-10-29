/* compiler: 2.0/sp1p5 -O2,p */
typedef struct {
    unsigned d : 1;
    unsigned c : 1;
    unsigned pad : 27;
    unsigned b : 1;
    unsigned a : 1;
    unsigned x : 1;
} F;
void func_ov111_020e975c(unsigned char *p) {
    F *s = (F *) (p + 0x404);
    s->a = 0;
    s->b = s->a;
    s->c = s->b;
    s->d = s->c;
}
