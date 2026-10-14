/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GenerateFriendCrcLookupTable from https://github.com/RonyxDumb/mkds src/arm9/020207a8_GenerateFriendCrcLookupTable.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
struct MATHCRC8Table {
    u8 table[256];
};
extern void func_02020528(struct MATHCRC8Table *table, u8 poly);
#pragma thumb off
void func_02020528(struct MATHCRC8Table *table, u8 poly) {
    u32 r, i, j;
    u8 *t = table->table;

    for (i = 0; i < 256; i++) {
        r = i;
        for (j = 0; j < 8; j++) {
            if (r & 0x80) {
                r = (r << 1) ^ poly;
            } else {
                r <<= 1;
            }
        }
        t[i] = (u8) r;
    }
}
