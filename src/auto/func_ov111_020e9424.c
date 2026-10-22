typedef struct {
    unsigned short r : 5;
    unsigned short g : 5;
    unsigned short b : 5;
    unsigned short a : 1;
} Col;

extern int func_0202d478(int, int);

void func_ov111_020e9424(Col *a, Col *b, Col *d, int mul, int div, int add) {
    int r, g, bl;
    d->a = 0;
    r    = func_0202d478(b->r * mul, div);
    g    = func_0202d478(b->g * mul, div);
    bl   = func_0202d478(b->b * mul, div);
    if (add == 0) {
        int t;
        d->b = 0;
        d->g = d->b;
        d->r = d->g;
        t    = a->r - r;
        if (t > 0) {
            d->r = t;
        }
        t = a->g - g;
        if (t > 0) {
            d->g = t;
        }
        t = a->b - bl;
        if (t > 0) {
            d->b = t;
        }
    } else {
        int t;
        d->b = 31;
        d->g = d->b;
        d->r = d->g;
        t    = r + a->r;
        if (t < 31) {
            d->r = t;
        }
        t = g + a->g;
        if (t < 31) {
            d->g = t;
        }
        t = bl + a->b;
        if (t < 31) {
            d->b = t;
        }
    }
}
