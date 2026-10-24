/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned short f : 1;
    unsigned short r : 15;
} U;
typedef struct {
    char p[0x2c];
    char *q;
} Q;
typedef struct {
    char p[0x2c];
    char *q;
} G;
extern G *data_0203673c;
U *GetBlank_UNIT_INFO(void) {
    U *p = (U *) (data_0203673c->q + 0x2c8) + 0x400;
    int i;
    for (i = 0; i < 0xf0; i++, p++) {
        if (!p->f) {
            return p;
        }
    }
    return 0;
}
