typedef struct VT {
    void *f0;
    void (*f4)(void *);
    void *f8[5];
    void (*f1c)(void *);
} VT;
typedef struct Obj {
    VT *vt;
} Obj;
extern Obj *func_ov123_020d2688();
extern void func_ov123_020d2698();
extern Obj *data_ov123_020e47e8;
void func_ov123_020d2f1c(void) {
    Obj *o;
    if (data_ov123_020e47e8 != 0) {
        if (data_ov123_020e47e8 != 0) {
            data_ov123_020e47e8->vt->f4(data_ov123_020e47e8);
        }
        data_ov123_020e47e8 = 0;
    }
    if (func_ov123_020d2688() == 0) {
        return;
    }
    o = func_ov123_020d2688();
    o->vt->f1c(o);
    func_ov123_020d2698();
}
