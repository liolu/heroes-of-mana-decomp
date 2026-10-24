/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef struct Cfg {
    int a0;
    char pad[0x14];
    int a18, a1c;
    int pad20;
    int a24, a28, a2c, a30;
    u32 a34;
} Cfg0;
typedef struct Cf {
    int a0;
    char pad[0x14];
    int a18, a1c;
    int pad20;
    int a24, a28, a2c, a30;
    u32 a34;
} Cf;
typedef struct Out {
    int a0, a4, a8;
    void *ac;
    void *a10;
    int a14, a18, a1c, a20, a24, a28, a2c;
} Out;
typedef struct Hd {
    char pad[0x18];
    int (*f18)(int);
} Hd;
extern Hd *data_ov123_020e0a00;
extern char data_ov123_020d9880[];
extern int data_ov123_020df220;
extern int data_ov123_020e0a04, data_ov123_020e0a08, data_ov123_020e0a0c;
extern Out data_ov123_020e0a14;
extern char func_ov123_0206fe30, func_ov123_020709b4, func_ov123_020709d8, func_ov123_020709f0, func_ov123_02072ac0;
extern void MI_CpuFill8(void *, int, int);
extern void func_ov123_0207045c(int);
extern void func_ov123_02069230(void *);
extern void func_ov123_020704f8(void *);
extern void func_ov123_02070568(void *);

void func_ov123_02070a6c(void) {
    Out *o = &data_ov123_020e0a14;
    Cf *c  = (Cf *) data_ov123_020e0a00;
    int r0, r2;
    u32 ip;
    MI_CpuFill8(o, 0, 0x30);
    o->a4  = c->a18;
    o->a8  = c->a1c;
    o->a10 = &func_ov123_020709b4;
    o->a14 = 0;
    o->a18 = 0;
    o->a2c = data_ov123_020e0a04;
    r0     = c->a24;
    if (r0 != 0) {
        o->a20 = r0;
    } else {
        o->a20 = 0x4000;
    }
    r0 = c->a28;
    if (r0 != 0) {
        o->a1c = r0;
    } else {
        o->a1c = data_ov123_020e0a00->f18(o->a20);
    }
    r0 = c->a30;
    ip = c->a34;
    if (r0 == 0) {
        r0 = 0x240;
    }
    if (ip == 0) {
        ip = 0x10c0;
    }
    o->a24                               = r0 - 0x28;
    *(short *) (data_ov123_020d9880 + 2) = ip;
    *(short *) (data_ov123_020d9880 + 4) = (int) ip / 2;
    data_ov123_020df220                  = 0;
    if (c->a0 != 0) {
        data_ov123_020e0a0c = 1;
        o->a0               = 0;
        o->ac               = &func_ov123_020709d8;
        o->a28              = data_ov123_020e0a08;
    } else {
        data_ov123_020e0a0c = 0;
        o->a0               = 1;
        o->ac               = &func_ov123_020709f0;
    }
    r2 = c->a2c;
    if (r2 == 0) {
        r2 = 0xb;
    }
    func_ov123_0207045c(r2);
    func_ov123_02069230(&func_ov123_0206fe30);
    func_ov123_020704f8(&func_ov123_02072ac0);
    func_ov123_02070568(o);
}
