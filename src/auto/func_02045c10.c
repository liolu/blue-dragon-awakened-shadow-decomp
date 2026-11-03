#include "m2c.h"
typedef struct {
    u8 v : 4;
} BF;
void MI_CpuCopy8(void *, u8 *, s32);
u8 func_02045cfc(u8 *);
extern u8 data_020e4c18;
extern u8 data_020e4c28;
extern u8 data_020f918c;

u8 func_02045c10(u8 *p) {
    u8 r5;
    u8 *r4;
    u32 t;
    r4 = p + 0x300;
    r5 = func_02045cfc(p);
    r4 = r4 + r5 * 0x24;
    t  = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 4) {
        MI_CpuCopy8(&data_020f918c, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 6;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 7) {
        MI_CpuCopy8(&data_020e4c18, r4 + 4, 8);
        r4[3] = 8;
        r4[1] = 9;
        r5 += 1;
        r4 += 0x24;
    }
    t = ((BF *) (p + 0xD0C))->v;
    if (t == 0 || t == 8) {
        MI_CpuCopy8(&data_020e4c28, r4 + 4, 0xB);
        r4[3] = 0xB;
        r4[1] = 0xA;
        r5 += 1;
    }
    return r5;
}
