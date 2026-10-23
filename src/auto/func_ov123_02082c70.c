/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef struct Obj {
    u8 p[0x1BC];
    s32 f1BC;
    s32 f1C0;
} Obj;
typedef struct St {
    s32 f0;
    u8 p4[4];
    s32 f8;
    s32 fC;
    s32 f10;
    u8 p14[4];
    u8 f18[0x10];
    u8 f28[8];
    s32 f30;
} St;
typedef struct Pair {
    s32 a;
    s32 b;
} Pair;
typedef struct Node {
    s32 a;
    s32 b;
    s32 c;
} Node;
extern s32 func_ov123_0207ac60(s32);
extern s32 func_ov123_0207b3a0(s32);
extern void func_ov123_0207cbf0(void **, s32, s32, void *);
extern void func_ov123_0207d890(void **, void *);
extern s32 func_ov123_0207d8fc(void **, void *, s32 *, s32 *, s32 *);
extern s32 func_ov123_0207da38(void **, s32, void *, s32 *, s32, void *);
extern s32 func_ov123_0207dbb8(void **, s32, void *, s32 *, s32 *, void *);
extern s32 func_ov123_0207e5e0(void **, Pair, void *, s32, s32);
extern s32 func_ov123_02082ef8(void **, St *);
extern void func_ov123_02085e4c(void **, St *, s32, s32, s32, s32);
extern void func_ov123_02086078(void **, void *);
extern Node *func_ov123_020996d4(s32);
extern u8 data_ov123_020daccc[];
extern u8 data_ov123_020dacd0[];
extern u8 data_ov123_020dace0[];
s32 func_ov123_02082c70(void **arg0, St *arg1) {
    s32 sp8;
    s32 spC;
    Pair pr;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 r;
    Obj *o;
    Node *n;
    o = (Obj *) *arg0;
    if (arg1->f30 != 0) {
        r = func_ov123_0207da38(arg0, arg1->f8, arg1->f28, &spC, 1, data_ov123_020daccc);
        if (spC != 0 || r != 0) {
            arg1->f0 = 0x6A;
            return 0;
        }
    }
    if (arg1->f30 == 0) {
        r = func_ov123_02082ef8(arg0, arg1);
        if (r != 0) {
            return r;
        }
        if (arg1->f0 == 0x6A) {
            return 0;
        }
    }
    if (func_ov123_0207dbb8(arg0, arg1->f8, arg1->f18, &sp8, &spC, data_ov123_020daccc) != 0) {
        arg1->f0 = 0x6A;
        return 0;
    }
    if (sp8 > 0) {
        arg1->f10 = func_ov123_0207ac60(0) + 0x12C;
    }
    for (;;) {
        r = func_ov123_0207d8fc(arg0, arg1->f18, &sp18, &sp1C, &sp20);
        if (r != 0) {
            return r;
        }
        if (sp18 != 0) {
            switch (sp1C) {
                case 1:
                    pr = *(Pair *) &o->f1BC;
                    if (pr.a != 0) {
                        n = func_ov123_020996d4(0xC);
                        if (n == 0) {
                            func_ov123_02086078(arg0, data_ov123_020dacd0);
                            return 1;
                        }
                        n->a = arg1->fC;
                        n->c = func_ov123_0207b3a0(sp18);
                        n->b = func_ov123_0207ac60(0);
                        r    = func_ov123_0207e5e0(arg0, pr, n, 0, 2);
                        if (r != 0) {
                            return r;
                        }
                    }
                    break;
                case 0x66:
                    func_ov123_0207cbf0(arg0, arg1->fC, 0x67, data_ov123_020dace0);
                    break;
                case 0xC8:
                case 0xC9:
                case 0xCA:
                case 0xCB:
                case 0xCC:
                case 0xCD:
                case 0xCE:
                case 0xCF:
                case 0xD0:
                    func_ov123_02085e4c(arg0, arg1, sp1C, *(s32 *) arg1->f18, sp18, sp20);
                    break;
            }
            func_ov123_0207d890(arg0, arg1->f18);
        }
        if (sp18 == 0) {
            if (spC != 0) {
                arg1->f0 = 0x6A;
            }
            return 0;
        }
    }
}
