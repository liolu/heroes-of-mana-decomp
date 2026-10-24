/* compiler: 1.2/sp2p3 */
typedef struct O {
    char p[0x73];
    signed char k;
} O;
extern int func_ov123_02071dbc(O *, int, int, int, int);
extern int func_ov123_02071ea4(O *, int, int, int, int);
int func_ov123_02071fb4(O *o, int a, int b, int c, int d, unsigned int flags) {
    if (o->k == 4) {
        return func_ov123_02071dbc(o, a, b, c, d);
    }
    {
        int r = func_ov123_02071ea4(o, a, b, c, d);
        if (r != -6) {
            return r;
        }
        if (flags & 1) {
            return func_ov123_02071dbc(o, a, b, c, d);
        }
        return r;
    }
}
