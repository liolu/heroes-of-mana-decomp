/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    unsigned a : 6;
    unsigned f : 8;
    unsigned b : 10;
    unsigned c : 1;
    unsigned d : 7;
} S;
void SetObjActionToNONE(void *p) {
    unsigned *q = p;
    *q &= ~0x3FC000;
    ((int *) p)[15] = 0;
    *q &= ~0x2000000;
}
