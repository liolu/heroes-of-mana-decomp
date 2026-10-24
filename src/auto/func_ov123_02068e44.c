/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
extern int func_0200fa98(void);
extern void func_0200faac(int);
extern u8 *func_ov123_02067bac(void);
int func_ov123_02068e44(int on) {
    int s = func_0200fa98();
    u8 *p = func_ov123_02067bac();
    if (p == 0) {
        func_0200faac(s);
        return 0;
    }
    if (on) {
        on        = p[0x226a] != 0;
        p[0x226a] = 1;
    } else {
        on        = p[0x226a] != 0;
        p[0x226a] = 0;
    }
    func_0200faac(s);
    return on;
}
