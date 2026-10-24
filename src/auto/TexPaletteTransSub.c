/* compiler: 2.0/sp1p5 -profile */
typedef struct T {
    void *data;
    int addr;
    unsigned int size : 31;
    unsigned int own : 1;
    struct T *next;
} T;
extern void GX_LoadTexPltt(void *, int, int);
extern void OS_FreeToHeap(int, int, void *);
void TexPaletteTransSub(T *p) {
    if (p) {
        TexPaletteTransSub(p->next);
        GX_LoadTexPltt(p->data, p->addr, p->size);
        if (p->own && p->data) {
            OS_FreeToHeap(0, -1, p->data);
            p->data = 0;
        }
        if (p) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
