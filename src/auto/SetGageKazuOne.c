/* compiler: 2.0/sp1p5 -profile */
typedef unsigned char u8;
int func_0202d478(int, int);
int SetGageKazuOne(int v, u8 *out) {
    int started = 0;
    int n       = 0;
    int d       = 1000;
    int i;
    for (i = 0; i < 3; i++) {
        int q = func_0202d478(v, d);
        if (q != 0 || started != 0) {
            started = 1;
            *out++  = q;
            n++;
            v -= q * d;
        }
        d /= 10;
    }
    *out = v;
    return n + 1;
}
