/* compiler: 1.2/sp2p3 */
extern void *data_ov123_020df180;
extern int func_ov123_02066acc;
int WM_Disconnect(int *, int);
void func_ov123_020676ac(int);
void func_ov123_0206759c(void);
void func_ov123_020677b0(int, void *, int, int);
void func_ov123_02066850(void *arg0) {
    int r;
    switch (*(unsigned short *) ((unsigned char *) arg0 + 2)) {
        case 0:
            if (*(int *) ((unsigned char *) data_ov123_020df180 + 0x2260) == 0xC) {
                func_ov123_020676ac(0xA);
                func_ov123_0206759c();
                return;
            }
            r = WM_Disconnect(&func_ov123_02066acc, 0);
            switch (r) {
                case 2:
                    return;
                case 8:
                    func_ov123_020676ac(0xC);
                    func_ov123_020677b0(1, (unsigned char *) data_ov123_020df180 + 0x2140, 0, 0x8B4);
                    return;
                case 3:
                    func_ov123_020676ac(0xA);
                    func_ov123_0206759c();
                    return;
                default:
                    func_ov123_020676ac(0xB);
                    func_ov123_020677b0(7, (unsigned char *) data_ov123_020df180 + 0x2140, 0, 0x8C0);
                    return;
            }
        case 1:
        case 3:
            func_ov123_020676ac(0xA);
            func_ov123_0206759c();
            return;
        case 2:
        case 4:
        default:
            func_ov123_020676ac(0xB);
            func_ov123_020677b0(7, (unsigned char *) data_ov123_020df180 + 0x2140, 0, 0x8D3);
            return;
    }
}
