/* compiler: 1.2/sp3 */
extern int func_ov123_020ca7c0(void *);
extern int func_ov123_020ca8bc(int);
extern int func_ov123_020ca8e0(int);
extern void func_ov123_020ae100(int);
extern void func_ov123_020ae668(unsigned short, unsigned short, unsigned short, unsigned short);
extern void func_ov123_020b474c(int);
extern unsigned char data_ov123_020d7e80[];
extern unsigned char data_ov123_020e460c;

void func_ov123_020b4a74(void) {
    unsigned int i;
    unsigned char *p;
    p = data_ov123_020d7e80;
    for (i = 0; i < 3; i++, p += 8) {
        if (func_ov123_020ca7c0(p) != 0) {
            int o;
            func_ov123_020ae100(1);
            data_ov123_020e460c = i;
            o                   = data_ov123_020e460c * 8;
            func_ov123_020ae668(
                *(unsigned short *) (data_ov123_020d7e80 + 0x18 + o), *(unsigned short *) (data_ov123_020d7e80 + 0x1c + o),
                *(unsigned short *) (data_ov123_020d7e80 + 0x1a + o), *(unsigned short *) (data_ov123_020d7e80 + 0x1e + o));
            return;
        }
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
        func_ov123_020b474c(1);
        return;
    }
    if (func_ov123_020ca8bc(0x80) == 0) {
        return;
    }
    func_ov123_020b474c(3);
}
