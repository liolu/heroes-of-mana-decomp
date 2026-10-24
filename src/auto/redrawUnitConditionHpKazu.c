/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    short x;
    short y;
} P;
typedef struct {
    unsigned char pad[0x1ec];
    P *p;
} G;
extern G *data_ov000_02051548;
extern void DeleteNoAnimeObjOnlyOne(int);
extern void SetUnitConditionHpKazu(int);
void redrawUnitConditionHpKazu(int a) {
    P *p = data_ov000_02051548->p;
    if (p != 0) {
        short x = p->x;
        short y = p->y;
        DeleteNoAnimeObjOnlyOne((int) p);
        SetUnitConditionHpKazu(a);
        p    = data_ov000_02051548->p;
        p->y = y;
        p->x = x;
    }
}
