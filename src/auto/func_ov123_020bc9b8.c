/* compiler: 1.2/sp3 */
typedef unsigned int u32;
typedef struct G {
    char pad[0x40];
    signed char b40;
} G;
extern G *data_ov123_020e4674;
extern unsigned char data_ov123_020d802c[];
extern char func_ov123_020baca0;
extern char func_ov123_020bc62c;
extern int func_ov123_020bbe78(void);
extern void func_ov123_020c36bc(int);
extern void func_ov123_020bc940(int);
extern void func_ov123_020bc908(int);
extern void func_ov123_020baea8(void);
extern int func_ov123_020bacec(void);
extern void func_ov123_020c536c(int, int, int, int, int);
extern void func_ov123_020b2410(void *);
extern int func_ov123_020bb664(int);
extern void func_ov123_020bbd54(int, int, int);
extern void func_ov123_020bb938(void);
extern void func_ov123_020c2384(void);

void func_ov123_020bc9b8(u32 a) {
    if (func_ov123_020bbe78() == 0) {
        func_ov123_020c36bc(9);
        return;
    }
    switch (a) {
        case 2:
        case 3:
            func_ov123_020c36bc(6);
            func_ov123_020bc940(((a - 2) ^ 1) != 0);
            return;
        case 7:
        case 8:
            func_ov123_020c36bc(6);
            func_ov123_020bc908(((a - 7) ^ 1) != 0);
            return;
        default:
            data_ov123_020e4674->b40 = a;
            if (a - 0xb <= 1) {
                func_ov123_020baea8();
                if (func_ov123_020bacec() == 0) {
                    func_ov123_020c36bc(9);
                    func_ov123_020c536c(6, 1, 1, -1, 0);
                    func_ov123_020b2410(&func_ov123_020baca0);
                    return;
                }
                if (a == 0xb) {
                    func_ov123_020c36bc(6);
                } else {
                    func_ov123_020c36bc(0xe);
                }
            } else if (a == 0xd) {
                func_ov123_020baea8();
                func_ov123_020c36bc(7);
            } else {
                func_ov123_020c36bc(6);
                func_ov123_020bbd54(0, 1, func_ov123_020bb664(data_ov123_020d802c[a]));
                func_ov123_020bb938();
            }
            func_ov123_020c2384();
            func_ov123_020b2410(&func_ov123_020bc62c);
            return;
    }
}
