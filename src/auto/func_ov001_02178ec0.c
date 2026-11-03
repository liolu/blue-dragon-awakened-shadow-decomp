#include "m2c.h"

typedef struct {
    u8 pad[0x15];
    u8 mode;
} Ctx;

extern Ctx *data_ov001_02196be4;

u8 func_ov001_02182cc0(void);
void func_ov001_0218169c(s32 v);
void func_ov001_02182c7c(void);
void func_ov001_021722e4(void *f);
extern void func_ov001_02178f1c(void);

void func_ov001_02178ec0(void) {
    data_ov001_02196be4->mode = func_ov001_02182cc0();
    switch (data_ov001_02196be4->mode) {
        case 0:
            func_ov001_0218169c(7);
            break;
        case 1:
            func_ov001_0218169c(14);
            break;
        default:
            return;
    }
    func_ov001_02182c7c();
    func_ov001_021722e4(func_ov001_02178f1c);
}
