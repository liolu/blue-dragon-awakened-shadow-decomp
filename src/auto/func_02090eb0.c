#include "m2c.h"

M2C_UNK func_02077f14(void *);                      /* extern */
M2C_UNK func_02090a70();                            /* extern */
M2C_UNK func_ov000_0216cf58(void *);                /* extern */
M2C_UNK func_ov000_0216d008(void *);                /* extern */
M2C_UNK func_ov000_0216d08c(s32);                   /* extern */
M2C_UNK func_ov000_0216d214(void *);                /* extern */
extern M2C_UNK data_ov000_021eb574;

void *func_02090eb0(void *arg0) {
    func_02090a70();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_ov000_021eb574;
    M2C_FIELD(arg0, s32 *, 0xC)    = 1;
    func_ov000_0216d08c(arg0 + 0x78);
    func_ov000_0216cf58(arg0 + 0x9C);
    func_ov000_0216d214(arg0 + 0xC0);
    func_ov000_0216d008(arg0 + 0xD8);
    func_02077f14(arg0 + 0x104);
    func_02077f14(arg0 + 0x124);
    func_02077f14(arg0 + 0x144);
    func_02077f14(arg0 + 0x164);
    func_02077f14(arg0 + 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B6) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s8 *, 0x210)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
    M2C_FIELD(arg0, s16 *, 0x1B4) = 0x400;
    M2C_FIELD(arg0, s16 *, 0x1B6) = 0x1000;
    M2C_FIELD(arg0, s16 *, 0x1B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x68)  = 0;
    M2C_FIELD(arg0, s32 *, 0x204) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0x1F;
    M2C_FIELD(arg0, s8 *, 0x21A)  = 0;
    M2C_FIELD(arg0, s8 *, 0x21B)  = 0;
    M2C_FIELD(arg0, s8 *, 0x21C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    M2C_FIELD(arg0, s8 *, 0x212)  = 0;
    M2C_FIELD(arg0, s8 *, 0x217)  = 0;
    return arg0;
}
