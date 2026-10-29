/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vswprintf from https://github.com/Sojews/fossil-fighters-decomp libs/msl/src/wprintf.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef char *va_list;
extern int func_02028c18(wchar_t *s, size_t n, const wchar_t *format, va_list arg);
int func_020282c0(void *(*WriteProc)(void *, const wchar_t *, size_t), void *WriteProcArg, const wchar_t *format_str,
                  va_list arg);
typedef struct {
    wchar_t *wCharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __wOutStrCtrl;
void *func_02028bb0(void *wosc, const wchar_t *buffer, size_t numchars);
int func_02028c18(wchar_t *s, size_t n, const wchar_t *format, va_list arg) {
    int count;
    __wOutStrCtrl wosc;
    wosc.wCharStr     = s;
    wosc.MaxCharCount = n;
    wosc.CharsWritten = 0;

    count = func_020282c0(&func_02028bb0, &wosc, format, arg);

    if (count >= 0) {
        if (count < n) {
            s[count] = 0;
        } else {
            *(s + n - 1) = 0;
            count        = -1;
        }
    }

    return count;
}
