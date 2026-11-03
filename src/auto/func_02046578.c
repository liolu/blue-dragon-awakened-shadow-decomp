#include "m2c.h"

typedef struct S {
    u8 pad[0xD0B];
    u8 lo : 4;
    u8 hi : 4;
    u8 pad2[6];
    u8 b12;
    u8 pad3[3];
    u16 h16;
} S;
s32 func_02045ad0(s32);
s32 func_02046700(S *);
s32 func_020462e8(S *);
void func_02046114(s32);

s32 func_02046578(S *arg0, s32 arg1) {
    s32 state = arg1;
    switch (state) {
        case 3:
            if (arg0->b12 != 0 || arg0->h16 != 0) {
                if (func_02045ad0(1) != 0) {
                    state = 4;
                } else {
                    state = func_02046700(arg0);
                }
            } else {
                if (arg0->hi >= 1) {
                    state = 6;
                } else {
                    state = func_020462e8(arg0);
                }
            }
            break;
        case 4:
            state = func_02046700(arg0);
            break;
        case 5:
            if (arg0->hi >= 1) {
                state = 6;
            } else {
                state = func_020462e8(arg0);
            }
            break;
    }
    func_02046114(state);
    return state;
}
