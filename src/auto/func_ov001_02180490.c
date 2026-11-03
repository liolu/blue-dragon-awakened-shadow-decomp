#include "m2c.h"

typedef struct G {
    u8 pad0[0x10];
    u16 f10;
    u16 f12;
    u8 pad14[5];
    u8 b19;
    u8 b1A;
    u8 b1B;
} G;

extern G *data_ov001_02196c40;
extern u8 data_ov001_02192e30[];

void func_ov001_02180490(u32 arg0, u16 *out) {
    out[0] = data_ov001_02196c40->f10;
    out[2] = out[0] + 12;
    switch (arg0) {
        case 0:
            break;
        case 1:
            out[1] = data_ov001_02196c40->f12 + data_ov001_02196c40->b1A;
            out[3] = out[1] + data_ov001_02192e30[data_ov001_02196c40->b1B];
            break;
        case 2:
            out[1] = data_ov001_02196c40->f12 - 13;
            out[3] = data_ov001_02196c40->f12;
            break;
        case 3:
            out[1] = data_ov001_02196c40->f12 + data_ov001_02196c40->b19;
            out[3] = out[1] + 13;
            break;
        case 4:
            out[1] = data_ov001_02196c40->f12;
            out[3] = out[1] + data_ov001_02196c40->b19;
            break;
    }
}
