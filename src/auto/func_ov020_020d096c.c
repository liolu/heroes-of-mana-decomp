extern void MTG_StartEvent(int);
extern int GetUnitStatus(int);
extern void CameraMoveAndWait(int, int, int, int, int, int, int);
extern void WaitSyncCounter(int);
extern void MessagePutAndWait(int);
void func_ov020_020d096c(int msg) {
    MTG_StartEvent(msg);
    CameraMoveAndWait(0x20, 1, GetUnitStatus(7) == 3 ? 7 : 12, 0, -1, -1, -1);
    WaitSyncCounter(0x10);
    MessagePutAndWait(msg);
    WaitSyncCounter(0x20);
}
