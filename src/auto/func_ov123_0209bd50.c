/* compiler: 1.2/sp3 */
typedef struct St {
    int *p0;
    unsigned int mode;
    unsigned char pad[0x28];
    int w30;
    unsigned int lo;
    unsigned int hi;
} St;
extern unsigned long long func_0200f510(void);
extern void func_ov123_0207c0b0(int *);
extern int func_ov123_02099548(void);
extern void func_ov123_0209b618(void);
extern void func_ov123_0209bce0(int, int);
extern St *data_ov123_020e18d4;

void func_ov123_0209bd50(void) {
    unsigned long long t;
    if (data_ov123_020e18d4 == 0) {
        return;
    }
    if (func_ov123_02099548() != 0) {
        return;
    }
    switch (data_ov123_020e18d4->mode) {
        case 1:
            func_ov123_0209b618();
            return;
        case 2:
        case 3:
        case 4:
            if (data_ov123_020e18d4->p0 != 0 && *data_ov123_020e18d4->p0 != 0) {
                func_ov123_0207c0b0(data_ov123_020e18d4->p0);
            }
            if (data_ov123_020e18d4->w30 == 0) {
                return;
            }
            t = func_0200f510() - *(unsigned long long *) ((unsigned char *) data_ov123_020e18d4 + 0x34);
            if ((t * 64) / 0x82EA > 0xEA60) {
                func_ov123_0209bce0(6, 0xFFFF1172);
                data_ov123_020e18d4->w30 = 0;
            }
            return;
        case 0:
        case 5:
        default:
            return;
    }
}
