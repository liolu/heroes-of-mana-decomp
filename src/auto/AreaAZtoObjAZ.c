/* compiler: 2.0/sp1p5 -profile */
void AreaAZtoObjAZ(int *a, int *b) {
    *a = (*a << 14) - 0x4E000;
    *b = (*b << 14) - 0x4E000;
}
