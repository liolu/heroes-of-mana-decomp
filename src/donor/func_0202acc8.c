/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __minus_dec from https://github.com/Project-Holon/aletheia src/game/arm9/msl_ansi_fp.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef struct decimal2 {
    unsigned char sign;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal2;
extern void func_0202acc8(decimal2 *z, const decimal2 *x, const decimal2 *y);
void func_0202acc8(decimal2 *z, const decimal2 *x, const decimal2 *y) {
    int zlen, dexp;
    u8 *ib, *i, *ie;
    const u8 *jb, *j, *jn;

    *z = *x;

    if (y->sig.text[0] == 0) {
        return;
    }

    zlen = z->sig.length;
    if (zlen < y->sig.length) {
        zlen = y->sig.length;
    }

    dexp = z->exp - y->exp;
    zlen += dexp;

    if (zlen > 32) {
        zlen = 32;
    }

    while (z->sig.length < zlen) {
        z->sig.text[z->sig.length++] = 0;
    }

    ib = z->sig.text;
    i  = ib + zlen;

    if (y->sig.length + dexp < zlen) {
        i = ib + (y->sig.length + dexp);
    }

    jb = y->sig.text;
    j  = jb + (i - ib - dexp);
    jn = j;

    while (i > ib && j > jb) {
        --i;
        --j;
        if (*i < *j) {
            u8 *k = i - 1;
            while (*k == 0) {
                --k;
            }
            while (k != i) {
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }

    if (jn - jb < y->sig.length) {
        int round_down = 0;
        if (*jn < 5) {
            round_down = 1;
        } else if (*jn == 5) {
            const u8 *je = y->sig.text + y->sig.length;

            for (j = jn + 1; j < je; ++j) {
                if (*j != 0) {
                    goto done;
                }
            }

            i = ib + (jn - jb) + dexp - 1;

            if (*i & 1) {
                round_down = 1;
            }
        }
        if (round_down) {
            if (*i < 1) {
                u8 *k = i - 1;

                while (*k == 0) {
                    --k;
                }
                while (k != i) {
                    --*k;
                    *++k += 10;
                }
            }

            *i -= 1;
        }
    }
done:
    for (i = ib; *i == 0; ++i) {
    }

    if (i > ib) {
        u8 dl = (u8) (i - ib);
        z->exp -= dl;
        ie = ib + z->sig.length;
        for (; i < ie; ++i, ++ib) {
            *ib = *i;
        }
        z->sig.length -= dl;
    }

    ib = z->sig.text;

    for (i = ib + z->sig.length; i > ib;) {
        --i;
        if (*i != 0) {
            break;
        }
    }

    z->sig.length = (u8) (i - ib + 1);
}
