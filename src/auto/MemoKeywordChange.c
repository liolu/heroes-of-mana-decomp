/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
extern u16 *Search_KEYWORD_INFO(int);
extern void MemoKeywordFlag(int, int);
extern void MIi_CpuCopy16(void *, void *, int);
void MemoKeywordChange(int a, int b) {
    u16 tmp;
    u16 *ka, *kb;
    ka = Search_KEYWORD_INFO(a);
    if (ka) {
        MemoKeywordFlag(b, 0);
        MemoKeywordFlag(a, 1);
        kb = Search_KEYWORD_INFO(b);
        MIi_CpuCopy16(kb, &tmp, 2);
        MIi_CpuCopy16(ka, kb, 2);
        MIi_CpuCopy16(&tmp, ka, 2);
    }
}
