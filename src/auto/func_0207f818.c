#include "m2c.h"

M2C_UNK func_0207f738(void *);                      /* extern */
M2C_UNK func_0207f888(void *);                      /* extern */
M2C_UNK func_020bcfd4(s32);                         /* extern */
M2C_UNK func_020c3978(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c3a94(void *);                      /* extern */

void func_0207f818(void *arg0) {
    func_020bcfd4(M2C_FIELD(arg0, s32 *, 0xC));
    func_020c3978(arg0, 0);
    func_0207f738(arg0);
    func_020c3a94(arg0);
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s8 *, 0x30) >= 0) {
        func_0207f888(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
