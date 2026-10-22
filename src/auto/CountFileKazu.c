/* compiler: 2.0/sp1p5 -profile */
extern int FS_SeekFile(void *, unsigned int, int);
extern void OS_FreeToHeap(int, int, void *);
extern unsigned int *func_0200ed38(int, int, int);
extern void func_0200fddc(void);
extern void func_0201360c(void *, unsigned int *, int);
extern unsigned int *changePosNoForOverSea(int, int *, int *);
extern int __PROFILE_ENTRY;
extern int data_ov000_020508cc;
extern int data_02036744;

unsigned int CountFileKazu(int arg16, unsigned int *p, ...) {
    int sp0[10];
    int i;
    unsigned int *tbl;
    unsigned int *buf;
    unsigned int off;
    unsigned int res;
    tbl = changePosNoForOverSea((int) p, &arg16, sp0);
    buf = func_0200ed38(0, -1, 0x10);
    p   = tbl + 1;
    if (FS_SeekFile(&data_02036744, *tbl * 4 + 4, 0) == 0) {
        func_0200fddc();
    }
    func_0201360c(&data_02036744, buf, 8);
    off = *buf;
    i   = 0;
    if (arg16 - 1 > 0) {
        do {
            if (FS_SeekFile(&data_02036744, off, 0) == 0) {
                func_0200fddc();
            }
            func_0201360c(&data_02036744, buf, 4);
            if (*buf <= *p) {
                *p = 0;
            }
            if (FS_SeekFile(&data_02036744, off + (*p++ * 4 + 4), 0) == 0) {
                func_0200fddc();
            }
            func_0201360c(&data_02036744, buf, 8);
            i++;
            off = *buf;
        } while (i < arg16 - 1);
    }
    if (FS_SeekFile(&data_02036744, off, 0) == 0) {
        func_0200fddc();
    }
    func_0201360c(&data_02036744, buf, 4);
    res = *buf;
    if (buf != 0) {
        OS_FreeToHeap(0, -1, buf);
    }
    return res;
}
