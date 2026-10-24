/* compiler: 1.2/sp3 */
void func_ov123_0209bce0(int, int);
int func_ov123_0209a660(int a) {
    int r0;
    int r2;
    int r4 = a;
    if (r4 == 0) {
        return 0;
    }
    switch (r4) {
        default:
            break;
        case 1:
            r0 = 9;
            r2 = -1;
            break;
        case 2:
        case 5:
            r0 = 0;
            r2 = 0;
            r4 = 0;
            break;
        case 3:
            r0 = 6;
            r2 = -10;
            break;
        case 4:
            r0 = 6;
            r2 = -30;
            break;
        case 6:
            r0 = 6;
            r2 = -70;
            break;
        case 7:
            r0 = 6;
            r2 = -80;
            break;
    }
    if (r0 != 0) {
        func_ov123_0209bce0(r0, r2 + 0xFFFEFA48);
    }
    return r4;
}
