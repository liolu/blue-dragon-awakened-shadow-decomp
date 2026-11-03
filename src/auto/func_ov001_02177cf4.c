/* near start: 1 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    u32 pad0;
    u32 *p4;
    u8 arr[0x21];
    u8 n;
    u8 m;
} G;

extern u8 func_ov001_0216ede4(void);
extern void func_ov001_0218169c(s32);
extern void func_ov001_0216edf8(s8);
extern void func_ov001_0216ee0c(s8);
extern void func_ov001_021722e4(void *);
extern s32 func_ov001_02178348(void);
extern void func_ov001_021780e0(void);
extern void func_ov001_021781d4(void);
extern G *data_ov001_02196be0;
extern u8 func_ov001_02177eb8;

void func_ov001_02177cf4(void) {
    s32 c;

    c = func_ov001_0216ede4();
    switch (c) {
        case 0:
            break;
        case 0x80:
            if (data_ov001_02196be0->n != 0) {
                func_ov001_0218169c(3);
                data_ov001_02196be0->n--;
                data_ov001_02196be0->arr[data_ov001_02196be0->n] = 0;
                if (data_ov001_02196be0->n == 0) {
                    func_ov001_0216edf8(0);
                }
                func_ov001_0216ee0c(1);
            }
            break;
        case 0x82:
            func_ov001_0218169c(7);
            data_ov001_02196be0->m = 0;
            func_ov001_021722e4(&func_ov001_02177eb8);
            return;
        case 0x83:
            if (func_ov001_02178348() != 0) {
                func_ov001_0218169c(6);
                data_ov001_02196be0->m = 1;
            } else {
                data_ov001_02196be0->m = 2;
                func_ov001_0218169c(9);
            }
            *data_ov001_02196be0->p4 = (*data_ov001_02196be0->p4 & 0xC1FFFCFF) | 0x200;
            func_ov001_021722e4(&func_ov001_02177eb8);
            return;
        case 0xE01D:
        default:
            if (data_ov001_02196be0->n != 0x20) {
                func_ov001_0218169c(1);
                data_ov001_02196be0->arr[data_ov001_02196be0->n] = c;
                data_ov001_02196be0->n++;
                func_ov001_0216edf8(1);
                if (data_ov001_02196be0->n == 0x20) {
                    func_ov001_0216ee0c(0);
                }
            }
            break;
    }
    func_ov001_021780e0();
    func_ov001_021781d4();
}
