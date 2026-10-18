/* compiler: 1.2/sp2p3 */
extern int func_ov123_0206cd54();
extern int func_ov123_02074520();
extern unsigned char OSi_ThreadInfo[];
void func_ov123_0206cd00(int a) {
    unsigned char *t = *(unsigned char **) (*(unsigned char **) (OSi_ThreadInfo + 4) + 0xA4);
    if (t == 0) {
        return;
    }
    if (t[9] != 0) {
        func_ov123_02074520(a, t);
        return;
    }
    func_ov123_0206cd54(a, t);
}
