typedef struct VT {
    unsigned char pad[0x1C];
    void (*f1C)(void *);
} VT;
typedef struct Sub {
    VT *vt;
} Sub;
extern void *data_ov123_020e47e8;
void func_ov123_020d3a3c(void) {
    Sub *s = (Sub *) ((unsigned char *) ((unsigned int) data_ov123_020e47e8 + 0x530) + 0x7000);

    s->vt->f1C(s);
}
