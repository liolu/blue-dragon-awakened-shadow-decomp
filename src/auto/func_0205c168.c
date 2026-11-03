typedef unsigned char u8;
typedef int s32;
typedef struct B {
    u8 b[8];
} B;
extern s32 SOC_Connect(s32 a, B *p);
extern void CheckRcode(s32 a, s32 b);
void func_0205c168(s32 a, B *src, u8 c) {
    B buf;
    buf      = *src;
    buf.b[0] = c;
    CheckRcode(SOC_Connect(a, &buf), -1);
}
