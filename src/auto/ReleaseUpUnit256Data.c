/* compiler: 2.0/sp1p5 -profile */
typedef struct E {
    void *w0;
    void *w1;
    int w2;
    int pad;
} E;
typedef struct Gl {
    unsigned char pad[0xEC];
    E t[4][8];
} Gl;
extern void OS_FreeToHeap(int, int, void *);
extern void deleteComObjByComno(void *, int);
extern Gl *data_ov109_020ea340;

void ReleaseUpUnit256Data(int a, int b) {
    void *x;
    x = data_ov109_020ea340->t[b][a].w0;
    if (x != 0) {
        if (x != 0) {
            OS_FreeToHeap(0, -1, x);
            data_ov109_020ea340->t[b][a].w0 = 0;
        }
        x = data_ov109_020ea340->t[b][a].w1;
        if (x != 0) {
            OS_FreeToHeap(0, -1, x);
            data_ov109_020ea340->t[b][a].w1 = 0;
        }
        data_ov109_020ea340->t[b][a].w0 = 0;
        data_ov109_020ea340->t[b][a].w1 = 0;
        deleteComObjByComno((unsigned char *) data_ov109_020ea340 + 0x3C, b + (a * 4 + 0xFF42));
        data_ov109_020ea340->t[b][a].w2 = 0;
    }
}
