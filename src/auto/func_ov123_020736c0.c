/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef struct Dst {
    int f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 f10;
    u32 f14;
    void *f18;
    void *f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
} Dst;
typedef struct Src {
    int p0;
    int p4;
    int p8;
    int pc;
    u32 p10;
    u32 p14;
    u32 p18;
    u32 p1c;
    u32 p20;
    int p24;
    int p28;
    int p2c;
    int p30;
} Src;
extern Dst data_ov123_020e0aac;
extern int data_ov123_020e0a7c;
extern int data_ov123_020e0a80;
extern void func_ov123_02073844(void);
extern void func_ov123_02073884(void);
extern void func_ov123_02070c34(Dst *);
void func_ov123_020736c0(Src *arg0) {
    data_ov123_020e0aac.f0 = (arg0->pc == 1) ? 1 : 0;
    data_ov123_020e0aac.f4 = ((arg0->p10 >> 24) & 0xff) | ((arg0->p10 >> 8) & 0xff00) | ((arg0->p10 << 8) & 0xff0000) |
                             ((arg0->p10 << 24) & 0xff000000);
    data_ov123_020e0aac.f8 = ((arg0->p14 >> 24) & 0xff) | ((arg0->p14 >> 8) & 0xff00) | ((arg0->p14 << 8) & 0xff0000) |
                             ((arg0->p14 << 24) & 0xff000000);
    data_ov123_020e0aac.fc = ((arg0->p18 >> 24) & 0xff) | ((arg0->p18 >> 8) & 0xff00) | ((arg0->p18 << 8) & 0xff0000) |
                             ((arg0->p18 << 24) & 0xff000000);
    data_ov123_020e0aac.f10 = ((arg0->p1c >> 24) & 0xff) | ((arg0->p1c >> 8) & 0xff00) | ((arg0->p1c << 8) & 0xff0000) |
                              ((arg0->p1c << 24) & 0xff000000);
    data_ov123_020e0aac.f14 = ((arg0->p20 >> 24) & 0xff) | ((arg0->p20 >> 8) & 0xff00) | ((arg0->p20 << 8) & 0xff0000) |
                              ((arg0->p20 << 24) & 0xff000000);
    data_ov123_020e0aac.f18 = func_ov123_02073884;
    data_ov123_020e0aac.f1c = func_ov123_02073844;
    data_ov123_020e0a80     = arg0->p4;
    data_ov123_020e0a7c     = arg0->p8;
    data_ov123_020e0aac.f20 = 0x40;
    data_ov123_020e0aac.f30 = arg0->p2c;
    data_ov123_020e0aac.f34 = arg0->p30;
    func_ov123_02070c34(&data_ov123_020e0aac);
}
