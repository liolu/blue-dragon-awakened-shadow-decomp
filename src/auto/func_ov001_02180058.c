#include "m2c.h"

typedef struct {
    u8 pad[0x14];
    u8 f14;
    u8 pad1[3];
    u8 b18;
    u8 pad2;
    u8 b1a;
    u8 b1b;
    u8 state;
    u8 out;
    u8 b1e;
} G;

extern G *data_ov001_02196c40;
s32 func_ov001_021803b8(void);
s32 func_ov001_02180444(s32);
void func_ov001_0218169c(s32);
void func_ov001_021816c0(s32);
void func_ov001_021884c0(void *);
void func_ov001_02180324(s32);
void func_ov001_02180350(void);
void func_ov001_021801dc(void);

void func_ov001_02180058(void) {
    data_ov001_02196c40->out = 0;
    switch (data_ov001_02196c40->state) {
        case 0:
            if (data_ov001_02196c40->b1e != 0) {
                return;
            }
            switch (func_ov001_021803b8()) {
                case 1:
                    if (data_ov001_02196c40->b1b == 0) {
                        return;
                    }
                    func_ov001_0218169c(0x16);
                    func_ov001_021816c0(0);
                    data_ov001_02196c40->out = 1;
                    func_ov001_021884c0(&data_ov001_02196c40->f14);
                    data_ov001_02196c40->b18   = data_ov001_02196c40->b1a;
                    data_ov001_02196c40->state = 1;
                    return;
                case 2:
                    func_ov001_02180324(2);
                    return;
                case 3:
                    func_ov001_02180324(3);
                    return;
                case 4:
                    func_ov001_02180350();
                    return;
            }
            break;
        case 1:
            func_ov001_021801dc();
            return;
        case 2:
            if (func_ov001_02180444(2) != 2) {
                data_ov001_02196c40->out   = 5;
                data_ov001_02196c40->state = 0;
                return;
            }
            if (func_ov001_021803b8() != 2) {
                return;
            }
            func_ov001_02180324(2);
            return;
        case 3:
            if (func_ov001_02180444(3) != 3) {
                data_ov001_02196c40->out   = 7;
                data_ov001_02196c40->state = 0;
                return;
            }
            if (func_ov001_021803b8() != 3) {
                return;
            }
            func_ov001_02180324(3);
            break;
    }
}
