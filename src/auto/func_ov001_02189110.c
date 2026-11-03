#include "m2c.h"
typedef struct {
    u8 pad[0xc];
    s32 f;
    u8 pad2[1];
    u8 fl;
} O;
typedef struct {
    void *first;
    u8 pad[60];
} E;
void func_ov001_02187d94(void *);
void func_ov001_021886c4(void *);
void func_ov001_02186d6c(void *, void *);
extern E *data_ov001_02196ce8;
void func_ov001_02189110(s32 i, u8 *o) {
    if (o[0x11] != 0) {
        func_ov001_02187d94(o + 0xc);
    }
    func_ov001_021886c4(o);
    func_ov001_02186d6c(data_ov001_02196ce8[i].first, o);
}
