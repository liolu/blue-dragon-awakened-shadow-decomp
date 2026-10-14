#include "m2c.h"

M2C_UNK func_02006d44(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_020070e0(void *);                      /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_0201565c(M2C_UNK *);                   /* extern */
extern void *data_02105068;
extern M2C_UNK data_0210506c;
extern M2C_UNK data_02105490;
extern M2C_UNK func_02015670;

void func_020155d0(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    if (data_02105068 == NULL) {
        data_02105068 = arg0;
        func_0201565c(arg0 + 0xC4);
        func_0201565c(&data_0210506c);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02006d44(arg0, &func_02015670, arg0, &data_02105490, 0x400, 0x14);
        func_020070e0(arg0);
    }
    func_02008af4(temp_r4);
}
