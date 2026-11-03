#include "m2c.h"

s32 func_02002b80(s32, s32);
void func_ov001_0218169c(s32);
void func_ov001_0216e620(u16, u16, u16, u16);
extern u8 data_ov001_02196ba8;
extern u16 data_ov001_02192a4e[];
extern u16 data_ov001_02192a52[];
extern u16 data_ov001_02192a50[];
extern u16 data_ov001_02192a54[];

void func_ov001_021744dc(s32 a) {
    u32 i;
    if (a == 1) {
        data_ov001_02196ba8 = func_02002b80(data_ov001_02196ba8 + 2, 3);
    } else {
        data_ov001_02196ba8 = func_02002b80(data_ov001_02196ba8 + 1, 3);
    }
    func_ov001_0218169c(8);
    i = data_ov001_02196ba8;
    func_ov001_0216e620(*(u16 *) ((u8 *) data_ov001_02192a4e + i * 8), *(u16 *) ((u8 *) data_ov001_02192a52 + i * 8),
                        *(u16 *) ((u8 *) data_ov001_02192a50 + i * 8), *(u16 *) ((u8 *) data_ov001_02192a54 + i * 8));
}
