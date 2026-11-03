#include "m2c.h"

typedef struct {
    u8 pad[0x11C];
    u8 b11c;
    u8 b11d;
    u8 pad11e[3];
    s8 s121;
    u8 pad122;
    u8 b123;
    u8 b124;
    u8 b125;
} St;

extern St *data_ov001_02196b5c;
extern u8 *data_ov001_02193478[];
extern u8 data_ov001_02192640[];
extern u8 data_ov001_021925f4[];
s32 func_ov001_021881b8(s32);
void func_ov001_0216ff8c(s32);
s32 func_ov001_02188178(s32);
void func_ov001_0218169c(s32);
void func_ov001_0216fd64(s32);
void func_ov001_0216f600(void);
void func_ov001_0216f630(void);
s32 func_ov001_021881f8(s32);

void func_ov001_0216f8b8(void) {
    s32 i;
    s32 j;
    s32 k;
    St *s;
    if (func_ov001_021881b8(0x20)) {
        func_ov001_0216ff8c(0);
    }
    if (func_ov001_021881b8(0x40)) {
        func_ov001_0216ff8c(1);
    }
    if (func_ov001_021881b8(0x10)) {
        func_ov001_0216ff8c(2);
    }
    if (func_ov001_021881b8(0x80)) {
        func_ov001_0216ff8c(3);
    }
    if (func_ov001_02188178(1)) {
        s = data_ov001_02196b5c;
        i = s->s121;
        if (i < 0x2F) {
            if (s->b124 == 0) {
                func_ov001_0218169c(9);
                return;
            }
            s->b11c = data_ov001_02193478[s->b11d][i];
            if (data_ov001_02196b5c->b11d == 1) {
                func_ov001_0216fd64(0);
            }
            return;
        }
        j = i - 0x2F;
        if (j < 4) {
            switch (j) {
                case 0:
                    func_ov001_0216f600();
                    return;
                case 1:
                    func_ov001_0216f630();
                    return;
                case 2:
                    if (s->b124 == 0) {
                        func_ov001_0218169c(9);
                        return;
                    }
                    break;
                case 3:
                    if (s->b123 == 0) {
                        func_ov001_0218169c(9);
                        return;
                    }
                    break;
            }
            if (s->b11d == 1) {
                func_ov001_0216fd64(0);
            }
            data_ov001_02196b5c->b11c = data_ov001_02192640[(u32) (i - 0x2F)];
            return;
        }
        k       = i - 0x33;
        s->b11c = data_ov001_021925f4[(u32) (i - 0x33)];
    }
    if (func_ov001_021881b8(2)) {
        s = data_ov001_02196b5c;
        if (s->b123 == 0) {
            if (s->b125 != 0) {
                return;
            }
            func_ov001_0218169c(9);
            data_ov001_02196b5c->b125 = 1;
            return;
        }
        s->b11c = 0x80;
    } else {
        if (func_ov001_021881f8(2)) {
            data_ov001_02196b5c->b125 = 0;
        }
    }
    if (func_ov001_02188178(0x400)) {
        func_ov001_0216f600();
    }
    if (func_ov001_02188178(0x800)) {
        func_ov001_0216f630();
    }
}
