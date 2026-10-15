#include "m2c.h"

M2C_UNK mtx_inverse44(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK NNS_G3dGlb;
extern M2C_UNK data_021059fc;
extern M2C_UNK data_02105bb4;

M2C_UNK *NNS_G3dGlbGetInvP(void) {
    if (!(M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) & 0x10)) {
        mtx_inverse44(&data_021059fc, &data_02105bb4);
        M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) = (s32) (M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) | 0x10);
    }
    return &data_02105bb4;
}
