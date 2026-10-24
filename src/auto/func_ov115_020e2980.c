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
    u32 b8 : 8;
    u32 rest : 16;
} F1;
typedef struct {
    u32 p0 : 16;
    u32 b16 : 1;
    u32 rest : 15;
} F2;
typedef struct {
    u8 pad[0x858];
    F1 f1;
    F2 f2;
} G;
extern G data_ov115_020e9160;
void func_ov115_020e28d4(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(TP *);
int func_ov115_020e35b4(int, int, int, int, int, int);
int func_ov115_020e2980(int a) {
    TP t;
    for (;;) {
        func_ov115_020e28d4();
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
            int r = func_ov115_020e35b4(t.x, t.y, 0, 0x34, data_ov115_020e9160.f2.b16, data_ov115_020e9160.f1.b8);
            if (r != a) {
                return 0;
            }
        }
    }
    return 1;
}
