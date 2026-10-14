#include "m2c.h"

M2C_UNK func_0200a2f0();                            /* extern */
M2C_UNK func_02010048(M2C_UNK *);                   /* extern */
M2C_UNK func_02010060(M2C_UNK *);                   /* extern */
M2C_UNK func_02032060();                            /* extern */
M2C_UNK func_0203238c();                            /* extern */
M2C_UNK func_02032d0c();                            /* extern */
extern M2C_UNK data_021089c0;
extern M2C_UNK data_021089d0;
extern M2C_UNK data_021089dc;
extern M2C_UNK func_02031efc;
extern M2C_UNK func_02031f34;

void func_02031d0c(void) {
    if (M2C_FIELD(&data_021089c0, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_021089c0, s32 *, 0xC) = 1;
    func_0200a2f0();
    M2C_FIELD(&data_021089c0, M2C_UNK **, 0x10) = &func_02031efc;
    M2C_FIELD(&data_021089c0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021089c0, M2C_UNK **, 0x1C) = &func_02031f34;
    M2C_FIELD(&data_021089c0, s32 *, 0x20) = 0;
    func_02010048(&data_021089d0);
    func_02010060(&data_021089dc);
    func_02032060();
    func_02032d0c();
    func_0203238c();
    M2C_FIELD(&data_021089c0, s8 *, 0) = -1;
    M2C_FIELD(&data_021089c0, s32 *, 4) = 1;
}
