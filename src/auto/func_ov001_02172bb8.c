#include "m2c.h"

typedef struct {
    u16 pri : 2;
    u16 rest : 14;
} Bf;

extern u8 data_ov001_02193768[];
extern s32 data_ov001_02196b98;
extern u8 *data_ov001_0219374c[];
extern u8 data_ov001_02193778[], data_ov001_0219378c[], data_ov001_021937a0[], data_ov001_021937b4[];
extern u8 data_ov001_021937c8[], data_ov001_021937e0[], data_ov001_021937f8[], data_ov001_02193810[];
extern u8 data_ov001_02193828[], data_ov001_02193840[], data_ov001_02193858[], data_ov001_0219386c[];

extern void func_020056a4(void);
extern void GXS_LoadBGPltt(void);
extern void GXS_LoadOBJ(void);
extern void GXS_LoadOBJPltt(void);
extern void func_02005704(void);
extern void GX_LoadBGPltt(void);
extern void GX_LoadOBJ(void);
extern void GX_LoadOBJPltt(void);
extern void func_020053a4(void);
extern void func_ov001_02172d98(void);

void func_ov001_02180a3c(void);
void func_ov001_02172404(void);
void func_ov001_0216e52c(void);
void func_ov001_0216e750(void);
void func_ov001_0216e19c(void);
u8 func_ov001_0217236c(void);
s32 func_ov001_02172394(s32);
s32 func_ov001_02172454(void *);
void *func_ov001_0216e2bc(void *);
void func_ov001_02186b7c(s32, void *);
void func_ov001_0216e31c(void *, void *);
u32 func_ov001_0217237c(void);
void func_ov001_0218798c(s32, s32);
void func_ov001_021722e4(void *);

void func_ov001_02172bb8(void) {
    u32 m;
    func_ov001_02180a3c();
    func_ov001_02172404();
    func_ov001_0216e52c();
    func_ov001_0216e750();
    func_ov001_0216e19c();
    if (func_ov001_0217236c() == 1 && func_ov001_02172394(2) != 0) {
        data_ov001_02196b98 = func_ov001_02172454(data_ov001_02193768);
    } else {
        data_ov001_02196b98 = func_ov001_02172454(data_ov001_0219374c[func_ov001_0217236c()]);
    }
    func_ov001_02186b7c(1, func_ov001_0216e2bc(data_ov001_02193778));
    func_ov001_02186b7c(0, func_ov001_0216e2bc(data_ov001_0219378c));
    func_ov001_0216e31c(data_ov001_021937a0, func_020056a4);
    func_ov001_0216e31c(data_ov001_021937b4, GXS_LoadBGPltt);
    func_ov001_0216e31c(data_ov001_021937c8, GXS_LoadOBJ);
    func_ov001_0216e31c(data_ov001_021937e0, GXS_LoadOBJPltt);
    func_ov001_0216e31c(data_ov001_021937f8, func_02005704);
    func_ov001_0216e31c(data_ov001_02193810, GX_LoadBGPltt);
    func_ov001_0216e31c(data_ov001_02193828, GX_LoadOBJ);
    func_ov001_0216e31c(data_ov001_02193840, GX_LoadOBJPltt);
    switch (func_ov001_0217237c()) {
        case 0:
            func_ov001_0216e31c(data_ov001_02193858, func_020053a4);
            break;
        case 1:
            func_ov001_0216e31c(data_ov001_0219386c, func_020053a4);
            break;
    }
    ((volatile Bf *) 0x400100a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    ((volatile Bf *) 0x400000a)->pri = 3;
    func_ov001_0218798c(1, 2);
    func_ov001_0218798c(0, 2);
    func_ov001_021722e4(func_ov001_02172d98);
}
