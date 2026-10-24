typedef unsigned int u32;
typedef struct G {
    u32 flags;
    char mtx[0x28];
    int fd;
    char pad[0x19e8 - 0x30];
    void (*cb)(int, int);
    int cbarg;
    char pad2[8];
    int *buf;
} G;
extern G *data_ov123_020e47a0;
extern void OS_SleepThread(int);
extern void OS_LockMutex(void *);
extern void func_0200e644(void *);
extern int func_ov123_02073c80(int, void *, int);
extern void func_ov123_02073bc4(int, int);

void func_ov123_020cd2dc(void) {
    int r7;
    char *r8 = 0;
    int r9   = 0;
    int r10  = 0;
    u32 fl   = data_ov123_020e47a0->flags;
    if (!(fl & 0x100)) {
        for (;;) {
            if (!(fl & 0x20)) {
                OS_SleepThread(0);
            }
            fl = data_ov123_020e47a0->flags;
            if (fl & 0x100) {
                break;
            }
            if (fl & 0x200) {
                break;
            }
            if (fl & 0x20) {
                if (r8 == 0) {
                    int *b = data_ov123_020e47a0->buf;
                    if (b != 0) {
                        r9  = *b;
                        r8  = (char *) b;
                        r10 = 0;
                    }
                }
                r7 = 0;
                OS_LockMutex(data_ov123_020e47a0->mtx);
                if (data_ov123_020e47a0->fd >= 0) {
                    r7 = func_ov123_02073c80(data_ov123_020e47a0->fd, r8 + r10, r9 - r10);
                }
                func_0200e644(data_ov123_020e47a0->mtx);
                if (r7 > 0) {
                    r10 += r7;
                    if (r10 >= r9) {
                        r8 = 0;
                        data_ov123_020e47a0->flags &= ~0x20;
                        if (data_ov123_020e47a0->cb != 0) {
                            data_ov123_020e47a0->cb(1, data_ov123_020e47a0->cbarg);
                        }
                    }
                } else {
                    r8 = 0;
                    data_ov123_020e47a0->flags &= ~0x20;
                    if (data_ov123_020e47a0->cb != 0) {
                        data_ov123_020e47a0->cb(0, data_ov123_020e47a0->cbarg);
                    }
                }
            }
            fl = data_ov123_020e47a0->flags;
            if (fl & 0x100) {
                break;
            }
        }
    }
    OS_LockMutex(data_ov123_020e47a0->mtx);
    if (data_ov123_020e47a0->fd >= 0) {
        func_ov123_02073bc4(data_ov123_020e47a0->fd, 2);
    }
    func_0200e644(data_ov123_020e47a0->mtx);
}
