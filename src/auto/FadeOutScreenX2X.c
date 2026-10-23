/* compiler: 2.0/sp1p5 -profile */
extern void FadeOutScreenByCountWithX2X(int, int, int, int, int);
void FadeOutScreenX2X(int a, int b, int c) {
    FadeOutScreenByCountWithX2X(a, 0x20, 0, b, c);
}
