typedef int s32;
typedef struct E {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
} E;
typedef struct L {
    s32 x;
    s32 y;
    volatile s32 n;
    E *e;
} L;
s32 func_ov004_020bf714(L *l) {
    s32 sum = 0;
    s32 i   = 0;
    E *p;
    if (l->n > 0) {
        p = l->e;
        do {
            sum += p->b;
            i++;
            p++;
        } while (i < l->n);
    }
    return sum;
}
