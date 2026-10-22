typedef struct VT {
    unsigned char pad[0x24];
    void (*fn)(void *);
} VT;

extern void *data_ov123_020e47e8;

void func_ov123_020d3a64(void *arg0) {
    unsigned char *p = (unsigned char *) ((unsigned int) data_ov123_020e47e8 + 0x530) + 0x7000;
    VT *vt           = *(VT **) p;

    vt->fn(p);
}
