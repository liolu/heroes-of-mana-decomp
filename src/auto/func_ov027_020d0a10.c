typedef struct G {
    unsigned char pad[0x54];
    int w54;
    int w58;
    int w5c;
    int w60;
} G;
extern void ObjSet(int, int, int, int);
extern void MTG_StartEvent(void);
extern void TG_partyLookObj_withRelay(int);
extern void WaitSyncCounter(int);
extern void CameraMoveAndWait(int, int, int, int, int, int, int);
extern void MessagePutAndWait(int);
extern void MTG_EndEvent(void);
extern void func_ov027_020d06b4(void);
extern void func_ov027_020d06f0(void);
extern void func_ov027_020d0728(void);
extern void func_ov027_020d0764(void);
extern G *data_ov000_02051548;

void func_ov027_020d0a10(int a) {
    int f;
    f = 0;
    ObjSet(a, 0x27, 0, 0);
    if (data_ov000_02051548->w54 == 0 && data_ov000_02051548->w58 == 0 && data_ov000_02051548->w5c == 0 &&
        data_ov000_02051548->w60 == 0) {
        f = 1;
    }
    if (f == 1) {
        MTG_StartEvent();
        TG_partyLookObj_withRelay(a);
        WaitSyncCounter(0x20);
        CameraMoveAndWait(0x40, 1, a, 0, -1, -1, -1);
        WaitSyncCounter(0x30);
    }
    if (a == 0xF0F) {
        func_ov027_020d06b4();
    } else if (a == 0xF10) {
        func_ov027_020d06f0();
    } else if (a == 0xF11) {
        func_ov027_020d0728();
    } else {
        func_ov027_020d0764();
    }
    if (f != 1) {
        return;
    }
    WaitSyncCounter(0x60);
    MessagePutAndWait(0x8D3);
    WaitSyncCounter(0x28);
    MessagePutAndWait(-1);
    WaitSyncCounter(0x20);
    MTG_EndEvent();
}
