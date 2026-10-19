/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* long2str from https://github.com/zeldaret/st libs/c/src/wprintf.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short wchar_t;
enum justification_options {
    left_justification,
    right_justification,
    zero_fill
};
enum sign_options {
    only_minus,
    sign_always,
    space_holder
};
enum argument_options {
#line 56
    normal_argument,
    char_argument,
    short_argument,
    long_argument,
    long_long_argument,
    wchar_argument,
    intmax_argument,
    size_t_argument,
    ptrdiff_argument,
    long_double_argument
};
typedef struct {
    unsigned char justification_options;
    unsigned char sign_options;
    unsigned char precision_specified;
    unsigned char alternate_form;
    unsigned char argument_options;
    wchar_t conversion_char;
    int field_width;
    int precision;
} print_format;
wchar_t *func_02027284(long num, wchar_t *buff, print_format format) {
    unsigned long unsigned_num, base;
    wchar_t *p;
    int n, digits;
    int minus    = 0;
    unsigned_num = num;
    minus        = 0;

    p      = buff;
    *--p   = 0;
    digits = 0;

    if (!num && !format.precision && !(format.alternate_form && format.conversion_char == L'o')) {
        return p;
    }

    switch (format.conversion_char) {
        case L'd':
        case L'i':
            base = 10;

            if (num < 0) {
                if (num != 0x80000000) {
                    unsigned_num = -num;
                }

                minus = 1;
            }
            break;

        case L'o':
            base                = 8;
            format.sign_options = only_minus;
            break;

        case L'u':
            base                = 10;
            format.sign_options = only_minus;
            break;

        case L'x':
        case L'X':
            base                = 16;
            format.sign_options = only_minus;
            break;
    }

    do {
        n = unsigned_num % base;
        unsigned_num /= base;

        if (n < 10) {
            n += L'0';
        } else {
            n -= 10;

            if (format.conversion_char == L'x') {
                n += L'a';
            } else {
                n += L'A';
            }
        }

        *--p = n;
        ++digits;
    } while (unsigned_num != 0);

    if (base == 8 && format.alternate_form && *p != L'0') {
        *--p = L'0';
        ++digits;
    }

    if (format.justification_options == zero_fill) {
        format.precision = format.field_width;

        if (minus || format.sign_options != only_minus) {
            --format.precision;
        }

        if (base == 16 && format.alternate_form) {
            format.precision -= 2;
        }
    }

    if (buff - p + format.precision > 509) {
        return 0;
    }

    while (digits < format.precision) {
        *--p = L'0';
        ++digits;
    }

    if (base == 16 && format.alternate_form) {
        *--p = format.conversion_char;
        *--p = L'0';
    }

    if (minus) {
        *--p = L'-';
    } else if (format.sign_options == sign_always) {
        *--p = L'+';
    } else if (format.sign_options == space_holder) {
        *--p = L' ';
    }

    return p;
}
