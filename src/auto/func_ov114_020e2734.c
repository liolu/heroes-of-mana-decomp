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
    u32 p0 : 8;
    u32 b8 : 1;
    u32 p9 : 4;
    u32 b13 : 8;
    u32 rest : 11;
} F;
typedef struct {
    u8 pad[0x514];
    F f;
} G;
extern G data_ov114_020e6148;
void func_ov114_020e2688(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(TP *);
int func_ov114_020e2438(int, int, int, int, int, int);
int func_ov114_020e2734(int a) {
    TP t;
    for (;;) {
        func_ov114_020e2688();
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
            int r = func_ov114_020e2438(t.x, t.y, 0, 15, data_ov114_020e6148.f.b8, data_ov114_020e6148.f.b13);
            if (r != a) {
                return 0;
            }
        }
    }
    return 1;
}
