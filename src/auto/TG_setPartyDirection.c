/* compiler: 2.0/sp1p5 -profile */
extern int GetUnitStatus(int);
extern void ObjSet(int, int, int, int);
void TG_setPartyDirection(int d) {
    int i;
    for (i = 0; i < 11; i++) {
        if (GetUnitStatus(i) == 3 || GetUnitStatus(i) == 2) {
            ObjSet(i, 3, d, 0);
        }
    }
}
