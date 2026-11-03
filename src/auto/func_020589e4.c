#include "m2c.h"
void qr2_buffer_addA(s32, s32);
void qr2_buffer_add_int(s32, s32);
u8 *func_02059234(void);
extern u8 data_0210e920[];
extern u8 data_0210e921[];
extern s32 *data_0210e928[];

void func_020589e4(s32 a, s32 b) {
    s32 t;
    switch (a) {
        case 8:
            qr2_buffer_add_int(b, func_02059234()[0x14]);
            return;
        case 10:
            qr2_buffer_add_int(b, func_02059234()[0x16]);
            return;
        case 0x32:
            qr2_buffer_add_int(b, *(s32 *) (func_02059234() + 0x200));
            return;
        case 0x33:
            qr2_buffer_add_int(b, func_02059234()[0x15]);
            return;
        case 0x34:
            qr2_buffer_add_int(b, *(s32 *) (func_02059234() + 0x20));
            return;
        case 0x35:
            qr2_buffer_add_int(b, 3);
            return;
        case 0x36:
            qr2_buffer_add_int(b, 1);
            return;
        default:
            t = a - 0x64;
            if (t < 0) {
                return;
            }
            if (t >= 0x9a) {
                return;
            }
            t = t * 0xc;
            if (data_0210e920[t] == 0) {
                return;
            }
            if (data_0210e921[t] != 0) {
                qr2_buffer_addA(b, *(s32 *) ((u8 *) data_0210e928 + t));
                return;
            }
            qr2_buffer_add_int(b, **(s32 **) ((u8 *) data_0210e928 + t));
            return;
    }
}
