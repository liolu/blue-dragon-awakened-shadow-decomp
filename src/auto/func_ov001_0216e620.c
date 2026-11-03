#include "m2c.h"

extern void func_ov001_0216e710(void);
extern void func_ov001_02186aec(s32, s32, s32);
extern void func_ov001_021869fc(s32, s32, s32, s32);
extern s32 func_ov001_02186c94(s32, s32, s32);
extern s32 *data_ov001_02196b50;

void func_ov001_0216e620(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 j;
    s32 i;

    j = 6;
    func_ov001_0216e710();
    i = 0;
    do {
        data_ov001_02196b50[i] = func_ov001_02186c94(0, j, 1);
        func_ov001_02186aec(data_ov001_02196b50[i], -1, 1);
        i += 1;
        j += 1;
    } while (i < 4);
    func_ov001_021869fc(data_ov001_02196b50[0], -1, arg0, arg2);
    func_ov001_021869fc(data_ov001_02196b50[1], -1, arg1, arg2);
    func_ov001_021869fc(data_ov001_02196b50[2], -1, arg0, arg3);
    func_ov001_021869fc(data_ov001_02196b50[3], -1, arg1, arg3);
}
