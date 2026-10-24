/* compiler: 1.2/sp2p3 */
typedef struct {
    unsigned char pad[0xc];
    int v;
} C;
typedef struct {
    unsigned char pad[0x64];
    struct {
        unsigned char pad[0xc4];
        C *c;
        unsigned char p2[0];
    } *x;
} Dummy;
typedef struct {
    unsigned char pad[0xc4];
    C *c;
} B;
typedef struct {
    unsigned char pad[0x64];
    B *b;
} A2;
typedef struct {
    unsigned char pad[0x73];
    unsigned char st;
} A;
typedef struct {
    int pad;
    A *a;
    int p2;
    int p3;
    int v;
} O;
extern void OS_LockMutex(void *);
extern void func_ov123_020740d4(int);
extern void func_0200e644(void *);
int func_ov123_02073e58(O *o) {
    unsigned char *a = (unsigned char *) o->a;
    unsigned char *b = *(unsigned char **) (a + 0x64);
    C *c             = *(C **) (b + 0xc4);
    OS_LockMutex(b + 0xe0);
    if (o->v != 0) {
        c->v = o->v;
        func_ov123_020740d4(1);
        a[0x73] = 4;
    } else {
        a[0x73] = 0;
        func_ov123_020740d4(0);
        c->v = 0;
    }
    func_0200e644(b + 0xe0);
    return 0;
}
