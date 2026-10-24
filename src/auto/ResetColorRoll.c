/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef struct N {
    int p0;
    int p4;
    u32 lo : 16;
    u32 id : 5;
    u32 hi : 11;
    int pc;
    struct N *next;
} N;
typedef struct G {
    char p[0x7a4];
    N *head;
} G;
extern G *data_ov000_02051548;
extern void OS_FreeToHeap(int, int, void *);
void ResetColorRoll(int id) {
    N **pp = &data_ov000_02051548->head;
    N *p   = *pp;
    while (p != 0) {
        if (p->id == id) {
            *pp = p->next;
            if (p != 0) {
                OS_FreeToHeap(0, -1, p);
            }
        } else {
            pp = &p->next;
        }
        p = *pp;
    }
}
