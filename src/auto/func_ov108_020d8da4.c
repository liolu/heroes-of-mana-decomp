typedef struct {
    char p[0x7c];
    int a;
    int b;
    int c;
    int d;
} S;
extern S *data_ov000_02051548;
extern int GetRnd(void);
extern void SetDestination(int, int, int);
extern unsigned long long func_0202d478(int, int);
void func_ov108_020d8da4(int x) {
    S *s         = data_ov000_02051548;
    long long r1 = GetRnd();
    long long r2 = GetRnd();
    r1           = func_0202d478(r1, s->b);
    r2           = func_0202d478(r2, s->d);
    SetDestination(x, s->a + (int) (r1 >> 32), s->c + (int) (r2 >> 32));
}
