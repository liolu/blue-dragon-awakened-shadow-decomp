#include "m2c.h"

M2C_UNK func_02077f14(void *);                      /* extern */
M2C_UNK func_02090a70(s32);                         /* extern */
M2C_UNK func_ov000_021bcbe4(void *);                /* extern */
extern M2C_UNK data_ov000_021eb568;
extern M2C_UNK data_ov000_021eb574;

void *func_020db92c(void *arg0) {
    func_02090a70(arg0 + 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &data_ov000_021eb574;
    M2C_FIELD(arg0, s32 *, 0x10)   = 1;
    func_02077f14(arg0 + 0x78);
    func_ov000_021bcbe4(arg0 + 0x98);
    M2C_FIELD(arg0, M2C_UNK **, 0x98) = &data_ov000_021eb568;
    func_02077f14(arg0 + 0x1B4);
    func_02077f14(arg0 + 0x1D4);
    M2C_FIELD(arg0, s8 *, 0x1FC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x74)  = 0;
    M2C_FIELD(arg0, s8 *, 0x204)  = 0;
    M2C_FIELD(arg0, s8 *, 0x205)  = 0;
    M2C_FIELD(arg0, s32 *, 0x200) = -1;
    return arg0;
}
