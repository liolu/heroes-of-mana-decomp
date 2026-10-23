/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int a;
    unsigned char lo : 4;
    unsigned char hi : 4;
    unsigned char lo2 : 4;
    unsigned char hi2 : 4;
} S;
void MakeKYOTEN_SET_GND_ByKyotenNo(int n, S *s) {
    s->a   = 2;
    s->lo  = 0;
    s->lo2 = 1;
}
