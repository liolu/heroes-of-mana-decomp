#include "m2c.h"

typedef struct Q {
    u8 pad[0xBD4];
    s32 f;
    void (*cb)(void *);
} Q;
typedef struct G {
    u8 pad[8];
    Q *q;
} G;
void OS_LockMutex(void *);
void func_0200e644(void *);
extern G data_ov123_020e47a4;

void func_ov123_020cdfd4(void *arg) {
    if (data_ov123_020e47a4.q == 0) {
        return;
    }
    if (arg != 0) {
        void (*f)(void *);
        OS_LockMutex((u8 *) data_ov123_020e47a4.q + 0x12C + 0xC00);
        data_ov123_020e47a4.q->f = 0;
        func_0200e644((u8 *) data_ov123_020e47a4.q + 0x12C + 0xC00);
        f = data_ov123_020e47a4.q->cb;
        if (f != 0) {
            data_ov123_020e47a4.q->cb = 0;
            f(arg);
        }
    } else {
        OS_LockMutex((u8 *) data_ov123_020e47a4.q + 0x12C + 0xC00);
        data_ov123_020e47a4.q->f = 1;
        func_0200e644((u8 *) data_ov123_020e47a4.q + 0x12C + 0xC00);
    }
}
