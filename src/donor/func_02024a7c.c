/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vsscanf from https://github.com/Yotona/twewy libs/c/src/scanf.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef char *va_list;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int __StringRead(void *, int, int);
extern int func_02024a7c(const char *, const char *, va_list);
int __sformatter(int (*ReadProc)(void *, int, int), void *ReadProcArg, const char *format_str, va_list arg, int is_secure);
int __StringRead(void *isc, int ch, int Action);
int func_02024a7c(const char *restrict s, const char *restrict format, va_list arg) {
    __InStrCtrl isc;
    isc.NextChar = (char *) s;
    if ((s == 0) || (*isc.NextChar == '\0')) {
        return -1;
    }
    isc.NullCharDetected = 0;

    return __sformatter(&__StringRead, (void *) &isc, format, arg, 0);
}
