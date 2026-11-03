#include "m2c.h"
extern s32 func_ov001_0216dc50(void);
extern void func_ov001_0218169c(s32 k);
extern void func_ov001_021722e4(void *f);
extern void func_ov001_02174e5c(void);
extern u8 data_ov001_02196bb8;
void func_ov001_02174e0c(void) {
    switch (func_ov001_0216dc50()) {
        case 0:
            func_ov001_0218169c(7);
            break;
        case 1:
            func_ov001_0218169c(6);
            data_ov001_02196bb8 = 1;
            break;
        default:
            return;
    }
    func_ov001_021722e4(func_ov001_02174e5c);
}
