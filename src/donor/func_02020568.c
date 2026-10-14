/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Friend_ComputeCrcImpl from https://github.com/RonyxDumb/mkds src/arm9/02020768_Friend_ComputeCrcImpl.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef u8 MATHCRC8Context;
struct MATHCRC8Table {
    u8 table[256];
};
extern void func_02020568(const struct MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length);
extern void func_02020568(const struct MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length);
#pragma thumb off
void func_02020568(const struct MATHCRC8Table *table, MATHCRC8Context *context, const void *input, u32 length) {
    u32 r, i;
    const u8 *t = table->table;
    u8 *data    = (u8 *) input;

    r = *context;
    for (i = 0; i < length; i++) {
        r = t[(r ^ *data) & 0xff];
        data++;
    }
    *context = (MATHCRC8Context) r;
}
