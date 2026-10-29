/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* parse_format from https://github.com/Sojews/fossil-fighters-decomp libs/msl/src/wprintf.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern const unsigned short data_0203564c[128];
typedef unsigned short wchar_t;
typedef char *va_list;
static inline int iswdigit(unsigned int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int) (data_0203564c[c] & 0x008);
}
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
#line 57
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
const wchar_t *func_02026d0c(const wchar_t *format_string, va_list *arg, print_format *format) {
    print_format f;
    const wchar_t *s = format_string;
    int c;
    int flag_found;

    f.justification_options = right_justification;
    f.sign_options          = only_minus;
    f.precision_specified   = 0;
    f.alternate_form        = 0;
    f.argument_options      = normal_argument;
    f.field_width           = 0;
    f.precision             = 0;

    if ((c = *++s) == L'%') {
        f.conversion_char = c;
        *format           = f;
        return ((const wchar_t *) s + 1);
    }

    while (1) {
        flag_found = 1;

        switch (c) {
            case L'-':
                f.justification_options = left_justification;
                break;

            case L'+':
                f.sign_options = sign_always;
                break;

            case L' ':
                if (f.sign_options != sign_always) {
                    f.sign_options = space_holder;
                }
                break;

            case L'#':
                f.alternate_form = 1;
                break;

            case L'0':
                if (f.justification_options != left_justification) {
                    f.justification_options = zero_fill;
                }
                break;

            default:
                flag_found = 0;
                break;
        }

        if (flag_found) {
            c = *++s;
        } else {
            break;
        }
    }

    if (c == L'*') {
        if ((f.field_width = (*(int *) ((*arg += ((((unsigned int) (sizeof(int))) + 3U) & ~3U)) -
                                        ((((unsigned int) (sizeof(int))) + 3U) & ~3U)))) < 0) {
            f.justification_options = left_justification;
            f.field_width           = -f.field_width;
        }

        c = *++s;
    } else {
        while (iswdigit(c)) {
            f.field_width = (f.field_width * 10) + (c - L'0');
            c             = *++s;
        }
    }

    if (f.field_width > 509) {
        f.conversion_char = 0xFFFF;
        *format           = f;
        return ((const wchar_t *) s + 1);
    }

    if (c == L'.') {
        f.precision_specified = 1;

        if ((c = *++s) == L'*') {
            if ((f.precision = (*(int *) ((*arg += ((((unsigned int) (sizeof(int))) + 3U) & ~3U)) -
                                          ((((unsigned int) (sizeof(int))) + 3U) & ~3U)))) < 0) {
                f.precision_specified = 0;
            }

            c = *++s;
        } else {
            while (iswdigit(c)) {
                f.precision = (f.precision * 10) + (c - L'0');
                c           = *++s;
            }
        }
    }

    flag_found = 1;

    switch (c) {
        case L'h':
            f.argument_options = short_argument;
            if (s[1] == L'h') {
                f.argument_options = char_argument;
                c                  = *++s;
            }
            break;
        case L'l':
            f.argument_options = long_argument;
            if (s[1] == L'l') {
                f.argument_options = long_long_argument;
                c                  = *++s;
            }
            break;
        case L'L':
            f.argument_options = long_double_argument;
            break;
        case L'j':
            f.argument_options = intmax_argument;
            break;
        case L't':
            f.argument_options = ptrdiff_argument;
            break;
        case L'z':
            f.argument_options = size_t_argument;
            break;
        default:
            flag_found = 0;
            break;
    }

    if (flag_found) {
        c = *++s;
    }

    f.conversion_char = c;

    switch (c) {
        case L'd':
        case L'i':
        case L'u':
        case L'o':
        case L'x':
        case L'X':
            if (f.argument_options == long_double_argument) {
                f.argument_options = long_long_argument;
            }

            if (!f.precision_specified) {
                f.precision = 1;
            } else if (f.justification_options == zero_fill) {
                f.justification_options = right_justification;
            }
            break;

        case L'f':
        case L'F':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument) {
                f.conversion_char = 0xFFFF;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case L'a':
        case L'A':
            if (!f.precision_specified) {
                f.precision = 0x0D;
            }
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument || f.argument_options == char_argument) {
                f.conversion_char = 0xFFFF;
            }
            break;

        case L'g':
        case L'G':
            if (!f.precision) {
                f.precision = 1;
            }

        case L'e':
        case L'E':
            if (f.argument_options == short_argument || f.argument_options == intmax_argument ||
                f.argument_options == size_t_argument || f.argument_options == ptrdiff_argument ||
                f.argument_options == long_long_argument || f.argument_options == char_argument) {
                f.conversion_char = 0xFFFF;
                break;
            }

            if (!f.precision_specified) {
                f.precision = 6;
            }
            break;

        case L'p':
            f.argument_options = long_argument;
            f.alternate_form   = 1;
            f.conversion_char  = L'x';
            f.precision        = 8;
            break;

        case L'c':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            } else if (f.precision_specified || f.argument_options != normal_argument) {
                f.conversion_char = 0xFFFF;
            }
            break;

        case L's':
            if (f.argument_options == long_argument) {
                f.argument_options = wchar_argument;
            } else if (f.argument_options != normal_argument) {
                f.conversion_char = 0xFFFF;
            }
            break;

        case L'n':
            if (f.argument_options == long_double_argument) {
                f.argument_options = long_long_argument;
            }
            break;

        default:
            f.conversion_char = 0xFFFF;
            break;
    }

    *format = f;

    return ((const wchar_t *) s + 1);
}
