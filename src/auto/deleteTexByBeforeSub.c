/* compiler: 2.0/sp1p5 -profile */
typedef struct S {
    int a;
    struct S *b;
} S;
extern void ReleaseTexAreaOne(int);
extern void OS_FreeToHeap(int, int, void *);
void deleteTexByBeforeSub(S *p) {
    if (p) {
        if (p->b) {
            deleteTexByBeforeSub(p->b);
        }
        ReleaseTexAreaOne(p->a);
        if (p) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
