/* compiler: 2.0/sp1p5 -O2,p */
/* near start: 3 diffs with profile "2.0/sp1p5 -O2,p" */
typedef struct {
    int v;
} W;
extern void func_ov004_020b90c0(int *, W);
extern void func_ov004_020b8f30(int *, W);
extern void G3_RotY(int, int);
void func_ov004_020bc5cc(int u, W w, ...) {
    int s[4];
    if (w.v == 0) {
        return;
    }
    func_ov004_020b90c0(&s[2], w);
    s[0] = s[2];
    func_ov004_020b8f30(&s[3], w);
    s[1] = s[3];
    G3_RotY(s[3] >> 4, s[0] >> 4);
}
