/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
typedef struct {
    u16 a : 1;
    u16 b : 1;
    u16 id : 10;
    u16 f : 4;
} UI;
UI *Search_UNIT_INFO(int, int);
UI *GetBlank_UNIT_INFO(void);
void MemoPersonFlag(int id, int f) {
    UI *p = Search_UNIT_INFO(id, f);
    if (p == 0) {
        p = GetBlank_UNIT_INFO();
        if (p == 0) {
            return;
        }
        p->a  = 1;
        p->b  = 1;
        p->id = (u16) id;
    }
    p->f = (u16) f;
}
