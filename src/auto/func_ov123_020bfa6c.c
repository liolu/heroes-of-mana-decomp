/* compiler: 1.2/sp3 */
typedef struct S22 {
    char c[22];
} S22;
extern void func_ov123_020ae580(void *, void *);
extern void *func_ov123_020ae5c8(S22 *);
extern int func_ov123_020c887c(void *, int, int);
extern void func_ov123_020ca400(int, int);
extern unsigned char GX_LoadBGPltt;
extern unsigned char GX_LoadOBJPltt;
extern S22 data_ov123_020d8110;
extern unsigned char data_ov123_020de148;
extern unsigned char data_ov123_020de15c;
extern unsigned char data_ov123_020de174;
extern unsigned char data_ov123_020de18c;
extern int *data_ov123_020e4694;
extern unsigned char func_0200bb64;
extern unsigned char func_0200be04;

void func_ov123_020bfa6c(void) {
    S22 s = data_ov123_020d8110;
    func_ov123_020ae580(&data_ov123_020de148, &GX_LoadOBJPltt);
    func_ov123_020ae580(&data_ov123_020de15c, &func_0200be04);
    func_ov123_020ae580(&data_ov123_020de174, &GX_LoadBGPltt);
    func_ov123_020ae580(&data_ov123_020de18c, &func_0200bb64);
    *data_ov123_020e4694 = func_ov123_020c887c(func_ov123_020ae5c8(&s), 0, 4);
    func_ov123_020ca400(1, 0x10);
    *(unsigned short *) 0x04001008 = (*(unsigned short *) 0x04001008 & ~3) | 3;
    *(unsigned short *) 0x0400100A = (*(unsigned short *) 0x0400100A & ~3) | 3;
    *(unsigned short *) 0x0400000A = (*(unsigned short *) 0x0400000A & ~3) | 3;
    *(unsigned short *) 0x0400000C = (*(unsigned short *) 0x0400000C & ~3) | 3;
}
