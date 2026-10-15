#include "m2c.h"

M2C_UNK func_02003178();                     /* extern */
M2C_UNK func_02008c04();                            /* extern */
M2C_UNK func_02010370();        /* extern */
M2C_UNK RTC_ConvertDateTimeToSecond();        /* extern */
M2C_UNK func_0207cbb8();                            /* extern */
M2C_UNK func_0207cc1c();                            /* extern */
M2C_UNK func_0207e060();                            /* extern */
M2C_UNK func_0207f2e4();                   /* extern */
M2C_UNK func_020827c8();                     /* extern */
M2C_UNK func_020979a4();                            /* extern */
M2C_UNK func_0209d634();                            /* extern */
M2C_UNK func_ov000_02179010(); /* extern */
M2C_UNK func_ov000_021bdc74();                      /* extern */
s32 func_ov000_021bee5c();                 /* extern */
M2C_UNK func_ov000_021bef34();             /* extern */
M2C_UNK func_ov000_021bf978(); /* extern */
M2C_UNK func_ov000_021c054c();                      /* extern */
M2C_UNK func_ov000_021c5ba8();               /* extern */
extern M2C_UNK data_02110540;
extern s32 data_ov000_021ee110;
extern M2C_UNK data_ov000_021f4950;

s32 func_0207d9bc(void) {
    u8 sp10[12];
    u8 sp0[16];

    func_0207cc1c();
    func_02010370(sp0, sp10);
    RTC_ConvertDateTimeToSecond(sp0, sp10);
    func_ov000_021bdc74();
    if (func_ov000_021bee5c(&data_ov000_021f4950) == 0) {
        return 0;
    }
    func_0207e060();
    func_020827c8(1);
    func_ov000_021c5ba8(0x4000);
    func_ov000_021c054c();
    func_0207cbb8();
    func_0209d634();
    func_020979a4();
    func_0207f2e4(&data_02110540);
    func_02003178(1);
    func_ov000_021bf978(&data_ov000_021f4950, 0, 0x10);
    func_ov000_021bf978(&data_ov000_021f4950, 1, 0x10);
    M2C_FIELD((void *) 0x05000000, s16 *, 0)     = 0;
    M2C_FIELD((void *) 0x05000000, s16 *, 0x400) = 0;
    func_ov000_02179010(data_ov000_021ee110, 0, 0);
    *(s32 *) 0x04000540 = 3;
    func_02008c04();
    *(M2C_UNK *) 0x04000540 = 3;
    func_02008c04();
    func_ov000_021bef34(&data_ov000_021f4950);
    return 1;
}
