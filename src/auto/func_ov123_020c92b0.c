struct E {
    unsigned short a, b, c, d;
};
extern struct E *data_ov123_020e4718[];
extern int func_ov123_020c8f80(int, int);
extern int func_ov123_020c9018(int, unsigned short, int);
extern void func_ov123_020c9324(int, int, int);
int func_ov123_020c92b0(int a, int b, int c) {
    int r = func_ov123_020c9018(a, data_ov123_020e4718[a][b].a, c);
    func_ov123_020c9324(a, b, func_ov123_020c8f80(r, 0));
    return r;
}
