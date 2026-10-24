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
    u8 pad[0xab0];
    struct {
        u32 p0 : 8;
        u32 b : 16;
        u32 a : 1;
        u32 rest : 7;
    } wab0;
} G;
extern G data_ov117_020f23e0;
void func_ov117_020e39c8(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(TP *);
int func_ov117_020e4ecc(int, int, int, int, int, int);
int func_ov117_020e3b24(int a) {
    TP t;
    for (;;) {
        func_ov117_020e39c8();
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
            int r = func_ov117_020e4ecc(t.x, t.y, 0, 101, data_ov117_020f23e0.wab0.a, data_ov117_020f23e0.wab0.b);
            if (r != a) {
                return 0;
            }
        }
    }
    return 1;
}
