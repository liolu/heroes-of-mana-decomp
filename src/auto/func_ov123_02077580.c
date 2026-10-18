/* compiler: 1.2/sp2p3 */
int func_0200fa98();
void func_0200faac(int);
int func_020213f0(unsigned char *, int, int);
extern unsigned char data_ov123_020e0c04[];
void func_ov123_02077580(int arg0) {
    int i;
    int t;
    unsigned char *p;
    t = func_0200fa98();
    p = data_ov123_020e0c04;
    for (i = 0; i < 4; i++) {
        if ((p[0x5A] != 0) && (func_020213f0(p, arg0 + 0x74, 0x20) == 0)) {
            p[0x5A] = 0;
            break;
        }
        p += 0x5C;
    }
    func_0200faac(t);
}
