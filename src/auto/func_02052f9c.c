#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    s32 *f4;
    u8 pad1[5];
    u8 fD;
    u8 pad2[7];
    u8 f15;
    u8 pad3[0x186];
    s32 f19C;
    s32 f1A0;
    u8 pad4[4];
    u8 f1A8;
    u8 f1A9;
    u8 pad5[0x46];
    s64 f1F0;
    u8 pad6[0x10];
    s32 f208;
    u8 pad7[0xC4];
    s8 f2D0;
} G;

s64 OS_GetTick(void);
void gt2CloseAllConnectionsHard(s32);
void NNCancel(s32);
s32 func_0204e34c(void);
void func_02059244(s32);
G *func_02059234(void);
void func_02056cf4(void);
void func_02056bc0(s32);
void func_02052cec(s32, s32);

s32 func_02052f9c(s32 arg0, s32 arg1) {
    G *g;

    if (func_0204e34c() != 5) {
        return 0;
    }
    if (func_02059234()->f15 == 2) {
        return 1;
    }
    if (arg0 != 0) {
        func_02052cec(arg0, arg1 + 0xFFFEC780);
        return 1;
    }
    func_02059234()->f2D0 = 0;
    if (func_02059234()->f1A9 == 1 || func_02059234()->f1A8 == 1 || func_02059234()->f1A8 == 2) {
        return 1;
    }
    if (func_02059234()->f19C != 0) {
        NNCancel(func_02059234()->f19C);
        func_02059234()->f19C = 0;
    }
    if (func_02059234()->fD != 0) {
        if (func_02059234()->f1A8 == 0) {
            func_02059234()->f1A8 = 3;
            gt2CloseAllConnectionsHard(*func_02059234()->f4);
        }
    } else if (func_02059234()->f15 == 3) {
        func_02052cec(6, 0xFFFEC5D2);
    } else if (func_02059234()->f208 != 0) {
        func_02056cf4();
    } else if (func_02059234()->f1A0 == 1) {
        func_02059244(0x12);
        g       = func_02059234();
        g->f1F0 = OS_GetTick();
    } else {
        func_02056bc0(1);
    }
    return 1;
}
