/* compiler: 1.2/sp3 */
extern void func_ov123_020ae100(int);
extern void func_ov123_020bf0ac(int);
extern void func_ov123_020bf2cc(void);
extern int func_ov123_020ca7c0(void *);
extern int func_ov123_020ca8bc(int);
extern int func_ov123_020ca8e0(int);
extern unsigned char data_ov123_020d8140[];
extern unsigned char data_ov123_020e4690;

void func_ov123_020bf730(void) {
    unsigned int i;
    unsigned char *p;
    p = data_ov123_020d8140;
    for (i = 0; i < 7; i++) {
        if (func_ov123_020ca7c0(p) != 0) {
            func_ov123_020ae100(1);
            data_ov123_020e4690 = i;
            func_ov123_020bf2cc();
            return;
        }
        p += 8;
    }
    if (func_ov123_020ca8e0(1) != 0) {
        func_ov123_020ae100(1);
        return;
    }
    if (func_ov123_020ca8e0(2) != 0) {
        func_ov123_020ae100(0);
        return;
    }
    if (func_ov123_020ca8bc(0x40) != 0) {
        func_ov123_020bf0ac(1);
        return;
    }
    if (func_ov123_020ca8bc(0x80) != 0) {
        func_ov123_020bf0ac(3);
        return;
    }
    if (func_ov123_020ca8bc(0x20) != 0) {
        func_ov123_020bf0ac(0);
        return;
    }
    if (func_ov123_020ca8bc(0x10) == 0) {
        return;
    }
    func_ov123_020bf0ac(2);
}
