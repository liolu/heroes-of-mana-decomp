#include "m2c.h"
typedef struct {
    void *vt;
    u8 pad[0x34 - 4];
    s32 n;
    s32 *arr;
} T;
extern u8 data_ov004_020cf74c[];
void func_ov004_020c9c78(T *, s32);
void func_0202f49c(void *);
void func_ov004_020c988c(void *);
void func_ov004_020c921c(void *);

T *func_ov004_020c9ba8(T *t) {
    s32 i;
    t->vt = data_ov004_020cf74c;
    for (i = 0; i < t->n; i++) {
        func_ov004_020c9c78(t, t->arr[i]);
    }
    func_0202f49c(t->arr);
    func_ov004_020c988c((u8 *) t + 0x28);
    func_ov004_020c921c((u8 *) t + 4);
    return t;
}
