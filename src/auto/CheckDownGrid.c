/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    char p0[8];
    unsigned a : 29;
    unsigned f : 1;
    unsigned b : 2;
    char p1[0x20];
    unsigned short g : 1;
    unsigned short h : 1;
    unsigned short r : 14;
    char p2[0x32];
    signed char x;
    signed char y;
} O;
extern int CheckDropItem(int, int);
extern void GetItemFromMap(O *);
void CheckDownGrid(O *o) {
    if (o->h && !o->f) {
        if (CheckDropItem(o->x, o->y) == 1) {
            GetItemFromMap(o);
        }
    }
}
