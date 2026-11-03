#include "m2c.h"
typedef struct S {
    u8 on;
    u8 b1;
    u8 b2;
    u8 b3;
    u32 w4;
    s32 w8;
    s32 wc;
    s64 t10;
    s64 t18;
} S;
extern S *data_0210e8e0;
s64 OS_GetTick(void);
void func_02057a98(int arg0) {
    if (data_0210e8e0 == 0) {
        return;
    }
    if (data_0210e8e0->on == 0) {
        return;
    }
    data_0210e8e0->w8  = 0;
    data_0210e8e0->wc  = 0;
    data_0210e8e0->b2  = 0;
    data_0210e8e0->t18 = OS_GetTick();
    if (arg0 != 0) {
        return;
    }
    data_0210e8e0->t10 = OS_GetTick();
}
