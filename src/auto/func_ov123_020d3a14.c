typedef struct VT {
    unsigned char pad[0x14];
    void (*fn)(void *, void *);
} VT;
extern void *data_ov123_020e47e8;
void func_ov123_020d3a14(void *arg0) {
    unsigned int p;
    VT *vt;
    p = (unsigned int) data_ov123_020e47e8 + 0x530;
    p += 0x7000;
    vt = *(VT **) p;
    vt->fn(arg0, (void *) p);
}
