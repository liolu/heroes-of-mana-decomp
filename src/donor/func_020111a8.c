/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207aea4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_alarm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef void (*UnkSndAlarmHandler)(void *arg);
typedef struct UnkSndAlarm {
    UnkSndAlarmHandler func;
    void *arg;
    u8 id;
} UnkSndAlarm;
extern u8 func_020111a8(s32 no, UnkSndAlarmHandler func, void *arg);
extern UnkSndAlarm data_0203a4c0[8];
u8 func_020111a8(s32 no, UnkSndAlarmHandler func, void *arg) {
    UnkSndAlarm *alarm = &data_0203a4c0[no];

    alarm->func = func;
    alarm->arg  = arg;
    alarm->id++;
    return alarm->id;
}
