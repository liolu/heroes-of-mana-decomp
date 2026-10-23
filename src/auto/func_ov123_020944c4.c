typedef struct {
    int a, b, c;
} T;
typedef struct {
    char pad[0x10];
    T t;
    int v;
    unsigned flags;
    char pad2[0x18];
    unsigned crc;
} O;
void MATHi_CRC32InitTableRev(unsigned *, unsigned);
unsigned MATH_CalcCRC32(unsigned *, void *, int);
void func_ov123_020944c4(O *o, T *src, int v) {
    unsigned table[256];
    o->t = *src;
    o->v = v;
    MATHi_CRC32InitTableRev(table, 0xEDB88320);
    o->crc = MATH_CalcCRC32(table, o, 0x3C);
    o->flags |= 1;
}
