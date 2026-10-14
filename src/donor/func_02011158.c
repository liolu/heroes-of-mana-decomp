/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207ae54 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_alarm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern void func_02011158(void);
extern UnkSndAlarm data_0203a4c0[8];
void func_02011158(void) {
    s32 i;

    for (i = 0; i < 8; i++) {
        data_0203a4c0[i].func = 0;
        data_0203a4c0[i].arg  = 0;
        data_0203a4c0[i].id   = 0;
    }
}
