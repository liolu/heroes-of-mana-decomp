/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    char p[0x760];
    unsigned f : 1;
    unsigned r : 31;
} G;
extern G *data_ov000_02051548;
extern int CheckMoveLookPos(void);
extern void OS_SleepThread(int);
void WaitSyncCamera(void) {
    while (!CheckMoveLookPos()) {
        data_ov000_02051548->f = 0;
        OS_SleepThread(0);
    }
}
