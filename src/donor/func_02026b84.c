/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strtol from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/calls/strtol.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern unsigned long __strtoul(int base, int max, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                                   int *negative, int *overflow);
extern int __StringRead(void *isc, int ch, int action);
extern int errno;
long func_02026b84(const char *str, char **end, int base) {
    unsigned long value;
    int count, negative, overflow;
    __InStrCtrl isc;

    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = __strtoul(base, 0x7fffffff, __StringRead, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow || (!negative && value > 0x7fffffff) || (negative && value > 0x80000000)) {
        value         = (negative ? 0x80000000 : 0x7fffffff);
        errno = 0x22;
    } else if (negative) {
        value = -value;
    }

    return (long) value;
}
