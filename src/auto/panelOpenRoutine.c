/* compiler: 2.0/sp1p5 -profile */
typedef unsigned int u32;
typedef struct S {
    int a0;
    u32 lo : 18;
    u32 b18 : 1;
    u32 hi : 13;
    u32 w8lo : 8;
    u32 w8 : 3;
    u32 w8hi : 21;
    int ac;
    u32 lo10 : 29;
    u32 b29 : 1;
    u32 hi10 : 2;
} S;
typedef struct D {
    int a0;
    S *s;
} D;
extern D data_ov000_02051544;
extern int PM_SetLCDPower(int);
extern void VBlankIntrWaitInGame(void);
extern void MoveUnitAndAnime(int, int);
extern void ScenarioScriptMove(void);
extern void ComIcomMoveOnly(void *, int, int, int);

void panelOpenRoutine(void) {
    u32 saved = data_ov000_02051544.s->b18;
    u32 f     = data_ov000_02051544.s->b29;
    if (f == 0 || data_ov000_02051544.s->w8 == 0) {
        if (f == 0) {
            data_ov000_02051544.s->b18 = 1;
        }
        if (PM_SetLCDPower(0) != 1) {
            do {
                VBlankIntrWaitInGame();
            } while (PM_SetLCDPower(0) != 1);
        }
        for (;;) {
            if (((int) (*(unsigned short *) 0x027FFFA8 & 0x8000) >> 15) == 0) {
                break;
            }
            VBlankIntrWaitInGame();
            if (data_ov000_02051544.s->b29 == 0) {
                continue;
            }
            MoveUnitAndAnime(0, 1);
            ScenarioScriptMove();
            ComIcomMoveOnly((char *) data_ov000_02051544.s + 0x78c, -0x80, 0x180, 0);
            if (data_ov000_02051544.s->w8 == 0) {
                continue;
            }
            break;
        }
        if (PM_SetLCDPower(1) != 1) {
            do {
                VBlankIntrWaitInGame();
            } while (PM_SetLCDPower(1) != 1);
        }
        if (data_ov000_02051544.s->b29 == 0) {
            data_ov000_02051544.s->b18 = saved;
        }
    }
}
