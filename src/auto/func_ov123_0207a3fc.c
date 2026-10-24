/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_02020d04(void *, void *, int, int);
int func_ov123_02079d18(int, int, int);
extern u8 data_ov123_020d9b90;
extern u8 data_ov123_020d9b94;

typedef struct {
    int *items;
    int count;
} L;

int func_ov123_0207a3fc(L *a, int b, int c) {
    int i;
    int r;
    if (b == 0) {
        func_02020d04(&data_ov123_020d9b90, &data_ov123_020d9b94, 0, 0xD3);
    }
    for (i = 0; i < a->count; i++) {
        r = func_ov123_02079d18(a->items[i], b, c);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
