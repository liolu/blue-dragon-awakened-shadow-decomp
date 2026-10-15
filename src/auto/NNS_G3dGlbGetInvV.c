#include "m2c.h"

M2C_UNK MTX_Inverse43(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK NNS_G3dGlb;
extern M2C_UNK data_02105a40;
extern M2C_UNK data_02105af4;

M2C_UNK *NNS_G3dGlbGetInvV(void) {
    if (!(M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) & 8)) {
        MTX_Inverse43(&data_02105a40, &data_02105af4);
        M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) = (s32) (M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) | 8);
    }
    return &data_02105af4;
}
