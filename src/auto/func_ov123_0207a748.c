/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02020d04(void *, void *, s32, s32);
void func_ov123_0207a20c(void *);
void func_ov123_020996a0(void *);
extern u8 data_ov123_020d9ba0[];
extern u8 data_ov123_020d9b94[];
typedef struct {
    void **arr;
    s32 n;
} P;
void func_ov123_0207a748(P *p) {
    s32 i;
    if (p == NULL) {
        func_02020d04(data_ov123_020d9ba0, data_ov123_020d9b94, 0, 0x51);
    }
    if (p == NULL) {
        return;
    }
    for (i = 0; i < p->n; i++) {
        func_ov123_0207a20c(p->arr[i]);
    }
    func_ov123_020996a0(p->arr);
    func_ov123_020996a0(p);
}
