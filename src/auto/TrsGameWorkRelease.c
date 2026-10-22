/* compiler: 2.0/sp1p5 -profile */
extern void OS_FreeToHeap(int, int, void *);
extern void *data_ov003_020b5328;
void TrsGameWorkRelease(void) {
    if (data_ov003_020b5328 != 0) {
        OS_FreeToHeap(0, -1, data_ov003_020b5328);
        data_ov003_020b5328 = 0;
    }
}
