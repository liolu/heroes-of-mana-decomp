typedef signed char s8;
typedef int s32;
extern s8 *data_ov123_020db36c;
void func_ov123_02086e44(s8 *buf, s32 n) {
    s8 *k;
    s32 i;
    i = 0;
    k = data_ov123_020db36c;
    if (n <= 0) {
        return;
    }
    do {
        buf[i] ^= *k;
        k++;
        i++;
        if (*k == 0) {
            k = data_ov123_020db36c;
        }
    } while (i < n);
}
