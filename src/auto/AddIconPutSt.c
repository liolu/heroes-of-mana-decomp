/* compiler: 2.0/sp1p5 -profile */
void AddIconPutSt(void **a, void **b) {
    a[0x7c / 4] = *b;
    *b          = a;
}
