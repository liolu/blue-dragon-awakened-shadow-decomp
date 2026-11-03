#include "m2c.h"
typedef struct {
    s32 v;
} W;
extern s32 data_0210f674;
extern u8 data_0210f678[];
extern u8 data_020fbc58[];
extern u8 data_020fbc60[];
extern u8 data_020fbc64[];
extern s32 SOC_InetNtoA(W);
extern void func_020068c0(u8 *, u8 *, ...);

u8 *gt2AddressToString(s32 a, s32 b, u8 *buf) {
    W w;
    if (buf == 0) {
        data_0210f674 ^= 1;
        buf = data_0210f678 + data_0210f674 * 0x16;
    }
    if (a != 0) {
        w.v = a;
        if (b != 0) {
            func_020068c0(buf, data_020fbc58, SOC_InetNtoA(w), b);
        } else {
            func_020068c0(buf, data_020fbc60, SOC_InetNtoA(w));
        }
    } else if (b == 0) {
        *buf = 0;
    } else {
        func_020068c0(buf, data_020fbc64, b);
    }
    return buf;
}
