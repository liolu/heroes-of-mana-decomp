/* compiler: 1.2/sp3 */
#include "m2c.h"

int func_ov123_020a4ffc(void);
int func_ov123_020a5068(int, int, int, int);
void func_ov123_020a50b4(int, int, int);
extern int data_ov123_020e2054;

int func_ov123_020a58b0(int a, int *b, int c) {
    int i;
    int p;
    p = data_ov123_020e2054;
    i = 0;
    do {
        if (b[i] != 0) {
            do {
                func_ov123_020a50b4(p, 0x100, a);
            } while (func_ov123_020a5068(a, p, 0x100, c) == 0);
        }
        i++;
        a += 0x100;
        p += 0x100;
    } while (i < 4);
    return func_ov123_020a4ffc() != 0;
}
