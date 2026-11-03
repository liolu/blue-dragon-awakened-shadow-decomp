#include "m2c.h"
void CARDi_ReadRom(s32, s32, s32, s32, void *, void *, s32);
extern u8 func_ov001_02186428;
s32 func_ov001_021863e8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    CARDi_ReadRom(-1, arg2 + *(s32 *) (arg0 + 0x28), arg1, arg3, &func_ov001_02186428, arg0, 1);
    return 6;
}
