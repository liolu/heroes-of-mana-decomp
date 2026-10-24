/* compiler: 1.2/sp3 */
typedef struct Obj {
    int w0;
    unsigned short h4;
    unsigned short h6;
    struct Obj2 *p8;
    int wc;
    unsigned char pad[0x5C];
    int w6c;
    unsigned char pad2[0x1C];
    int w8c;
} Obj;
struct Obj2 {
    unsigned char pad[0x20];
    int w20;
};
extern int func_ov123_0207b3f4(void);
extern int func_ov123_02087094(int, void *);
extern int func_ov123_02087e14(void *, void *, int, unsigned short, int, int, int);
extern void func_ov123_0208805c(void *);
extern int func_ov123_020889ec(void *);
extern int func_ov123_0208a4c8(void *);

int func_ov123_02089fc0(Obj *o, int a1, int a2) {
    if (o->wc != 3) {
        return func_ov123_0208a4c8(o) != 0;
    }
    if (a2 < 0x20) {
        return func_ov123_0208a4c8(o) != 0;
    }
    if (func_ov123_02087094(a1, (unsigned char *) o + 0x68) == 0) {
        return func_ov123_0208a4c8(o) != 0;
    }
    if (o->p8->w20 == 0) {
        if (func_ov123_020889ec(o) == 0) {
            return 0;
        }
        func_ov123_0208805c(o);
        return 1;
    }
    o->wc = 4;
    return func_ov123_02087e14(o->p8, o, o->w0, o->h4, func_ov123_0207b3f4() - o->w8c, a1 + 0x20, a2 - 0x20) != 0;
}
