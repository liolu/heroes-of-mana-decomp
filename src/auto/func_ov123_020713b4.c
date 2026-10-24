/* compiler: 1.2/sp2p3 */
typedef struct {
    unsigned char pad[0x70];
    short fl;
} B;
typedef struct {
    int pad;
    B *b;
    int p2;
    int p3;
    unsigned short v;
    unsigned short p4;
    unsigned short *o1;
    int *o2;
} O;
extern void OS_LockMutex(void *);
extern void func_ov123_0206d34c(int, int, int);
extern int func_ov123_0206d228(void);
extern int func_ov123_0206d0b4(unsigned short *, int *);
extern void func_0200e644(void *);
int func_ov123_020713b4(O *o) {
    B *b             = o->b;
    unsigned char *c = *(unsigned char **) ((unsigned char *) b + 0x64);
    unsigned short us;
    int ti;
    int r;
    OS_LockMutex(c + 0xe0);
    func_ov123_0206d34c(o->v, 0, 0);
    func_ov123_0206d228();
    *(int *) (c + 0xf8) = 0;
    r                   = func_ov123_0206d0b4(&us, &ti);
    *o->o1              = us;
    *o->o2              = r;
    b->fl |= 4;
    func_0200e644(c + 0xe0);
    return 0;
}
