#include "m2c.h"
typedef struct {
    void (*f[5])(void *);
} Tbl;
typedef struct {
    u8 pad[4];
    u32 *reg;
    u8 pad2[0x15 - 8];
    u8 flag;
} O;
extern Tbl data_ov001_02192b48;
extern O *data_ov001_02196be4;
s32 func_ov001_02182cd4(void);
void func_ov001_021722e4(void (*)(void));
void func_ov001_02172344(s32 *, s32);
void func_ov001_021787c8(void);
void func_ov001_02178d04(void);
void func_ov001_02178f1c(void) {
    s32 idx;
    Tbl t = data_ov001_02192b48;
    if (func_ov001_02182cd4() != 0) {
        return;
    }
    if (data_ov001_02196be4->flag == 0) {
        *data_ov001_02196be4->reg &= 0xc1fffcff;
        func_ov001_021722e4(func_ov001_021787c8);
    } else {
        func_ov001_02172344(&idx, 0);
        t.f[idx]((u8 *) data_ov001_02196be4 + 8);
        func_ov001_021722e4(func_ov001_02178d04);
    }
}
