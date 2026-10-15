/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strtoul from https://github.com/Yotona/twewy libs/c/src/strtoul.c (license: CC0-1.0), reused by tools/donor_match.py */
extern int errno;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int __StringRead(void *, int, int);
extern unsigned long __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
unsigned long __strtoul(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                            int *negative, int *overflow);
unsigned long func_02026aec(const char *restrict str, char **restrict end, int base) {
    unsigned long value;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = __strtoul(base, 0x7fffffff, &__StringRead, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow) {
        value         = ~0;
        errno = 34;
    } else if (negative) {
        value = -value;
    }

    return (value);
}
