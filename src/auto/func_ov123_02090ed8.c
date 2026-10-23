typedef signed char s8;
typedef int s32;
s32 func_ov123_02090ed8(s8 *p, s32 n) {
    s32 i;
    for (i = 0; i < n; i++) {
        if (p[i] == 0) {
            return i + 1;
        }
    }
    return -1;
}
