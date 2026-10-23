#include "m2c.h"
extern s32 OS_DisableInterrupts();
extern void OS_RestoreInterrupts(s32);
extern s32 func_ov001_0218afa0(s32, s32);
extern void func_ov001_0218f1bc(s32);
extern void *data_ov001_02196c60;
void func_ov001_021837d4(s32 arg0) {
    u16 m;
    s32 m2;
    s32 old;
    if (func_ov001_0218afa0(arg0, 0) == 0) {
        m   = ~(1 << arg0);
        old = OS_DisableInterrupts();
        M2C_FIELD(data_ov001_02196c60, u16 *, 2) &= m;
        M2C_FIELD(data_ov001_02196c60, u16 *, 4) &= m;
        M2C_FIELD(data_ov001_02196c60, u16 *, 6) &= m;
        M2C_FIELD(data_ov001_02196c60, u16 *, 8) &= m;
        M2C_FIELD(data_ov001_02196c60, u16 *, 0xA) &= m;
        M2C_FIELD(data_ov001_02196c60, u16 *, 0xC) &= m;
        OS_RestoreInterrupts(old);
        func_ov001_0218f1bc(arg0);
        return;
    }
    old = OS_DisableInterrupts();
    m2  = ~(1 << arg0);
    M2C_FIELD(data_ov001_02196c60, u16 *, 4) &= m2;
    M2C_FIELD(data_ov001_02196c60, u16 *, 2) &= m2;
    OS_RestoreInterrupts(old);
}
