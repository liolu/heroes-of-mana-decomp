void func_ov004_020bc360(int a, int b) {
    switch (b) {
        case 0:
            *(volatile int *) 0x4000440 = 0;
            break;
        case 1:
            *(volatile int *) 0x4000440 = 2;
            break;
        case 2:
            *(volatile int *) 0x4000440 = 3;
            break;
    }
}
