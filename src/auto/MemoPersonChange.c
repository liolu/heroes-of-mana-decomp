/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
extern u16 *Search_UNIT_INFO(int);
extern void MemoPersonFlag(int, int);
extern void MIi_CpuCopy16(void *, void *, int);
void MemoPersonChange(int a, int b) {
    u16 tmp;
    u16 *ka, *kb;
    ka = Search_UNIT_INFO(a);
    if (ka) {
        MemoPersonFlag(b, 0);
        MemoPersonFlag(a, 1);
        kb = Search_UNIT_INFO(b);
        MIi_CpuCopy16(kb, &tmp, 2);
        MIi_CpuCopy16(ka, kb, 2);
        MIi_CpuCopy16(&tmp, ka, 2);
    }
}
