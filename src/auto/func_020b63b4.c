#include "m2c.h"

M2C_UNK func_0201dc88(M2C_UNK *, M2C_UNK, s32, s16); /* extern */
s32 func_ov000_02189580(s32);                       /* extern */
extern M2C_UNK data_02100c50;
extern s32 data_ov000_021ee1b0;
extern M2C_UNK data_ov000_021ee1b4;

M2C_UNK *func_020b63b4(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return &data_02100c50;
    }
    func_0201dc88(&data_ov000_021ee1b4, 0x2C, func_ov000_02189580(data_ov000_021ee1b0 + 0x3D38) + 4,
                  M2C_FIELD(arg0, s16 *, 0x14));
    return &data_ov000_021ee1b4;
}
