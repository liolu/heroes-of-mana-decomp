typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 valid;
} TP;
typedef struct {
    u8 pad[0x9a8];
    struct {
        u32 b : 8;
        u32 p8 : 8;
        u32 a : 1;
        u32 rest : 15;
    } w9a8;
} G;
extern G data_ov116_020e71a8;
void func_ov116_020e22e4(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(TP *);
int func_ov116_020e2764(int, int, int, int, int, int);
int func_ov116_020e2330(int a) {
    TP t;
    for (;;) {
        func_ov116_020e22e4();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(&t) != 0);
        if (t.touch != 1) {
            break;
        }
        if (t.valid != 0) {
            continue;
        }
        {
            int r = func_ov116_020e2764(t.x, t.y, 0, 16, data_ov116_020e71a8.w9a8.a, data_ov116_020e71a8.w9a8.b);
            if (r != a) {
                return 0;
            }
        }
    }
    return 1;
}
