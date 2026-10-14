#include "m2c.h"

M2C_UNK func_0207c884(void *, M2C_UNK *);           /* extern */
M2C_UNK func_0209d854(void *);                      /* extern */
extern M2C_UNK data_020fe434;
extern M2C_UNK data_020fe440;
extern M2C_UNK data_020fe484;
extern M2C_UNK data_020fe488;
extern M2C_UNK data_ov000_021f4950;

void *func_0209d704(void *arg0) {
    func_0207c884(arg0, &data_020fe488);
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &data_020fe434;
    M2C_FIELD(arg0, s32 *, 0x58) = -1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fe440;
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &data_020fe484;
    M2C_FIELD(arg0, s8 *, 0x68) = 1;
    M2C_FIELD(arg0, s8 *, 0x69) = 0;
    M2C_FIELD(arg0, s8 *, 0x6B) = 0;
    M2C_FIELD(arg0, s8 *, 0x6C) = 0;
    M2C_FIELD(arg0, u8 *, 0x6D) = (u8) M2C_FIELD(&data_ov000_021f4950, u8 *, 0x47);
    M2C_FIELD(&data_ov000_021f4950, u8 *, 0x47) = 0U;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    func_0209d854(arg0);
    return arg0;
}
