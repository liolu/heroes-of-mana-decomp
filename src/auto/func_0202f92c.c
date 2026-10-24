/* Reconstructed from USA ARM9 at 0x020e48dc (432 bytes).
 *
 * Compares the byte string in `a` against the byte string in `b`.
 *
 * arg0 (a):  the string that is matched; read through a volatile pointer so
 *            that every access is a real load.
 * arg1 (b):  the string that is matched against; may be NULL.
 * arg2:      receives the decimal number that follows a '!' marker in `a`.
 *
 * Returns 1 when the two strings match, 0 otherwise.
 */
#include "m2c.h"

s32 func_0202f92c(volatile u8 *a, u8 *b, s32 *out) {
    u8 *p = b;
    u32 c;
    u32 d;
    u32 f;
    u32 g;
    s32 n;

    *out = 0;
    if (b == 0) {
        return 1;
    }

    /* A key of the form "P", "PV", "PVK" or "PVKv" matches "P..." or "...". */
    if (b[0] == 'P') {
        if (*++p == 'V') {
            p++;
        }
        if (*p == 'K') {
            p++;
        }
        if (*p == 'v') {
            c = *a;
            if (c == 'P' || c == '*') {
                return 1;
            }
        }
        p = b;
    }

    f = *a;
    if (f == '!' || f == '*') {
        f = *a++;
        g = *p++;
        if (f != g) {
            return 0;
        }
    loop:
        f = *a;
        if (f != *p++) {
            goto mismatch;
        }
        a++;
        if (f != '!') {
            goto loop;
        }
        /* A decimal number between two '!' markers is handed back. */
        n = 0;
        while (*a != '!') {
            n = n * 10 + *a++ - '0';
        }
        *out = n;
        return 1;
    mismatch:
        while (*a++ != '!') {
        }
        while (*a++ != '!') {
        }
        if (*a == 0) {
            return 0;
        }
        p = b + 1;
        goto loop;
    }
    goto plain;

special:
    /* "P" and "R" may be followed by an optional "K" and an optional "V". */
    d = *++p;
    a++;
    if (d == 'K') {
        d = *a;
        if (d == 'K') {
            a++;
        }
        p++;
    }
    c = *a;
    if (c == 'K') {
        return 0;
    }
    if (*p == 'V') {
        if (c == 'V') {
            a++;
        }
        p++;
    }
    if (*a == 'V') {
        return 0;
    }

plain:
    c = *a;
    if ((c == 'P' || c == 'R') && c == *p) {
        goto special;
    }
    if (c != *p) {
        goto fail;
    }
    for (;;) {
        if (c == 0) {
            return 1;
        }
        c = *++a;
        d = *++p;
        if (c != d) {
            goto fail;
        }
    }
fail:
    return 0;
}
