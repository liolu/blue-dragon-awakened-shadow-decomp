#include "m2c.h"
typedef struct {
    u16 a[8];
} T;
extern T *data_ov001_02196c60;
s32 func_ov001_0218afa0(s32, s32);
s32 OS_DisableInterrupts(void);
void OS_RestoreInterrupts(s32);
void func_ov001_0218f1bc(s32);
void func_ov001_02183734(s32 aid) {
    u16 mask;
    s32 en;
    if (func_ov001_0218afa0(aid, 1) != 0) {
        return;
    }
    mask = (u16) ~(1 << aid);
    en   = OS_DisableInterrupts();
    data_ov001_02196c60->a[1] &= mask;
    data_ov001_02196c60->a[2] &= mask;
    data_ov001_02196c60->a[3] &= mask;
    data_ov001_02196c60->a[4] &= mask;
    data_ov001_02196c60->a[5] &= mask;
    data_ov001_02196c60->a[6] &= mask;
    OS_RestoreInterrupts(en);
    func_ov001_0218f1bc(aid);
}
