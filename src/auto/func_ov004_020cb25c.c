/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct D {
    u8 pad[0x650];
    s32 count;
    s32 *arr;
} D;

extern D data_ov004_020cfaf0;
s32 func_ov004_020c1f94(s32);
s32 func_ov004_020cad5c(s32);
s32 func_ov004_020c25e4(s32);
s32 onceLoopOnAna(s32, s32, s32);
void func_ov004_020cb340(s32);

static inline s32 has(s32 id) {
    s32 n;
    s32 *arr;
    s32 i = 0;
    n     = data_ov004_020cfaf0.count;
    if (n > 0) {
        arr = data_ov004_020cfaf0.arr;
        do {
            {
                s32 e = arr[i];
                if (e == id) {
                    return 1;
                }
            }
            i++;
        } while (i < n);
    }
    return 0;
}

void func_ov004_020cb25c(s32 id) {
    s32 found;
    s32 i;
    s32 r10;
    s32 t;
    s32 n;
    if (id == -1) {
        return;
    }
    found = has(id);
    if (found == 0) {
        return;
    }
    t = func_ov004_020cad5c(func_ov004_020c1f94(id));
    if (t == 1) {
        t = 1;
    } else {
        t = 0;
    }
    if (t != 0) {
        r10 = 1;
    } else {
        r10 = 0;
    }
    if (func_ov004_020c25e4(id) == 0) {
        do {
            s32 a = r10 == 0 ? 1 : 0;
            s32 b = r10 == 0 ? 1 : 0;
            if (onceLoopOnAna(b, a, 0x1f) != 1) {
                break;
            }
        } while (func_ov004_020c25e4(id) == 0);
    }
    func_ov004_020cb340(id);
}
