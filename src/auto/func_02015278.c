#include "m2c.h"

M2C_UNK func_0200b100();                            /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b258(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02014f60();                            /* extern */
M2C_UNK func_02015230(M2C_UNK);                     /* extern */
M2C_UNK func_0201532c();                            /* extern */
M2C_UNK func_020155d0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02104ea0;
extern M2C_UNK data_02104f80;
extern M2C_UNK func_02015520;
extern M2C_UNK func_0201554c;
extern M2C_UNK func_020155bc;

void func_02015278(void) {
    if (M2C_FIELD(&data_02104ea0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02104ea0, s32 *, 8) = 1;
    func_02014f60();
    M2C_FIELD(&data_02104ea0, s32 *, 0xC) = 0;
    func_0200b100();
    do {

    } while (func_0200b258(0xD, 1) == 0);
    func_0200b20c(0xD, &func_02015520);
    func_0201532c();
    func_0200b20c(0xD, NULL);
    func_0200b20c(0xD, &func_0201554c);
    M2C_FIELD(&data_02104ea0, s32 *, 0x18) = 0;
    func_020155d0(&data_02104f80);
    func_0200b20c(0x11, &func_020155bc);
    func_02015230(0);
}
