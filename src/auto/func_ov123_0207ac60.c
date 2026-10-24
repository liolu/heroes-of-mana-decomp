extern unsigned short func_0200f498(void);
extern void func_02020d04(void *, void *, int, int);
extern unsigned long long func_0200f510(void);
extern char data_ov123_020d9bec[], data_ov123_020d9c0c[];
void func_ov123_0207ac60(unsigned *out) {
    if (func_0200f498() != 1) {
        func_02020d04(data_ov123_020d9bec, data_ov123_020d9c0c, 0, 0x667);
    }
    {
        unsigned long long t = func_0200f510();
        unsigned long long r = (t * 64) / 0x1ff6210;
        if (out != 0) {
            *out = (unsigned) r;
        }
    }
}
