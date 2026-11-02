/* compiler: 2.0/sp1p2 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_VSNPrintf from projets/tom-and-jerry-tales/src/auto/OS_VSNPrintf.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
typedef unsigned long size_t;
typedef char *va_list;
typedef struct dst_string_tag {
    size_t len;
    char *cur;
    char *base;
} dst_string;
extern void string_put_char(dst_string *p, char c);
extern void string_fill_char(dst_string *p, char c, int n);
extern void string_put_string(dst_string *p, const char *s, int n);
int OS_VSNPrintf(char *dst, size_t len, const char *fmt, va_list vlist) {
    char buf[24];
    int n_buf;
    char prefix[2];
    int n_prefix;
    const char *s = fmt;
    dst_string str;
    str.len = len, str.cur = str.base = dst;
    while (*s) {
        if ((unsigned int) (((unsigned char) *s ^ 0x20) - 0xA1) < 0x3C) {
            string_put_char(&str, *s++);
            if (*s) {
                string_put_char(&str, *s++);
            }
        } else if (*s != '%') {
            string_put_char(&str, *s++);
        } else {
            enum {
                flag_blank    = 000001,
                flag_plus     = 000002,
                flag_sharp    = 000004,
                flag_minus    = 000010,
                flag_zero     = 000020,
                flag_l1       = 000040,
                flag_h1       = 000100,
                flag_l2       = 000200,
                flag_h2       = 000400,
                flag_unsigned = 010000,
                flag_end
            };
            int flag = 0, width = 0, precision = -1, radix = 10;
            char hex_char       = 'a' - 10;
            const char *p_start = s;
            for (;;) {
                switch (*++s) {
                    case '+':
                        if (s[-1] != ' ') {
                            break;
                        }
                        flag |= flag_plus;
                        continue;
                    case ' ':
                        flag |= flag_blank;
                        continue;
                    case '-':
                        flag |= flag_minus;
                        continue;
                    case '0':
                        flag |= flag_zero;
                        continue;
                }
                break;
            }
            if (*s == '*') {
                ++s, width = (*(int *) ((vlist += ((sizeof(int) + 3U) & ~3U)) - ((sizeof(int) + 3U) & ~3U)));
                if (width < 0) {
                    width = -width, flag |= flag_minus;
                }
            } else {
                while ((*s >= '0') && (*s <= '9')) {
                    width = (width * 10) + *s++ - '0';
                }
            }
            if (*s == '.') {
                ++s, precision = 0;
                if (*s == '*') {
                    ++s, precision = (*(int *) ((vlist += ((sizeof(int) + 3U) & ~3U)) - ((sizeof(int) + 3U) & ~3U)));
                    if (precision < 0) {
                        precision = -1;
                    }
                } else {
                    while ((*s >= '0') && (*s <= '9')) {
                        precision = (precision * 10) + *s++ - '0';
                    }
                }
            }
            switch (*s) {
                case 'h':
                    if (*++s != 'h') {
                        flag |= flag_h1;
                    } else {
                        ++s, flag |= flag_h2;
                    }
                    break;
                case 'l':
                    if (*++s != 'l') {
                        flag |= flag_l1;
                    } else {
                        ++s, flag |= flag_l2;
                    }
                    break;
            }
            switch (*s) {
                case 'd':
                case 'i':
                    goto put_integer;
                case 'o':
                    radix = 8;
                    flag |= flag_unsigned;
                    goto put_integer;
                case 'u':
                    flag |= flag_unsigned;
                    goto put_integer;
                case 'X':
                    hex_char = 'A' - 10;
                    goto put_hexadecimal;
                case 'x':
                    goto put_hexadecimal;
                case 'p':
                    flag |= flag_sharp;
                    precision = 8;
                    goto put_hexadecimal;
                case 'c':
                    if (precision >= 0) {
                        goto put_invalid;
                    }
                    {
                        int c = (*(int *) ((vlist += ((sizeof(int) + 3U) & ~3U)) - ((sizeof(int) + 3U) & ~3U)));
                        width -= 1;
                        if (flag & flag_minus) {
                            string_put_char(&str, (char) c);
                            string_fill_char(&str, ' ', width);
                        } else {
                            char pad = (char) ((flag & flag_zero) ? '0' : ' ');
                            string_fill_char(&str, pad, width);
                            string_put_char(&str, (char) c);
                        }
                        ++s;
                    }
                    break;
                case 's': {
                    int n_buf         = 0;
                    const char *p_buf = (*(const char **) ((vlist += ((sizeof(const char *) + 3U) & ~3U)) -
                                                           ((sizeof(const char *) + 3U) & ~3U)));
                    if (precision < 0) {
                        while (p_buf[n_buf]) {
                            ++n_buf;
                        }
                    } else {
                        while ((n_buf < precision) && p_buf[n_buf]) {
                            ++n_buf;
                        }
                    }
                    width -= n_buf;
                    if (flag & flag_minus) {
                        string_put_string(&str, p_buf, n_buf);
                        string_fill_char(&str, ' ', width);
                    } else {
                        char pad = (char) ((flag & flag_zero) ? '0' : ' ');
                        string_fill_char(&str, pad, width);
                        string_put_string(&str, p_buf, n_buf);
                    }
                    ++s;
                } break;
                case 'n': {
                    int pos = str.cur - str.base;
                    if (flag & flag_h2)
                        ;
                    else if (flag & flag_h1) {
                        *(*(signed short **) ((vlist += ((sizeof(signed short *) + 3U) & ~3U)) -
                                              ((sizeof(signed short *) + 3U) & ~3U))) = (signed short) pos;
                    } else if (flag & flag_l2) {
                        *(*(u64 **) ((vlist += ((sizeof(u64 *) + 3U) & ~3U)) - ((sizeof(u64 *) + 3U) & ~3U))) = (u64) pos;
                    } else {
                        *(*(signed int **) ((vlist += ((sizeof(signed int *) + 3U) & ~3U)) -
                                            ((sizeof(signed int *) + 3U) & ~3U))) = (signed int) pos;
                    }
                }
                    ++s;
                    break;
                case '%':
                    if (p_start + 1 != s) {
                        goto put_invalid;
                    }
                    string_put_char(&str, *s++);
                    break;
                default:
                    goto put_invalid;
                put_invalid:
                    string_put_string(&str, p_start, s - p_start);
                    break;
                put_hexadecimal:
                    radix = 16;
                    flag |= flag_unsigned;
                put_integer: {
                    u64 val  = 0;
                    n_prefix = 0;
                    if (flag & flag_minus) {
                        flag &= ~flag_zero;
                    }
                    if (precision < 0) {
                        precision = 1;
                    } else {
                        flag &= ~flag_zero;
                    }
                    if (flag & flag_unsigned) {
                        if (flag & flag_h2) {
                            val = (*(unsigned char *) ((vlist += ((sizeof(unsigned char) + 3U) & ~3U)) -
                                                       ((sizeof(unsigned char) + 3U) & ~3U)));
                        } else if (flag & flag_h1) {
                            val = (*(unsigned short *) ((vlist += ((sizeof(unsigned short) + 3U) & ~3U)) -
                                                        ((sizeof(unsigned short) + 3U) & ~3U)));
                        } else if (flag & flag_l2) {
                            val = *((u64 *) (vlist = (void *) ((u64 *) (vlist) + 1)) - 1);
                        } else {
                            val = (*(unsigned long *) ((vlist += ((sizeof(unsigned long) + 3U) & ~3U)) -
                                                       ((sizeof(unsigned long) + 3U) & ~3U)));
                        }
                        flag &= ~(flag_plus | flag_blank);
                        if (flag & flag_sharp) {
                            if (radix == 16) {
                                if (val != 0) {
                                    prefix[0] = (char) (hex_char + (10 + 'x' - 'a'));
                                    prefix[1] = '0';
                                    n_prefix  = 2;
                                }
                            } else if (radix == 8) {
                                prefix[0] = '0';
                                n_prefix  = 1;
                            }
                        }
                    } else {
                        if (flag & flag_h2) {
                            val = (*(char *) ((vlist += ((sizeof(char) + 3U) & ~3U)) - ((sizeof(char) + 3U) & ~3U)));
                        } else if (flag & flag_h1) {
                            val = (*(short *) ((vlist += ((sizeof(short) + 3U) & ~3U)) - ((sizeof(short) + 3U) & ~3U)));
                        } else if (flag & flag_l2) {
                            val = *((u64 *) (vlist = (void *) ((u64 *) (vlist) + 1)) - 1);
                        } else {
                            val = (*(long *) ((vlist += ((sizeof(long) + 3U) & ~3U)) - ((sizeof(long) + 3U) & ~3U)));
                        }
                        if ((val >> 32) & 0x80000000) {
                            val       = ~val + 1;
                            prefix[0] = '-';
                            n_prefix  = 1;
                        } else {
                            if (val || precision) {
                                if (flag & flag_plus) {
                                    prefix[0] = '+';
                                    n_prefix  = 1;
                                } else if (flag & flag_blank) {
                                    prefix[0] = ' ';
                                    n_prefix  = 1;
                                }
                            }
                        }
                    }
                    n_buf = 0;
                    switch (radix) {
                        case 8:
                            while (val != 0) {
                                int d = (int) (val & 0x07);
                                val >>= 3;
                                buf[n_buf++] = (char) (d + '0');
                            }
                            break;
                        case 10:
                            if ((val >> 32) == 0) {
                                u32 v = (u32) val;
                                while (v != 0) {
                                    u32 r        = v / 10;
                                    int d        = (int) (v - (r * 10));
                                    v            = r;
                                    buf[n_buf++] = (char) (d + '0');
                                }
                            } else {
                                while (val != 0) {
                                    u64 r        = val / 10;
                                    int d        = (int) (val - (r * 10));
                                    val          = r;
                                    buf[n_buf++] = (char) (d + '0');
                                }
                            }
                            break;
                        case 16:
                            while (val != 0) {
                                int d = (int) (val & 0x0f);
                                val >>= 4;
                                buf[n_buf++] = (char) ((d < 10) ? (d + '0') : (d + hex_char));
                            }
                            break;
                    }
                    if ((n_prefix > 0) && (prefix[0] == '0')) {
                        n_prefix     = 0;
                        buf[n_buf++] = '0';
                    }
                }
                    goto put_to_stream;
                put_to_stream: {
                    int n_pad = precision - n_buf;
                    if (flag & flag_zero) {
                        if (n_pad < width - n_buf - n_prefix) {
                            n_pad = width - n_buf - n_prefix;
                        }
                    }
                    if (n_pad > 0) {
                        width -= n_pad;
                    }
                    width -= n_prefix + n_buf;
                    if (!(flag & flag_minus)) {
                        string_fill_char(&str, ' ', width);
                    }
                    while (n_prefix > 0) {
                        string_put_char(&str, prefix[--n_prefix]);
                    }
                    string_fill_char(&str, '0', n_pad);
                    while (n_buf > 0) {
                        string_put_char(&str, buf[--n_buf]);
                    }
                    if (flag & flag_minus) {
                        string_fill_char(&str, ' ', width);
                    }
                    ++s;
                } break;
            }
        }
    }
    if (str.len > 0) {
        *str.cur = '\0';
    } else if (len > 0) {
        str.base[len - 1] = '\0';
    }
    return str.cur - str.base;
}
