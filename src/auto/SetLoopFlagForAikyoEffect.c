/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    char p[0x38];
    unsigned char id;
} O;
extern O *Get_aONEOBJadrsByCharno(int);
extern void SetLoopFlagAikyoEffect(int, int, int, int);
void SetLoopFlagForAikyoEffect(int a, int ch, int c, int d) {
    int id = -1;
    if (ch != -1) {
        O *o = Get_aONEOBJadrsByCharno(ch);
        if (o) {
            id = o->id;
        }
    }
    SetLoopFlagAikyoEffect(a, id, c, d);
}
