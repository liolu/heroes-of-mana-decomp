/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
typedef struct UnkPrintfDst {
    u32 len;
    char *cur;
    char *base;
} UnkPrintfDst;

/* func_02077af0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_printf.c (license: none), reused by
 * tools/donor_match.py */
void string_put_string(UnkPrintfDst *p, const char *s, s32 n) {
    if (n > 0) {
        u32 i;
        u32 k = p->len;
        if (k > n) {
            k = n;
        }
        for (i = 0; i < k; ++i) {
            p->cur[i] = s[i];
        }
        p->len -= k;
        p->cur += n;
    }
}
