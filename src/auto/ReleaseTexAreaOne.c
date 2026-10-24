/* compiler: 2.0/sp1p5 -profile */
typedef struct Blk {
    void *key;
    unsigned int size : 30;
    unsigned int used : 1;
    unsigned int hi : 1;
    struct Blk *next;
} Blk;
extern void OS_FreeToHeap(int, int, void *);
extern void *data_ov000_02051548;

void ReleaseTexAreaOne(void *key) {
    Blk *p;
    Blk *q;
    Blk *n;
    p = *(Blk **) ((unsigned char *) data_ov000_02051548 + 0x270);
    if (p != 0) {
        do {
            if (p->used == 0 || p->key != key) {
                p = p->next;
            } else {
                p->used = 0;
                q       = *(Blk **) ((unsigned char *) data_ov000_02051548 + 0x270);
                n       = q->next;
                if (n != 0) {
                    do {
                        if (q->used != 0 || n->used != 0) {
                            q = n;
                            n = n->next;
                        } else {
                            q->size = q->size + n->size;
                            q->next = n->next;
                            if (n != 0) {
                                OS_FreeToHeap(0, -1, n);
                            }
                            n = q->next;
                        }
                    } while (n != 0);
                }
                return;
            }
        } while (p != 0);
    }
}
