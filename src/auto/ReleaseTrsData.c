/* compiler: 2.0/sp1p5 -profile */
extern void *data_ov003_020aea88[5];
extern void OS_FreeToHeap(int, int, void *);
void ReleaseTrsData(void) {
    int i;
    for (i = 0; i < 5; i++) {
        void *p = data_ov003_020aea88[i];
        if (p != 0) {
            if (p != 0) {
                OS_FreeToHeap(0, -1, p);
                data_ov003_020aea88[i] = 0;
            }
            data_ov003_020aea88[i] = 0;
        }
    }
}
