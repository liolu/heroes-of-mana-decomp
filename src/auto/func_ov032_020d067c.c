typedef struct {
    unsigned char pad[0x64];
    int st;
} G;
extern G *data_ov000_02051548;
int GetUnitStatus(int);
void ObjSet(int, int, int, int);
void Routine_SoundEffect(int);

void func_ov032_020d067c(void) {
    if (GetUnitStatus(0xF00) == 2 || GetUnitStatus(0xF00) == 3) {
        switch (data_ov000_02051548->st) {
            case 0:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 21, 20);
                ObjSet(3840, 3, 0, 0);
                ObjSet(3840, 14, 13, 0);
                break;
            case 1:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 7, 11);
                ObjSet(3840, 3, 4, 0);
                ObjSet(3840, 14, 13, 0);
                break;
            case 2:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 31, 27);
                ObjSet(3840, 3, 6, 0);
                ObjSet(3840, 14, 13, 0);
                break;
            case 3:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 30, 9);
                ObjSet(3840, 3, 4, 0);
                ObjSet(3840, 14, 13, 0);
                break;
            case 4:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 11, 27);
                ObjSet(3840, 3, 0, 0);
                ObjSet(3840, 14, 13, 0);
                break;
            case 5:
                ObjSet(3840, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3840, 7, 16, 11);
                ObjSet(3840, 3, 4, 0);
                ObjSet(3840, 14, 13, 0);
                break;
        }
    } else if (GetUnitStatus(0xF19) == 2 || GetUnitStatus(0xF19) == 3) {
        switch (data_ov000_02051548->st) {
            case 0:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 21, 20);
                ObjSet(3865, 3, 0, 0);
                ObjSet(3865, 14, 13, 0);
                break;
            case 1:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 7, 11);
                ObjSet(3865, 3, 4, 0);
                ObjSet(3865, 14, 13, 0);
                break;
            case 2:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 31, 27);
                ObjSet(3865, 3, 6, 0);
                ObjSet(3865, 14, 13, 0);
                break;
            case 3:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 30, 9);
                ObjSet(3865, 3, 4, 0);
                ObjSet(3865, 14, 13, 0);
                break;
            case 4:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 11, 27);
                ObjSet(3865, 3, 0, 0);
                ObjSet(3865, 14, 13, 0);
                break;
            case 5:
                ObjSet(3865, 14, 12, 0);
                Routine_SoundEffect(0x27A);
                ObjSet(3865, 7, 16, 11);
                ObjSet(3865, 3, 4, 0);
                ObjSet(3865, 14, 13, 0);
                break;
        }
    }
}
