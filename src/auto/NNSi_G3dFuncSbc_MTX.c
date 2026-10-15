#include "m2c.h"

M2C_UNK NNS_G3dGeBufferOP_N(M2C_UNK, s32 *, M2C_UNK);     /* extern */

void NNSi_G3dFuncSbc_MTX(void *arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r0;
    u8 var_r5;

    temp_r0 = M2C_FIELD(arg0, volatile s32 *, 8);
    if (!(temp_r0 & 0x200) && (temp_r0 & 1)) {
        if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x18) != NULL) {
            var_r5 = M2C_FIELD(arg0, volatile u8 *, 0x8F);
        } else {
            var_r5 = 0;
        }
        if (var_r5 == 1) {
            M2C_FIELD(arg0, volatile s32 *, 8) = (s32) (M2C_FIELD(arg0, volatile s32 *, 8) & ~0x40);
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x18)(arg0);
            if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x18) != NULL) {
                var_r5 = M2C_FIELD(arg0, volatile u8 *, 0x8F);
            } else {
                var_r5 = 0;
            }
            var_r0 = M2C_FIELD(arg0, volatile s32 *, 8) & 0x40;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            sp0 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 1);
            if (!(M2C_FIELD(arg0, volatile s32 *, 8) & 0x100)) {
                NNS_G3dGeBufferOP_N(0x14, &sp0, 1);
            }
        }
        if (var_r5 == 3) {
            M2C_FIELD(arg0, volatile s32 *, 8) = (s32) (M2C_FIELD(arg0, volatile s32 *, 8) & ~0x40);
            M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x18)(arg0);
        }
    }
    M2C_FIELD(arg0, void **, 0) = (void *) (M2C_FIELD(arg0, void **, 0) + 2);
}
