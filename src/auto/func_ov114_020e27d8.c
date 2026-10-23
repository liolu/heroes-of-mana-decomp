void func_ov114_020e2688(void);
void TP_RequestSamplingAsync(void);
int TP_WaitCalibratedResult(unsigned short *);
int func_ov114_020e27d8(void) {
    unsigned short buf[4];
    for (;;) {
        func_ov114_020e2688();
        do {
            TP_RequestSamplingAsync();
        } while (TP_WaitCalibratedResult(buf) != 0);
        if (buf[2] == 1) {
            if (buf[3] == 0) {
                return 0;
            }
        } else {
            return 1;
        }
    }
}
