/* compiler: 1.2/sp3 */
int func_020213f0(int, char *, int);
extern char data_ov123_020d8298;
extern int data_ov123_020e46cc;
int func_ov123_020c27ac(int *arg0) {
    int var_r4;
    int var_r8;
    int var_r7;
    var_r4 = 0;
    *arg0  = data_ov123_020e46cc + 0x1300;
    var_r7 = *arg0;
    for (var_r8 = 0; var_r8 < 0x14; var_r8++) {
        if (func_020213f0(var_r7 + 0x20, &data_ov123_020d8298, 6) != 0) {
            var_r4 += 1;
        }
        var_r7 += 0x2A;
    }
    return var_r4;
}
