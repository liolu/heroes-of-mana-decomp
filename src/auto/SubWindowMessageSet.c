/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int pad[4];
    unsigned int bits;
} St;
typedef struct {
    void (*fn[5])(void);
} Vt;
extern St *data_ov000_02051548;
extern unsigned char data_ov003_020b54e8[];
void func_ov121_020f3524(int, int);
int func_ov121_020f3c60(void);
void func_ov121_020f3af8(void);
int CallTrsForLoop(void);
int SubWindowMessageSet(int a0, int a1, int a2, int a3) {
    int skip;
    int r;
    func_ov121_020f3524(a0, a1);
    skip = (a2 == 0);
    while (1) {
        if (!skip && a2 == ((data_ov000_02051548->bits << 26) >> 28)) {
            r = 5;
            break;
        }
        r = func_ov121_020f3c60();
        if (r == 14) {
            func_ov121_020f3af8();
            return 14;
        }
        if (CallTrsForLoop() == 0 && a3 != 1) {
            (*(void (**)(void))(*(unsigned char **) (data_ov003_020b54e8 + 0xF44) + 0x10))();
            return 15;
        }
        if (a3 == 0 && ((data_ov000_02051548->bits << 26) >> 28) == 11) {
            r = 13;
        }
        if (a3 == 1 && r == 15) {
            continue;
        }
        if (r == 0) {
            continue;
        }
        break;
    }
    func_ov121_020f3af8();
    return r;
}
