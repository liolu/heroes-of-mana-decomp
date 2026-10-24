/* compiler: 2.0/sp1p5 -profile */
extern void MIi_CpuClear16(int, void *, int);
extern void PutAll_Anything_SyouriHaibokuJouken(int, void *);
void Put_Any_SyouriHaibokuJouken(int a, int b, int c, int d, int e) {
    int s[4];
    MIi_CpuClear16(0, s, 0x10);
    s[0] = b;
    s[1] = c;
    s[2] = d;
    s[3] = e;
    PutAll_Anything_SyouriHaibokuJouken(a, s);
}
