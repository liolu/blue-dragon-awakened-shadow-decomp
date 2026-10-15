#include "m2c.h"

M2C_UNK MTX_Copy43To44_(s32, M2C_UNK *);              /* extern */
M2C_UNK MTX_Concat44(s32, M2C_UNK *, M2C_UNK *);   /* extern */
s32 NNS_G3dGlbGetInvV();                                /* extern */
s32 NNS_G3dGlbGetInvP();                                /* extern */
extern M2C_UNK NNS_G3dGlb;
extern M2C_UNK data_02105bf4;

M2C_UNK *NNS_G3dGlbGetInvVP(void) {
    u8 sp0[64];
    s32 temp_r4;
    s32 temp_r5;

    if (!(M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) & 0x40)) {
        temp_r5 = NNS_G3dGlbGetInvV();
        temp_r4 = NNS_G3dGlbGetInvP();
        MTX_Copy43To44_(temp_r5, sp0);
        MTX_Concat44(temp_r4, sp0, &data_02105bf4);
        M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) = (s32) (M2C_FIELD(&NNS_G3dGlb, s32 *, 0xFC) | 0x40);
    }
    return &data_02105bf4;
}
