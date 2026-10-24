#include "m2c.h"

int func_ov123_02086cc8(int, int);
void func_ov123_02086e44(int, int);
void func_ov123_02086868(int, int);
extern int *data_ov123_020db36c;
extern int data_ov123_020db370;

int func_ov123_020867e0(int a, int n) {
    int len;
    int start;
    int e;
    start = n;
    e     = func_ov123_02086cc8(a, n);
    while (n > 0 && e != 0) {
        len                 = e - a;
        data_ov123_020db36c = &data_ov123_020db370;
        func_ov123_02086e44(a, len);
        func_ov123_02086868(a, len);
        n -= len + 7;
        a = e + 7;
        if (n > 0) {
            e = func_ov123_02086cc8(a, n);
        }
    }
    return start - n;
}
