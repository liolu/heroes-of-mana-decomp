/* compiler: 1.2/sp3 */
typedef struct {
    unsigned char pad[0x30];
    volatile unsigned int *w;
    unsigned char p2[0xe9];
    unsigned char b;
} G;
typedef struct {
    int a;
    int b;
} S;
extern G *data_ov123_020e45bc;
extern void func_ov123_020af5e8(int, int, int);
extern void func_ov123_020cb618(void *, void *);
extern void func_ov123_020aebc4(void);
void func_ov123_020aeca4(void *p) {
    volatile S s;
    int t;
    G *g                     = data_ov123_020e45bc;
    volatile unsigned int *w = g->w;
    s.a                      = (*w & 0x1ff0000) >> 16;
    t                        = *w & 0xff;
    s.b                      = t;
    t                        = t + 12;
    s.b                      = t;
    func_ov123_020af5e8(g->b, 0, t);
    if (s.b >= 192) {
        func_ov123_020cb618(p, func_ov123_020aebc4);
    }
}
