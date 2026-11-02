struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void *f4();
};

extern "C" short func_ov004_020bbbbc(VA *o, int i) {
    void *r = o->f4();
    return ((short *) r)[i];
}
