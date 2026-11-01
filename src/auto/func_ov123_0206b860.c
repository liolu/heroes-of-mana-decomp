/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 data_ov123_020df1f0[];
extern u8 data_ov123_020df53c[];
extern void func_ov123_0206d318(void);
extern void func_ov123_0206d3bc(void);
extern void func_ov123_0206d34c(u32 a, u32 b, u32 c);
extern u8 *func_ov123_0206c040(u8 *p, u32 a, u32 b);
extern u32 func_ov123_0206c000(u32 a, u32 b, u32 c, u32 d);
extern void func_ov123_0206c804(u8 *p, u32 n);
extern void func_ov123_0206d2f8(void);

void func_ov123_0206b860(void) {
    u8 *p4;
    u8 *r0;
    u8 *r2;
    u32 r;
    func_ov123_0206d318();
    func_ov123_0206d3bc();
    func_ov123_0206d34c(0x44, 0x43, data_ov123_020df1f0[0]);
    p4  = data_ov123_020df53c + 0x2a;
    r0  = func_ov123_0206c040(p4, 7, 0);
    *r0 = 0xff;
    r2  = r0 + 1;
    r   = func_ov123_0206c000(0, 0x12c, (u32) r2, (u32) (r2 - p4));
    func_ov123_0206c804(p4, (u32) (r - (u32) p4));
    func_ov123_0206d2f8();
}
