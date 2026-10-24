#include "m2c.h"
typedef struct {
    u8 pad[0x650];
    s32 n;
    s32 *tbl;
} T;
extern T data_ov004_020cfaf0;
void func_ov004_020c1fe8(s32 a, s32 b);
void func_ov004_020c1ff8(s32 a, s32 b);
void func_ov004_020cb1dc(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 r;
    if (arg0 == -1) {
        return;
    }
    i = 0;
    r = 0;
    if (data_ov004_020cfaf0.n > 0) {
        do {
            s32 v = data_ov004_020cfaf0.tbl[i];
            if (v == arg0) {
                r = 1;
                goto done;
            }
            i++;
        } while (i < data_ov004_020cfaf0.n);
    }
    r = 0;
done:
    if (r == 0) {
        return;
    }
    func_ov004_020c1fe8(arg0, arg1 == 1 ? 1 : 0);
    func_ov004_020c1ff8(arg0, arg2);
}
