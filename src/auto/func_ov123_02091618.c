/* compiler: 1.2/sp3 */
unsigned char func_ov123_02091360(void);
void func_ov123_02091440(void);
void func_ov123_020926fc(unsigned char *);
void func_ov123_02091374(int);
int func_ov123_02091618(void) {
    unsigned char x = func_ov123_02091360();
    if (x == 0 || x == 0x12) {
        func_ov123_02091440();
        return 1;
    }
    func_ov123_020926fc(&x);
    func_ov123_02091374(x);
    return 0;
}
