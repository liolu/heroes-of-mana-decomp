/* compiler: 1.2/sp3 */
#include "m2c.h"
char *func_02024ed4(char *s, s32 c);
void MI_CpuCopy8(void *src, void *dst, s32 n);
s32 func_ov123_020a18d8(char *dst, char *src, s32 n) {
    char *end = func_02024ed4(src, 0);
    char *p;
    s32 len;
    s32 i;
    for (i = 0; i < n; i++) {
        p = func_02024ed4(src, '/');
        if (p == 0) {
            return -1;
        }
        src = p + 1;
    }
    p = func_02024ed4(src, '/');
    if (p == 0) {
        p = end;
    }
    if (src == p) {
        return -1;
    }
    len = p - src;
    MI_CpuCopy8(src, dst, len);
    dst[len] = 0;
    return len;
}
