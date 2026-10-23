/* compiler: 2.0/sp1p5 -profile */
extern void MessageRectChange(short *, int);
void Routine_MessageRect(short a, short b, short c, short d) {
    short r[4];
    r[0] = a;
    r[1] = b;
    r[2] = c;
    r[3] = d;
    MessageRectChange(r, 0);
}
