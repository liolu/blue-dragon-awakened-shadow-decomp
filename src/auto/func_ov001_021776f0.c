#include "m2c.h"
extern u8 data_ov001_02196bd8;
extern u8 data_ov001_02192ac0[];
extern u8 data_ov001_02192ac4[];
extern u8 data_ov001_02192ac2[];
extern void func_ov001_0216e564(s32 a, s32 b, s32 c, s32 d);
void func_ov001_021776f0(void) {
    u32 i = data_ov001_02196bd8;
    s32 k = (i < 4) ? 2 : 3;
    func_ov001_0216e564(k, *(u16 *) (data_ov001_02192ac0 + i * 8), *(u16 *) (data_ov001_02192ac4 + i * 8),
                        *(u16 *) (data_ov001_02192ac2 + i * 8));
}
