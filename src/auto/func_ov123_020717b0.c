/* compiler: 1.2/sp2p3 */
typedef struct S {
    unsigned char pad[0x6C];
    int f6c;
    volatile short f70;
    signed char f72;
    signed char f73;
    short f74;
    short f76;
    int f78;
} S;
extern int data_ov123_020d9864;
int func_ov123_02071750(void *);
int func_ov123_020733a8();
int func_ov123_020717b0(S *p, short a1, int a2) {
    int ok;
    int st;
    if (func_ov123_020733a8() != 0 || (p->f70 & 8)) {
        return -0x1C;
    }
    ok = 0;
    if (p != 0) {
        ok = (p->f70 & 1) != 0;
    }
    if (ok == 0) {
        return -0x27;
    }
    st = 1;
    if (p->f73 != 0 && p->f73 != 4) {
        st = 0;
    }
    if (st != 0) {
        if (p->f70 & 4) {
            if (p->f72 == 1) {
                return -0x1E;
            }
            return 0;
        }
        if (p->f70 & 2) {
            if (p->f70 & 0x40) {
                return p->f6c;
            }
            return data_ov123_020d9864;
        }
        p->f76 = a1;
        p->f78 = a2;
        st     = func_ov123_02071750(p);
        if (p->f72 != 1) {
            st = -0x1A;
        }
        return st;
    }
    p->f76 = a1;
    p->f78 = a2;
    return 0;
}
