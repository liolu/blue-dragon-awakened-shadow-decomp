#include "m2c.h"

void qr2_keybuffer_add(s32, s32);
extern u8 data_0210e920[];

void func_02058b34(s32 a, s32 b) {
    s32 i;
    u8 *p;
    switch (a) {
        case 0:
            qr2_keybuffer_add(b, 8);
            qr2_keybuffer_add(b, 0xA);
            qr2_keybuffer_add(b, 0x32);
            qr2_keybuffer_add(b, 0x33);
            qr2_keybuffer_add(b, 0x34);
            qr2_keybuffer_add(b, 0x35);
            qr2_keybuffer_add(b, 0x36);
            p = data_0210e920;
            for (i = 0; i < 0x9A; i++) {
                if (*p != 0) {
                    qr2_keybuffer_add(b, *p);
                }
                p += 0xC;
            }
            break;
        case 1:
        case 2:
            break;
    }
}
