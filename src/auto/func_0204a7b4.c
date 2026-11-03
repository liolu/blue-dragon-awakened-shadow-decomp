#include "m2c.h"

extern s32 OS_SNPrintf(char *, s32, char *, char *, char *);
extern void *memmove(void *, const void *, u32);
extern s32 strlen(char *);
extern char *strstr(s32, char *);
extern s32 func_0204aac8(u8 *, s32 *, s32);
extern char data_020f9504[];
extern char data_020f95dc[];

s32 func_0204a7b4(u8 *arg0, char *arg1, char *arg2) {
    s32 temp_r1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r9;
    s8 temp_r9_2;
    char *temp_r8;
    char *temp_r0;
    s32 *temp_r5;

    temp_r5   = (s32 *) (arg0 + 0x19F8);
    temp_r4   = strlen(arg2);
    temp_r9   = strlen(data_020f95dc);
    temp_r4_2 = temp_r4 + ((temp_r9 - 4) + strlen(arg1));
    temp_r1   = temp_r5[2] - temp_r5[1];
    if ((temp_r4_2 + 1 > temp_r1) && (func_0204aac8(arg0, temp_r5, (temp_r4_2 - temp_r1) + 1) == 0)) {
        return 1;
    }
    temp_r0   = strstr(temp_r5[0], data_020f9504);
    temp_r8   = temp_r0 + 2;
    temp_r9_2 = temp_r0[2];
    memmove(temp_r8 + temp_r4_2, temp_r8, strlen(temp_r8) + 1);
    temp_r8[OS_SNPrintf(temp_r8, temp_r4_2 + 1, data_020f95dc, arg1, arg2)] = temp_r9_2;
    temp_r5[1]                                                              = temp_r5[1] + temp_r4_2;
    return 0;
}
