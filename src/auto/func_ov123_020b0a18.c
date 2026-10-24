/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    void *a[4];
    void *b[10];
    void *c[2];
    void *d[2];
    void *e[4];
} S;
extern S *data_ov123_020e45c0;
extern void func_ov123_020cb5f8(s32, s32);
extern void func_ov123_020c8f8c(void *);
extern void func_ov123_020c9e10(void *);
extern void func_ov123_020cae80(void *);
extern void func_ov123_020ca49c(void *);

void func_ov123_020b0a18(s32 arg) {
    s32 i;
    func_ov123_020cb5f8(0, arg);
    for (i = 0; i < 4; i++) {
        func_ov123_020c8f8c(data_ov123_020e45c0->e[i]);
        func_ov123_020c9e10(data_ov123_020e45c0->a[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov123_020c8f8c(data_ov123_020e45c0->d[i]);
    }
    for (i = 0; i < 2; i++) {
        func_ov123_020cae80(data_ov123_020e45c0->c[i]);
    }
    for (i = 0; i < 10; i++) {
        func_ov123_020cae80(data_ov123_020e45c0->b[i]);
    }
    func_ov123_020ca49c(&data_ov123_020e45c0);
}
