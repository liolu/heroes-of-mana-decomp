typedef unsigned short u16;
typedef int s32;
extern void TP_RequestSamplingAsync(void);
extern s32 TP_WaitCalibratedResult(u16 *p);
s32 func_ov111_020e4c28(void) {
    u16 buf[4];
    do {
        TP_RequestSamplingAsync();
    } while (TP_WaitCalibratedResult(buf) != 0);
    if (buf[2] == 1 && buf[3] == 0) {
        return 1;
    }
    return 0;
}
