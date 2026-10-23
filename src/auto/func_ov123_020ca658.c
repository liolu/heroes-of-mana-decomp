/* compiler: 1.2/sp2p3 */
struct G {
    char pad[0x38];
    unsigned char f : 1;
};
struct P {
    unsigned short a, b;
};
struct H {
    char pad[0x28];
    struct P p0;
    struct P p1;
};
extern struct H *data_ov123_020e4734;
int func_ov123_020ca658(struct P *o) {
    struct H *h = data_ov123_020e4734;
    if (!((struct G *) h)->f) {
        *o = h->p1;
        return 0;
    }
    *o = h->p0;
    return 1;
}
