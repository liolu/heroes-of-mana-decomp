/* compiler: 2.0/sp1p5 -profile */
extern int GetMapSitePer(int);
extern char *data_0203673c;
void SetResultMapReferenceRate(int a) {
    unsigned r  = GetMapSitePer(a);
    unsigned *p = *(unsigned **) (data_0203673c + 0x30);
    p[4]        = (p[4] & ~0x3fc000) | ((r << 24) >> 10);
}
