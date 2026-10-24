/* compiler: 1.2/sp3 */
extern signed char func_ov123_020ae120(void);
extern void func_ov123_020c36bc(int);
extern void func_ov123_020b2410(void *);
extern void func_ov123_020b5e94(void);
extern unsigned char data_ov123_020e462c;
void func_ov123_020b5ebc(void) {
    signed char r = func_ov123_020ae120();
    if (r != 0) {
        if (r != 1) {
            return;
        }
        data_ov123_020e462c = 1;
        func_ov123_020c36bc(6);
    } else {
        data_ov123_020e462c = 0;
        func_ov123_020c36bc(7);
    }
    func_ov123_020b2410(func_ov123_020b5e94);
}
