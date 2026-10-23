struct S {
    int a, b, c;
    unsigned char *p;
};
void func_ov004_020b9d54(unsigned char *d, struct S *s) {
    unsigned char a, b, c, e;
    a    = *s->p++;
    b    = *s->p++;
    c    = *s->p++;
    e    = *s->p++;
    d[0] = a;
    d[1] = b;
    d[2] = c;
    d[3] = e;
}
