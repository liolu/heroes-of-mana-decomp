/* compiler: 1.2/sp3 */
typedef struct H {
    unsigned short a;
    unsigned short b;
} H;
extern void func_ov123_020c36bc(int);
extern void func_ov123_020c37f4(int);
extern void func_ov123_020c8cb8(int, int, int);
extern void func_ov123_020c8d2c(int, int, int, unsigned short);
extern void func_ov123_020c8e38(int, int, int, unsigned char);
extern int func_ov123_020c92b0(int, unsigned char, int);
extern int *func_ov123_020ca4ec(int, int);
extern int func_ov123_020cb6ac(int, void *, int, int);
extern unsigned char data_ov123_020d82e8[];
extern unsigned char data_ov123_020d82f8[];
extern H data_ov123_020d8308[];
extern int *data_ov123_020e46dc;
extern unsigned char func_ov123_020c414c;

void func_ov123_020c4230(int a) {
    int i;
    unsigned char *p9;
    unsigned char *p8;
    int zero;
    data_ov123_020e46dc = func_ov123_020ca4ec(0x1C, 4);
    p9                  = data_ov123_020d82e8 + a * 5;
    p8                  = data_ov123_020d82f8 + a * 5;
    zero                = 0;
    for (i = 0; i < 5; i++) {
        data_ov123_020e46dc[i] = func_ov123_020c92b0(1, *p9, 1);
        func_ov123_020c8cb8(data_ov123_020e46dc[i], -1, 0);
        func_ov123_020c8d2c(data_ov123_020e46dc[i], -1, -0x2A, data_ov123_020d8308[i].b);
        func_ov123_020c8e38(data_ov123_020e46dc[i], -1, zero, *p8);
        p9++;
        p8++;
    }
    data_ov123_020e46dc[5] = func_ov123_020cb6ac(0, &func_ov123_020c414c, 0, 0x78);
    func_ov123_020c37f4(a);
    func_ov123_020c36bc(0xD);
}
