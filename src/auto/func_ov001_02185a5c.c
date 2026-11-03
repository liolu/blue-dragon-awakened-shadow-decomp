#include "m2c.h"

typedef struct {
    u8 pad0[0x64A];
    u16 h64a;
    u8 pad1[0xA90 - 0x64C];
    u8 state;
    u8 pad2[0xAB4 - 0xA91];
    u8 buf[1];
} Game;

extern Game *data_ov001_02196c6c;

u16 func_ov001_02183f40(void);
void func_ov001_02183618(void *, u16);
s32 func_ov001_02183f54(s32);
s32 func_ov001_02183a64(void);
void func_ov001_02183acc(void);
void func_ov001_02183bc4(void);
s32 func_ov001_02184a0c(void);
s32 func_ov001_021852a0(void);

void func_ov001_02185a5c(void) {
    switch (func_ov001_02183f40()) {
        case 1:
            func_ov001_02183618(data_ov001_02196c6c->buf, data_ov001_02196c6c->h64a);
            return;
        case 2:
            if (func_ov001_02183f54(2) != 0) {
                data_ov001_02196c6c->state = 5;
                return;
            }
            if (func_ov001_02183f54(3) != 0 || func_ov001_02183f54(4) != 0) {
                data_ov001_02196c6c->state = 6;
                return;
            }
            if (data_ov001_02196c6c->state != 5) {
                return;
            }
            if (func_ov001_02183f54(2) == 0) {
                data_ov001_02196c6c->state = 0xD;
            }
            return;
        case 3:
            if (func_ov001_02183a64() != 0) {
                func_ov001_02183acc();
                return;
            }
            if ((u8) (data_ov001_02196c6c->state + 0xFA) > 1) {
                return;
            }
            if (func_ov001_02183f54(3) == 0) {
                data_ov001_02196c6c->state = 0x12;
            }
            return;
        case 5:
            data_ov001_02196c6c->state = 7;
            return;
        case 7:
            func_ov001_02183bc4();
            data_ov001_02196c6c->state = 1;
            return;
        case 0:
            switch (func_ov001_02184a0c()) {
                case 1:
                    func_ov001_021852a0();
                    return;
                case 0:
                    data_ov001_02196c6c->state = 0x1F;
                    return;
                case 3:
                    return;
                default:
                    data_ov001_02196c6c->state = 0x1F;
                    break;
            }
            break;
    }
}
