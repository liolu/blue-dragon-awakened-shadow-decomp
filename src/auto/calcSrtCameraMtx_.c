#include "m2c.h"

M2C_UNK MTX_ScaleApply43(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
M2C_UNK MTX_Inverse43(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK MTX_Concat43(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK NNS_G3dGlb;
extern M2C_UNK data_02105a40;
extern M2C_UNK data_02105ab0;
extern M2C_UNK data_02105b24;
extern M2C_UNK data_02105b54;

void calcSrtCameraMtx_(void) {
    MTX_Concat43(&data_02105ab0, &data_02105a40, &data_02105b24);
    MTX_ScaleApply43(&data_02105b24, &data_02105b24, M2C_FIELD(&NNS_G3dGlb, s32 *, 0xEC), M2C_FIELD(&NNS_G3dGlb, s32 *, 0xF0),
                     M2C_FIELD(&NNS_G3dGlb, s32 *, 0xF4));
    MTX_Inverse43(&data_02105b24, &data_02105b54);
}
