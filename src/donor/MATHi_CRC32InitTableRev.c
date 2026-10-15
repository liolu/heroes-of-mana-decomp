/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GenerateProfileInfoCrcLookupTable from https://github.com/RonyxDumb/mkds
 * src/arm9/02020694_GenerateProfileInfoCrcLookupTable.c (license: none), reused by tools/donor_match.py */
typedef unsigned long u32;
struct MATHCRC32Table {
    u32 table[256];
};
extern void MATHi_CRC32InitTableRev(struct MATHCRC32Table *table, u32 poly);
#pragma thumb off
void MATHi_CRC32InitTableRev(struct MATHCRC32Table *table, u32 poly) {
    u32 r, i, j;
    u32 *t = table->table;

    for (i = 0; i < 256; i++) {
        r = i;
        for (j = 0; j < 8; j++) {
            if (r & 1) {
                r = (r >> 1) ^ poly;
            } else {
                r >>= 1;
            }
        }
        t[i] = r;
    }
}
