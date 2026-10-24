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
    u8 pad[0xa10];
    struct {
        u32 b : 16;
        u32 rest : 16;
    } wa10;
    struct {
        u32 p0 : 16;
        u32 a : 1;
        u32 rest : 15;
    } wa14;
} G;
extern G data_ov120_020f46dc;
void func_ov120_020eb20c(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(TP *);
int func_ov120_020eaff4(int, int, int, int, int, int);
int func_ov120_020eb2b8(int a) {
    TP t;
    for (;;) {
        func_ov120_020eb20c();
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
            int r = func_ov120_020eaff4(t.x, t.y, 0, 35, data_ov120_020f46dc.wa14.a, data_ov120_020f46dc.wa10.b);
            if (r != a) {
                return 0;
            }
        }
    }
    return 1;
}
