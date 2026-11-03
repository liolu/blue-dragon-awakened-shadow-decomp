#include "m2c.h"
typedef struct {
    s32 a, b, c;
} T3;
extern T3 data_ov001_02192e20;
u8 func_ov001_02186e78(s32);
void func_ov001_02172344(s32, s32 *);
void func_ov001_02182950(s32, s32, s32, s32, s32);
void func_ov001_021722e4(void (*)(void));
void func_ov001_0217f084(void);
void func_ov001_0217effc(void) {
    s32 idx;
    T3 tbl;
    tbl = data_ov001_02192e20;
    if (func_ov001_02186e78(1) != 0) {
        return;
    }
    if (func_ov001_02186e78(0) != 0) {
        return;
    }
    func_ov001_02172344(0, &idx);
    func_ov001_02182950(((s32 *) &tbl)[idx], 1, 1, -1, 0);
    func_ov001_021722e4(func_ov001_0217f084);
}
