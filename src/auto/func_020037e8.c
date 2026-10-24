typedef struct {
    unsigned int a : 7;
    unsigned int e : 7;
    unsigned int p1 : 1;
    unsigned int c : 1;
    unsigned int p2 : 2;
    unsigned int b : 1;
    unsigned int r : 13;
} F;
typedef struct {
    int pad;
    unsigned char p2[0xa4];
    int cur;
    F f;
} G;
extern G *data_0203678c;
extern int func_020063fc(void *, int, int);
extern void func_0200378c(int, int);
void func_020037e8(int v) {
    G *g = data_0203678c;
    if (g->f.b != 0) {
        return;
    }
    if (g == 0) {
        return;
    }
    if (g->f.c == 0 || g->cur == v) {
        return;
    }
    func_020063fc((unsigned char *) g + 4, 0, v);
    func_0200378c(data_0203678c->f.e, 1);
    data_0203678c->cur = v;
}
