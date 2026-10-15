/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __wStringWrite from https://github.com/zeldaret/st libs/c/src/wprintf.c (license: CC0-1.0), reused by tools/donor_match.py
 */
typedef unsigned long size_t;
typedef unsigned short wchar_t;
typedef struct {
    wchar_t *wCharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __wOutStrCtrl;
void *func_02028bb0(void *wosc, const wchar_t *buffer, size_t numchars) {
    size_t tobewritten;
    void *res;
    __wOutStrCtrl *wOscp = (__wOutStrCtrl *) wosc;
    tobewritten =
        ((wOscp->CharsWritten + numchars) <= wOscp->MaxCharCount) ? numchars : wOscp->MaxCharCount - wOscp->CharsWritten;
    res = (void *) wmemcpy(wOscp->wCharStr + wOscp->CharsWritten, buffer, tobewritten);
    wOscp->CharsWritten += tobewritten;
    return res;
}
