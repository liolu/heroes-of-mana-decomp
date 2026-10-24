/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    char p[0x10];
    void *c;
} S;
extern void ClsTransTex2VramSub(S *);
extern void OS_FreeToHeap(int, int, void *);
void ClsTransTex2VramSub(S *p) {
    if (p) {
        if (p->c) {
            ClsTransTex2VramSub(p->c);
        }
        if (p) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
