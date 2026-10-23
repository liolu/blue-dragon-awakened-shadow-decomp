#include "m2c.h"
extern void func_ov001_0218f1bc(s32);
extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32);
extern s32 func_ov001_0218afa0(s32, s32);
extern u8 *data_ov001_02196c60;
void func_ov001_021838ac(s32 arg0) {
    s32 mask;
    s32 e;
    if (func_ov001_0218afa0(arg0, 2) == 0) {
        mask                                 = ~(1 << arg0) & 0xFFFF;
        e                                    = OS_DisableInterrupts();
        *(u16 *) (data_ov001_02196c60 + 2)   = *(u16 *) (data_ov001_02196c60 + 2) & mask;
        *(u16 *) (data_ov001_02196c60 + 4)   = *(u16 *) (data_ov001_02196c60 + 4) & mask;
        *(u16 *) (data_ov001_02196c60 + 6)   = *(u16 *) (data_ov001_02196c60 + 6) & mask;
        *(u16 *) (data_ov001_02196c60 + 8)   = *(u16 *) (data_ov001_02196c60 + 8) & mask;
        *(u16 *) (data_ov001_02196c60 + 0xA) = *(u16 *) (data_ov001_02196c60 + 0xA) & mask;
        *(u16 *) (data_ov001_02196c60 + 0xC) = *(u16 *) (data_ov001_02196c60 + 0xC) & mask;
        OS_RestoreInterrupts(e);
        func_ov001_0218f1bc(arg0);
        return;
    }
    e                                  = OS_DisableInterrupts();
    *(u16 *) (data_ov001_02196c60 + 6) = *(u16 *) (data_ov001_02196c60 + 6) & ~(1 << arg0);
    *(u16 *) (data_ov001_02196c60 + 8) = *(u16 *) (data_ov001_02196c60 + 8) | (1 << arg0);
    OS_RestoreInterrupts(e);
}
