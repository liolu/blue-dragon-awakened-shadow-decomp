#include "m2c.h"
void func_ov001_0216e710(void);
s32 func_ov001_02186c94(s32, u8, s32);
void func_ov001_02186aec(s32, s32, s32);
void func_ov001_021869fc(s32, s32, s32, s32);
extern u8 data_ov001_021925d4[];
extern s32 *data_ov001_02196b50;
void func_ov001_0216e564(s32 n, s32 a, s32 b, s32 c) {
    s32 i;
    u8 *t;
    func_ov001_0216e710();
    t = data_ov001_021925d4 + n * 2;
    for (i = 0; i < 2; i++, t++) {
        data_ov001_02196b50[i] = func_ov001_02186c94(0, *t, 1);
        func_ov001_02186aec(data_ov001_02196b50[i], -1, 1);
    }
    func_ov001_021869fc(data_ov001_02196b50[0], -1, a, c);
    func_ov001_021869fc(data_ov001_02196b50[1], -1, b, c);
}
