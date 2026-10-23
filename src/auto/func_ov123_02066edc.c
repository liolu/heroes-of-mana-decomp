/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef struct G {
    u8 pad0[0x2260];
    int w2260;
    u32 w2264;
    u8 pad1[0x2280 - 0x2268];
    s16 h2280;
    u8 pad2[2];
    u32 w2284;
    int w2288;
    u16 h228c;
    s16 h228e;
} G;
typedef struct A {
    u8 pad0[2];
    u16 h2;
    u8 pad1[4];
    u16 h8;
    u16 ha;
    u8 pad2[2];
    u16 he;
    u32 w10[16];
    u16 h50[16];
} A;
extern G *data_ov123_020df180;
extern void DC_InvalidateRange(int, u16);
extern int WM_EndScan(void *);
extern int func_020197dc(void *, void *);
extern u32 func_ov123_020664c0(u32);
extern int func_ov123_020664e4(u16);
extern void func_ov123_0206759c(void);
extern void func_ov123_020676ac(int);
extern void func_ov123_02067754(int, int, u32, void *, int);
extern void func_ov123_020677b0(int, int, int, int);
extern int func_ov123_02067800(u16);
extern void func_ov123_02068d0c(u32, u16);
extern void func_ov123_02066e48(void);
extern void func_ov123_02066edc(A *);
void func_ov123_02066edc(A *arg0) {
    int r4;
    int i;
    u32 t;
    u32 n;
    r4 = 0x14;
    switch (arg0->h2) {
        case 0:
            if (data_ov123_020df180->w2260 == 5) {
                func_ov123_020676ac(6);
                func_ov123_020677b0(0, 0, 0, 0x704);
            }
            switch (data_ov123_020df180->w2260) {
                case 6:
                    data_ov123_020df180->h2280 = 7;
                    if (arg0->h8 == 5) {
                        DC_InvalidateRange(data_ov123_020df180->w2288, data_ov123_020df180->h228c);
                        for (i = 0; i < (int) arg0->he; i++) {
                            func_ov123_02068d0c(arg0->w10[i], arg0->h50[i]);
                            func_ov123_02067754(7, 0, arg0->w10[i], arg0, 0x71a);
                        }
                    }
                    if ((data_ov123_020df180->w2264 & 0xc00000) == 0xc00000) {
                        t = func_ov123_020664c0(data_ov123_020df180->w2264 & 0x3ffe);
                        if (t != 0) {
                            n = data_ov123_020df180->w2284;
                            if (n % t == 0) {
                                func_ov123_02067754(8, 0, n, 0, 0x728);
                            }
                        }
                    }
                    data_ov123_020df180->h228e = (1 << func_ov123_02067800((u16) (0x20 - func_ov123_020664e4(arg0->ha)))) >> 1;
                    DC_InvalidateRange(data_ov123_020df180->w2288, data_ov123_020df180->h228c);
                    data_ov123_020df180->w2284 = data_ov123_020df180->w2284 + 1;
                    r4                         = func_020197dc(func_ov123_02066edc, (u8 *) data_ov123_020df180 + 0x2288);
                    break;
                case 7:
                    r4 = WM_EndScan(func_ov123_02066e48);
                    break;
                case 13:
                    func_ov123_0206759c();
                    return;
                default:
                    break;
            }
            if (r4 == 2) {
                return;
            }
            if (r4 != 3 && r4 == 8) {
                func_ov123_020676ac(0xc);
                func_ov123_020677b0(1, 0, 0, 0x753);
                return;
            }
            func_ov123_020676ac(0xb);
            func_ov123_020677b0(7, 0, 0, 0x75c);
            return;
        case 1:
            func_ov123_0206759c();
            return;
        case 2:
        case 3:
        case 4:
        default:
            func_ov123_020676ac(0xb);
            func_ov123_020677b0(7, 0, 0, 0x76d);
            return;
    }
}
