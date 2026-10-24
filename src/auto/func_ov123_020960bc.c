/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef void (*FreeFn)(void *, void *, s32);
typedef struct E {
    void *a;
    void *b;
} E;
extern u8 data_ov123_020dc168[];
extern u8 data_ov123_020dc184[];

void func_ov123_020960bc(u8 *base, E *arr, s32 n) {
    FreeFn fn = *(FreeFn *) (base + 0x1014);
    s32 i;
    for (i = 0; i < n; i++) {
        if (arr[i].a != 0) {
            fn(data_ov123_020dc168, arr[i].a, 0);
            arr[i].a = 0;
        }
        if (arr[i].b != 0) {
            fn(data_ov123_020dc184, arr[i].b, 0);
            arr[i].b = 0;
        }
    }
}
