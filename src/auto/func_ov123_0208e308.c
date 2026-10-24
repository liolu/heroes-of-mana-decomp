typedef struct N {
    char p[0x20];
    struct N *next;
} N;
typedef struct {
    N *first;
    N *last;
    int count;
} L;
int func_ov123_0208e308(L *l, N *n) {
    N *prev = 0;
    N *cur  = l->first;
    while (cur) {
        if (cur == n) {
            if (prev) {
                prev->next = cur->next;
            }
            if (l->first == cur) {
                l->first = cur->next;
            }
            if (l->last == cur) {
                l->last = prev;
            }
            l->count--;
            return 1;
        }
        prev = cur;
        cur  = cur->next;
    }
    return 0;
}
