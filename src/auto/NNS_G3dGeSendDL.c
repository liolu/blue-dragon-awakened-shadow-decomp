#include "m2c.h"

M2C_UNK MI_SendGXCommandAsync(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK MI_SendGXCommandAsyncFast(s32, s32 *, u32, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK NNS_G3dGeFlushBuffer();                            /* extern */
M2C_UNK NNS_G3dGeBufferOP_N(s32, s32 *, s32);             /* extern */
extern s32 GXi_DmaId;
extern M2C_UNK NNS_G3dGeBuffer;
extern M2C_UNK NNS_G3dFlagGXDmaAsync;
extern M2C_UNK simpleUnlock_;

void NNS_G3dGeSendDL(s32 *arg0, u32 arg1) {
    if ((arg1 < 0x100U) || (GXi_DmaId == -1)) {
        NNS_G3dGeBufferOP_N(*arg0, ((s8 *) arg0 + 4), (arg1 >> 2) - 1);
        return;
    }
    NNS_G3dGeFlushBuffer();
    M2C_FIELD(&NNS_G3dGeBuffer, s32 *, 4) = 1;
    if (M2C_FIELD(&NNS_G3dGeBuffer, s32 *, 8) != 0) {
        MI_SendGXCommandAsyncFast(GXi_DmaId, arg0, arg1, &simpleUnlock_, &NNS_G3dFlagGXDmaAsync);
        return;
    }
    MI_SendGXCommandAsync(GXi_DmaId, arg0, arg1, &simpleUnlock_, &NNS_G3dFlagGXDmaAsync);
}
