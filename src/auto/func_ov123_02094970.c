/* compiler: 1.2/sp3 */
extern void MATHi_CRC8InitTable(void *, int);
extern unsigned char MATH_CalcCRC8(void *, void *, int);
int func_ov123_02094970(unsigned long long x, unsigned c) {
    unsigned buf[2];
    unsigned char tab[0x100];
    long long t;
    if (x & 0x80000000ULL) {
        return 0;
    }
    buf[0] = (unsigned) x;
    buf[1] = c;
    MATHi_CRC8InitTable(tab, 7);
    t = (int) (MATH_CalcCRC8(tab, buf, 8) & 0x7f);
    return t == (long long) (x >> 32);
}
