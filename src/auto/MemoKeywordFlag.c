/* compiler: 2.0/sp1p5 -profile */
typedef unsigned short u16;
typedef struct K {
    u16 used : 1;
    u16 f1 : 1;
    u16 id : 8;
    u16 val : 6;
} K;
extern K *Search_KEYWORD_INFO(int);
extern K *GetBlank_KEYWORD_INFO(void);
void MemoKeywordFlag(int id, int val) {
    K *k = Search_KEYWORD_INFO(id);
    if (k == 0) {
        k = GetBlank_KEYWORD_INFO();
        if (k == 0) {
            return;
        }
        k->used = 1;
        k->f1   = 1;
        k->id   = (u16) id;
    }
    k->val = (u16) val;
}
