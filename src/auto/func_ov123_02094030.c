int MI_CpuCopy8(char *, int, int);
int func_02014344(char *, char *);
int func_02014408(char *, int, int);
int func_020144fc(char *);
void func_ov123_02094030(int arg0, int arg1) {
    char sp14[88];
    char sp3[17];
    char sp0[3];
    func_020144fc(sp14);
    func_02014408(sp14, arg0, 0x18);
    func_02014344(sp0, sp14);
    MI_CpuCopy8(sp3, arg1, 0xD);
}
