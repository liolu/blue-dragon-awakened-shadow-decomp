#include "m2c.h"

typedef struct S {
    s32 f0;
    u8 pad[0x10];
    s32 f14;
    u8 pad2[4];
    u8 f1c;
} S;

void func_ov001_02186b4c(s32, s32, s32 *, s32 *);
void func_ov001_02182fec(s32);
s32 func_ov001_0218903c(s32, void *, s32, s32);
void func_ov001_021890e4(s32, s32);
extern u16 data_ov001_02192f72[];
extern S *data_ov001_02196c5c;
extern void func_ov001_02182f80(void);
extern void func_ov001_02182e24(void);

void func_ov001_02182d50(s32 arg0) {
    s32 sp0;
    s32 sp4;
    s32 lim;

    func_ov001_02186b4c(data_ov001_02196c5c->f0, 0, &sp0, &sp4);
    sp4 -= 0xc;
    lim = data_ov001_02192f72[data_ov001_02196c5c->f1c * 2];
    if (sp4 > lim) {
        func_ov001_02182fec(sp4);
        return;
    }
    func_ov001_02182fec(lim);
    if (data_ov001_02196c5c->f1c == 5) {
        data_ov001_02196c5c->f14 = func_ov001_0218903c(0, func_ov001_02182f80, 0, 0x78);
    } else {
        data_ov001_02196c5c->f14 = func_ov001_0218903c(0, func_ov001_02182e24, 0, 0x78);
    }
    func_ov001_021890e4(1, arg0);
}
