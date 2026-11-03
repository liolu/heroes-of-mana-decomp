typedef signed short s16;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef struct {
    u32 id : 8;
    u32 b8 : 14;
    u32 z : 10;
} X;
typedef struct {
    u32 lo : 16;
    u32 rest : 16;
} Lo;
typedef struct {
    u32 b0 : 1;
    u32 r : 31;
} B0;
typedef struct {
    u32 f0 : 8;
    u32 f8 : 8;
    u32 b16 : 1;
    u32 b17 : 1;
    u32 b18 : 1;
    u32 b19 : 2;
    u32 b21 : 1;
    u32 b22 : 1;
    u32 b23 : 1;
    u32 b24 : 1;
    u32 r : 7;
} EF;
typedef struct {
    u32 lo : 16;
    u32 mid : 8;
    u32 b24 : 1;
    u32 b25 : 1;
    u32 b26 : 1;
    u32 b27 : 1;
    u32 r : 4;
} WF;
typedef struct {
    u16 a : 1;
    u16 v : 8;
    u16 r : 7;
} HV;
typedef struct {
    u32 w[4];
    u32 a : 22;
    u32 id : 8;
    u32 z : 2;
} Ent;
typedef struct {
    u8 p0[4];
    u8 *p4;
    u8 *p8;
    u8 pc[0xc];
    u32 w18;
    u8 p1c[8];
    HV h24;
    s16 s26;
    s16 s28;
    u8 p2a[2];
    WF w2c;
    u8 p30[0xa4];
    s16 d4;
    HV d6;
    u8 pd8[0xe14];
    Lo eec;
    EF ef0;
} G;
typedef struct {
    u8 pad[0x2c];
    Ent *e;
} Q;
extern G data_ov120_020f4200;
extern Q *data_0203673c;
extern s32 func_ov120_020ea5fc(s32);
extern void SetMissonFlag(s32, s32);
extern void func_ov120_020ea550(void);
extern void func_ov120_020ea3c8(s32);
extern void func_ov120_020f02b8(void);
void func_ov120_020ea634(void) {
    s32 i;
    data_ov120_020f4200.ef0.b16 = 0;
    data_ov120_020f4200.ef0.b17 = 1;
    data_ov120_020f4200.ef0.b18 = 1;
    data_ov120_020f4200.eec.lo  = 1;
    data_ov120_020f4200.ef0.b21 = 0;
    data_ov120_020f4200.w2c.b25 = 0;
    data_ov120_020f4200.d6.a    = 0;
    data_ov120_020f4200.s28     = 0;
    data_ov120_020f4200.d4      = -1;
    data_ov120_020f4200.s26     = -1;
    data_ov120_020f4200.w2c.b26 = 0;
    data_ov120_020f4200.w18     = (data_ov120_020f4200.w18 & ~0xff) | 0x23;
    data_ov120_020f4200.d6.v    = 0x23;
    data_ov120_020f4200.h24.v   = 0x23;
    data_ov120_020f4200.w2c.lo  = 0x23;
    data_ov120_020f4200.w2c.mid = 0x23;
    data_ov120_020f4200.w2c.b24 = 0;
    data_ov120_020f4200.ef0.b23 = 0;
    data_ov120_020f4200.ef0.f8  = 0x23;
    {
        u8 v;
        for (i = 0x32; i <= 0x5c; i++) {
            SetMissonFlag(i, func_ov120_020ea5fc(i));
            v                                    = i;
            data_0203673c->e[i - 0x32 + 0x32].id = v;
        }
    }
    if (data_ov120_020f4200.ef0.b24) {
        data_ov120_020f4200.d4      = 0;
        data_ov120_020f4200.s26     = 0;
        data_ov120_020f4200.ef0.b16 = 1;
        data_ov120_020f4200.eec.lo  = 0x80;
        func_ov120_020f02b8();
        return;
    }
    func_ov120_020ea550();
    if (data_ov120_020f4200.ef0.b22) {
        func_ov120_020ea3c8(((Ent *) data_ov120_020f4200.p8)->id);
        data_ov120_020f4200.d4      = 0;
        data_ov120_020f4200.s26     = 0;
        data_ov120_020f4200.ef0.b16 = 1;
        data_ov120_020f4200.eec.lo  = 8;
        func_ov120_020f02b8();
        return;
    }
    func_ov120_020f02b8();
    if (((B0 *) (data_ov120_020f4200.p4 + data_ov120_020f4200.s28 * 0x14))->b0) {
        data_ov120_020f4200.w2c.b27 = 1;
    }
}
