/* compiler: 1.2/sp3 */
extern signed char data_ov123_020da754[];
extern int rand(void);
void func_ov123_0207fdd4(char *buf, int n) {
    int i;
    for (i = 0; i < n; i++) {
        unsigned int r = rand();
        buf[i]         = data_ov123_020da754[r % 62u];
    }
    buf[i] = 0;
}
