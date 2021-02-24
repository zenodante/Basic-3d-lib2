
#include "b3d_types.h"

B3L_Mesh_t b3d_box[] ={
0x00000000,0x000C0008,0x0000000C,//32bit ID, vect num, tri num, uv num, 16bit DUMMY
0x3f000000,0x3f000000,0x3f000000,0xbf000000,0xbf000000,0xbf000000,//boundbox
0x3f000000,0xbf000000,0xbf000000,0xbf000000,0xbf000000,0xbf000000,0x3f000000,0x3f000000,//vects
0xbf000000,0xbf000000,0x3f000000,0xbf000000,0x3f000000,0xbf000000,0x3f000000,0xbf000000,
0xbf000000,0x3f000000,0x3f000000,0x3f000000,0x3f000000,0xbf000000,0x3f000000,0x3f000000,
0x00020003,0x00010000,0x00000003,0x00020000,0x00020004,0x00040006,0x00060004,0x00070005,//triIdx
0x00060005,0x00010003,0x00010007,0x00070005,0x00020006,0x00070003,0x00030006,0x00000001,
0x00050004,0x00040001,
0x003f0000,0x3f003f3f,0x3f3f0000,0x3f003f3f,0x3f00003f,0x003f0000,0x3f3f003f,0x3f000000,//uv
0x3f3f0000,0x003f0000,0x003f3f00,0x3f003f3f,0x003f0000,0x3f003f3f,0x3f3f0000,0x3f3f003f,
0x00003f00,0x3f00003f,
0x00000000,0x00000000,0xbf800000,0x00000000,0x00000000,0xbf800000,
0x3f800000,0x00000000,0x00000000,0x3f800000,0x00000000,0x00000000,
0x00000000,0x00000000,0x3f800000,0x00000000,0x00000000,0x3f800000,
0xbf800000,0x00000000,0x00000000,0xbf800000,0x00000000,0x00000000,
0x00000000,0x3f800000,0x00000000,0x00000000,0x3f800000,0x00000000,
0x00000000,0xbf800000,0x00000000,0x00000000,0xbf800000,0x00000000,
} ;

const B3L_tex_t box_color[] = {
    24,24,40,40,56,56,72,72,88,88,104,104
};

const u32 pal[256] = {
    0x00000000, 0x010A0A0A, 0x02171717, 0x03212121, 0x042E2E2E, 0x053B3B3B, 0x06484848, 0x07595959,
    0x086A6A6A, 0x097B7B7B, 0x0A909090, 0x0BA3A3A3, 0x0CB8B8B8, 0x0DCECECE, 0x0EE5E5E5, 0x0FFFFEFF,
    0x10000055, 0x1100005D, 0x1200006B, 0x130A007A, 0x1419008D, 0x152400A0, 0x163100B3, 0x174000CA,
    0x185000E0, 0x196000F7, 0x1A742CFF, 0x1B8549FF, 0x1C9A65FF, 0x1DAF7EFF, 0x1EC597FF, 0x1FDEB2FF,
    0x20370052, 0x213E0059, 0x224A0067, 0x23560076, 0x24650088, 0x2574009A, 0x268300AC, 0x279600C2,
    0x28A800D7, 0x29BC00ED, 0x2AD21AFF, 0x2BE63FFF, 0x2CFD5DFF, 0x2DFF78FF, 0x2EFF91FF, 0x2FFFAEFF,
    0x306E002E, 0x31750036, 0x32830045, 0x33900055, 0x34A00068, 0x35B1007A, 0x36C2008C, 0x37D600A1,
    0x38EA00B6, 0x39FF01CC, 0x3AFF35E4, 0x3BFF4FFA, 0x3CFF6AFF, 0x3DFF83FF, 0x3EFF9BFF, 0x3FFFB6FF,
    0x40920000, 0x419A0000, 0x42A80000, 0x43B60000, 0x44C70000, 0x45D8002F, 0x46EA004B, 0x47FF0066,
    0x48FF257E, 0x49FF3D96, 0x4AFF55B0, 0x4BFF69C6, 0x4CFF80E0, 0x4DFF96FA, 0x4EFFADFF, 0x4FFFC7FF,
    0x50A10000, 0x51A90000, 0x52B70000, 0x53C60000, 0x54D70000, 0x55E90000, 0x56FB0000, 0x57FF1B39,
    0x58FF325C, 0x59FF4678, 0x5AFF5C95, 0x5BFF6FAD, 0x5CFF86C8, 0x5DFF9CE3, 0x5EFFB2FD, 0x5FFFCCFF,
    0x60780000, 0x61800900, 0x628D1500, 0x639B1C00, 0x64AB2700, 0x65BC3200, 0x66CD3F00, 0x67E14E00,
    0x68F65F00, 0x69FF6F2C, 0x6AFF8353, 0x6BFF956E, 0x6CFFAB8A, 0x6DFFC0A5, 0x6EFFD6BF, 0x6FFFF0DC,
    0x70361400, 0x713D1A00, 0x72492300, 0x73552C00, 0x74633900, 0x75724700, 0x76825500, 0x77946600,
    0x78A77800, 0x79BA8A00, 0x7AD09F00, 0x7BE4B200, 0x7CFBC800, 0x7DFFDE3B, 0x7EFFF55E, 0x7FFFFF7F,
    0x80001F00, 0x81002300, 0x82012900, 0x83113100, 0x841D3D00, 0x852A4C00, 0x86375B00, 0x87466D00,
    0x88578000, 0x89689300, 0x8A7CA900, 0x8B8EBD00, 0x8CA3D300, 0x8DB9EB00, 0x8ECFFF15, 0x8FE8FF4D,
    0x90002400, 0x91002800, 0x92002D00, 0x93003300, 0x94003F00, 0x95004D00, 0x96005D00, 0x97007000,
    0x98008300, 0x99009600, 0x9A10AD00, 0x9B2AC000, 0x9C41D800, 0x9D57EF00, 0x9E6DFF24, 0x9F86FF54,
    0xA0002600, 0xA1002900, 0xA2002E00, 0xA3003500, 0xA4004000, 0xA5004E00, 0xA6005E00, 0xA7007100,
    0xA8008400, 0xA9009700, 0xAA00AE00, 0xAB00C200, 0xAC00D900, 0xAD00F000, 0xAE1CFF29, 0xAF42FF59,
    0xB0002300, 0xB1002600, 0xB2002C00, 0xB3003200, 0xB4003E00, 0xB5004C00, 0xB6005C00, 0xB7006F00,
    0xB8008100, 0xB9009500, 0xBA00AB00, 0xBB00BE00, 0xBC00D52A, 0xBD00ED4F, 0xBE13FF6C, 0xBF3EFF8B,
    0xC0001700, 0xC1001D00, 0xC2002300, 0xC3002B00, 0xC4003900, 0xC5004706, 0xC6005618, 0xC700672B,
    0xC800793D, 0xC9008B50, 0xCA00A067, 0xCB00B37C, 0xCC00C994, 0xCD00E0AC, 0xCE00F7C4, 0xCF2DFFDF,
    0xD000001D, 0xD1000424, 0xD200132D, 0xD3001D36, 0xD4002A44, 0xD5003752, 0xD6004462, 0xD7005574,
    0xD8006687, 0xD900779C, 0xDA008BB4, 0xDB009DC9, 0xDC00B2E2, 0xDD00C8FB, 0xDE29DEFF, 0xDF49F8FF,
    0xE0000043, 0xE1000049, 0xE2000056, 0xE3000064, 0xE4000076, 0xE5000088, 0xE600009A, 0xE7001EAF,
    0xE80035C6, 0xE90049DD, 0xEA005FF7, 0xEB1672FF, 0xEC2F88FF, 0xED469FFF, 0xEE5BB5FF, 0xEF74CFFF,
    0xF0000055, 0xF100005C, 0xF200006B, 0xF300007B, 0xF400008E, 0xF50000A1, 0xF60000B4, 0xF70000CB,
    0xF80000E2, 0xF90000FA, 0xFA1730FF, 0xFB2A4BFF, 0xFC3F66FF, 0xFD537FFF, 0xFE6897FF, 0xFF7FB2FF, };

const B3L_tex_t tex[4102] = {
  0x00,0x00,0x00,0x00,0x40,0x00,
  0X63, 0X32, 0X76, 0X32, 0X71, 0X80, 0X3, 0X7, 0XC0, 0X1, 0X90, 0X2, 0X90, 0X2, 0XC1, 0X1,
0XC0, 0X1, 0X90, 0X2, 0X1, 0X2, 0X83, 0X1, 0X1, 0X1, 0X80, 0X2, 0XC0, 0X80, 0X6, 0X3,
0XD3, 0X13, 0XF8, 0X17, 0XF8, 0XF8, 0X17, 0XF9, 0XF8, 0XF8, 0XF8, 0XF8, 0X17, 0XF8, 0XF8, 0XF8,
0XF8, 0XF7, 0XF8, 0X6F, 0X6F, 0XE, 0XE, 0X8, 0X66, 0X65, 0X69, 0X65, 0X78, 0X66, 0X8, 0X70,
0X76, 0X33, 0X76, 0X32, 0X75, 0XD2, 0X4, 0X5, 0XC1, 0X2, 0X80, 0XD3, 0XD4, 0X80, 0X1, 0X1,
0X1, 0X2, 0X3, 0X90, 0X1, 0X1, 0X1, 0XD2, 0XC0, 0X1, 0X3, 0X1, 0X1, 0X2, 0XD5, 0XC6,
0X4, 0XE7, 0X17, 0XFA, 0X17, 0XFA, 0XF8, 0X17, 0XF8, 0X17, 0XFA, 0X17, 0XF9, 0XF8, 0X17, 0XF8,
0X17, 0XF8, 0XF7, 0X1B, 0XD, 0XD, 0X6E, 0X6E, 0X65, 0X9, 0X65, 0X9, 0X67, 0X58, 0X78, 0X2,
0X32, 0X65, 0X7, 0X64, 0X31, 0XC5, 0X3, 0X90, 0XD1, 0XD3, 0XB2, 0X4, 0XC6, 0X4, 0XD3, 0X80,
0X1, 0XC0, 0X3, 0XD2, 0X80, 0X1, 0XC0, 0X1, 0XC0, 0X1, 0X3, 0X2, 0X1, 0X80, 0X83, 0X5,
0XC6, 0X17, 0XF8, 0XF8, 0XF8, 0X17, 0XF8, 0XFA, 0XF8, 0X17, 0XF8, 0XF8, 0X17, 0XFA, 0XF8, 0XF8,
0XE8, 0XF8, 0X16, 0XE7, 0X1E, 0XD, 0X5F, 0XD, 0X6E, 0X66, 0X69, 0X65, 0X9, 0X66, 0X65, 0X6,
0X76, 0X32, 0X65, 0X7, 0X63, 0X4, 0XD3, 0XC1, 0X82, 0XD3, 0XC6, 0XD2, 0X83, 0X2, 0XC6, 0X3,
0X3, 0X90, 0X2, 0X1, 0X83, 0XD1, 0XC0, 0X2, 0X80, 0X1, 0X1, 0X1, 0X1, 0X2, 0X1, 0X5,
0XD5, 0XF8, 0X17, 0XFA, 0X16, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0XFA, 0XF8, 0XF8, 0XF8, 0XF7, 0X17,
0XF8, 0XF8, 0XF8, 0XF7, 0XF7, 0XD, 0XD, 0XE, 0X6E, 0XC, 0X65, 0X69, 0X65, 0X9, 0X67, 0X76,
0X6E, 0XD, 0X64, 0X33, 0X76, 0X5, 0X83, 0XD2, 0X3, 0X7, 0X4, 0XC0, 0X1, 0X1, 0X1, 0XC1,
0X3, 0XD4, 0X5, 0X4, 0X3, 0X80, 0XD2, 0X4, 0X80, 0X1, 0X1, 0X1, 0X3, 0X80, 0XD3, 0X83,
0X14, 0X16, 0XE8, 0XF7, 0XF8, 0XFA, 0XF8, 0X17, 0XFA, 0XF8, 0X17, 0XF8, 0X17, 0XFA, 0XF7, 0XF8,
0XF8, 0X17, 0XF7, 0XF7, 0XF7, 0X17, 0XE, 0XE, 0XE, 0XE, 0X9, 0X66, 0X6A, 0X66, 0X9, 0X66,
0XE, 0X7, 0X64, 0X7, 0X64, 0X31, 0XD2, 0X83, 0XD4, 0X80, 0X90, 0X3, 0X1, 0X1, 0X1, 0X1,
0XC0, 0X4, 0X5, 0X6, 0X7, 0X5, 0XC6, 0X4, 0X3, 0X1, 0X1, 0XC0, 0X1, 0X1, 0X1, 0X80,
0X83, 0X1, 0X2, 0X2, 0X3, 0X20, 0XE7, 0XF7, 0XF7, 0X17, 0XF8, 0XF8, 0XF8, 0X17, 0XF8, 0XFA,
0XF7, 0XF8, 0XE8, 0X17, 0XF7, 0XE7, 0X1B, 0XD, 0X6E, 0X4F, 0X6F, 0X9, 0X66, 0X78, 0X67, 0X65,
0XE, 0X9, 0X64, 0X32, 0X76, 0X32, 0X85, 0XD3, 0XC1, 0X1, 0X2, 0XD3, 0X1, 0X1, 0X1, 0X1,
0XC0, 0XC0, 0X80, 0X3, 0XC6, 0X7, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1,
0XD0, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0X3, 0XD2, 0X14, 0X15, 0X17, 0XF9, 0X17, 0XF8,
0X17, 0XF8, 0XF8, 0XF7, 0XF7, 0XF7, 0XF7, 0X1C, 0X6E, 0XD, 0X6E, 0XE, 0X8, 0X69, 0X8, 0X67,
0X6C, 0X5D, 0X75, 0X32, 0X76, 0X32, 0X5, 0X1, 0X1, 0X1, 0X4, 0XC0, 0X1, 0X1, 0X1, 0X1,
0X2, 0X1, 0X1, 0X1, 0XD0, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1,
0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0XC0, 0XC0, 0X1, 0XE5, 0XFA, 0XF7,
0XF8, 0X17, 0XF8, 0XF7, 0X17, 0XF7, 0XE7, 0XF7, 0X1E, 0XE, 0XE, 0X6E, 0X6E, 0X66, 0X6A, 0X65,
0X63, 0X32, 0X76, 0X33, 0X76, 0X7, 0X6B, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X3,
0X1, 0XD2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0X2,
0X1, 0X2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0XC0, 0XE1, 0X17,
0XF8, 0XFA, 0XF7, 0XF7, 0XE8, 0XF7, 0X17, 0XF7, 0XE7, 0X1F, 0XD, 0X5F, 0XE, 0XD, 0X8, 0X67,
0X76, 0X33, 0X65, 0X7, 0X65, 0X32, 0X74, 0X1, 0X1, 0X83, 0X2, 0X1, 0X1, 0X1, 0X83, 0X1,
0XC0, 0X4, 0X6, 0XC0, 0X1, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0XD4, 0X5, 0XD5,
0X5, 0X5, 0XD4, 0X4, 0X2, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0XF7,
0XF7, 0X17, 0XF7, 0XF8, 0X17, 0XF7, 0XF7, 0XF7, 0X16, 0XE7, 0X4F, 0X6E, 0XE, 0XE, 0X6D, 0X65,
0X32, 0X78, 0X33, 0X65, 0X33, 0X76, 0X32, 0X70, 0X1, 0X8, 0X3, 0X90, 0X2, 0X80, 0XD3, 0X1,
0X1, 0X4, 0X3, 0X1, 0X1, 0X1, 0X1, 0X2, 0X1, 0X3, 0X4, 0XD6, 0X7, 0XFE, 0XA, 0XFD,
0X8, 0XFD, 0XA, 0X9, 0XD9, 0X5, 0XD2, 0X2, 0X1, 0X1, 0X3, 0X2, 0X1, 0X1, 0X1, 0X13,
0XFA, 0XF7, 0XF8, 0XE8, 0XF8, 0XF7, 0X17, 0XF8, 0XF7, 0X17, 0X16, 0XE, 0X6F, 0XD, 0XE, 0X6C,
0X76, 0X33, 0X76, 0X7, 0X64, 0X33, 0X76, 0X5, 0X2, 0X8, 0X8, 0X2, 0X2, 0XD2, 0X1, 0X1,
0X1, 0X3, 0XC0, 0X1, 0X1, 0X2, 0X1, 0XD2, 0X6, 0XD9, 0XFE, 0XFD, 0XA, 0XFD, 0XFD, 0XA,
0XED, 0XFE, 0XFD, 0XFD, 0XFE, 0X9, 0XD8, 0X4, 0XD2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X13,
0X17, 0XF8, 0X17, 0XF8, 0X16, 0XF8, 0XE8, 0XF7, 0XF7, 0XE8, 0XF8, 0XFD, 0X6E, 0XE, 0X5F, 0X6E,
0X64, 0X7, 0X45, 0X76, 0X33, 0X76, 0X33, 0X62, 0X1, 0X1, 0X1, 0X1, 0XC0, 0X80, 0X1, 0X1,
0XC0, 0X3, 0X1, 0X1, 0X2, 0X1, 0X2, 0X9, 0XFD, 0X9, 0XFE, 0X9, 0XFE, 0XA, 0XFF, 0XFE,
0XB, 0XA, 0XFF, 0XA, 0XFD, 0XFD, 0XFD, 0X9, 0X9, 0XD6, 0X2, 0X1, 0X1, 0X1, 0X1, 0X13,
0XF8, 0XF7, 0XF8, 0XF7, 0XE8, 0X17, 0XF8, 0X17, 0XF8, 0X17, 0XF7, 0XF7, 0X1D, 0XE, 0XE, 0X6F,
0X33, 0X65, 0X32, 0X76, 0X34, 0X65, 0X7, 0X63, 0X1, 0X1, 0X1, 0X6, 0X4, 0X80, 0X2, 0X1,
0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0XD6, 0XFD, 0X9, 0XFD, 0X9, 0XFD, 0XFE, 0XFF, 0XA, 0XFF,
0XFF, 0XFF, 0XB, 0XED, 0XA, 0XA, 0XFD, 0XFC, 0X9, 0XFC, 0X5, 0XD0, 0X1, 0X1, 0X1, 0X14,
0XFA, 0X17, 0XE8, 0XF8, 0X17, 0XF8, 0XF7, 0XF7, 0XE8, 0XF7, 0X17, 0XF7, 0XF7, 0XD, 0XE, 0XE,
0X9, 0X6A, 0X76, 0X33, 0X77, 0X33, 0X76, 0X32, 0X3, 0X1, 0XC0, 0X4, 0X5, 0X3, 0X3, 0XC1,
0X1, 0X1, 0X1, 0X1, 0X2, 0X4, 0X7, 0X9, 0XFC, 0XA, 0XEC, 0XFE, 0XA, 0XFE, 0XB, 0XC,
0XC, 0XFF, 0XFE, 0XA, 0XFD, 0XFD, 0X9, 0XEC, 0X9, 0XFC, 0XD8, 0X4, 0X1, 0X1, 0X1, 0X15,
0XF8, 0XF8, 0X17, 0XF8, 0XF8, 0X17, 0XF7, 0XF7, 0X17, 0XF8, 0XF7, 0X17, 0XF8, 0XF7, 0X1F, 0XE,
0X6F, 0X31, 0X76, 0X33, 0X76, 0X7, 0X65, 0X7, 0X62, 0X2, 0X5, 0X1, 0X5, 0XC7, 0X3, 0XD3,
0X2, 0XC0, 0X1, 0X2, 0X2, 0X4, 0XD8, 0XFD, 0XDA, 0XFD, 0XA, 0XFD, 0XA, 0XFF, 0XFF, 0XFF,
0XC, 0XFF, 0XB, 0XFE, 0XA, 0XFD, 0XA, 0XFC, 0XDA, 0X9, 0X9, 0XD5, 0X2, 0X1, 0X1, 0X15,
0XF8, 0X17, 0XF8, 0X17, 0XE8, 0XF8, 0XE8, 0X17, 0XF8, 0XF7, 0XE8, 0XF8, 0X17, 0XF8, 0X16, 0XE,
0X6D, 0X32, 0X76, 0X34, 0X65, 0X33, 0X65, 0X7, 0X9, 0X5, 0X3, 0X1, 0X1, 0X6, 0X3, 0XB2,
0XD2, 0X90, 0X1, 0X1, 0X2, 0X5, 0X9, 0XFD, 0X9, 0XFD, 0XA, 0XED, 0XFE, 0XB, 0XFF, 0XB,
0XFF, 0XB, 0XFE, 0XFE, 0XFE, 0XA, 0XFC, 0XA, 0XFC, 0X9, 0XFB, 0X6, 0XD3, 0X1, 0X1, 0XE7,
0X18, 0XF8, 0XFA, 0XF7, 0X17, 0XF8, 0X17, 0XF8, 0XF7, 0X17, 0XF8, 0XF7, 0XF7, 0XE8, 0XF8, 0X17,
0XE, 0X9, 0X65, 0X7, 0X65, 0X7, 0X64, 0X9, 0X5D, 0X70, 0X1, 0X1, 0X1, 0X1, 0X3, 0X4,
0X82, 0XD2, 0X80, 0X3, 0X5, 0XE8, 0XA, 0XFC, 0X9, 0XED, 0XA, 0XFE, 0XB, 0XFF, 0XC, 0XFF,
0XC, 0XFF, 0XC, 0XB, 0XFE, 0XA, 0XDB, 0X9, 0XFC, 0XA, 0XD9, 0X9, 0XD7, 0X20, 0X1, 0XF8,
0XF8, 0X17, 0XF7, 0XF8, 0XF7, 0X17, 0XF8, 0XE8, 0XF8, 0XF7, 0XE8, 0X17, 0XF8, 0X17, 0XFA, 0XF7,
0X7, 0X6B, 0X32, 0X65, 0X7, 0X65, 0X6E, 0X5F, 0XD, 0X8, 0X1, 0X1, 0X1, 0X1, 0XC0, 0X4,
0X3, 0X83, 0XD2, 0X4, 0X7, 0XFD, 0XA, 0XD9, 0XFD, 0X9, 0X9, 0X9, 0XFE, 0XC, 0XD, 0X1F,
0XD, 0X1E, 0XD, 0X1E, 0XB, 0XFD, 0X9, 0XFD, 0XD9, 0XFD, 0X9, 0XFC, 0X9, 0XD6, 0XD1, 0X17,
0XFA, 0XF8, 0X17, 0XE8, 0X17, 0XF8, 0X17, 0XF7, 0X17, 0XF8, 0X17, 0XF8, 0XF7, 0XF8, 0X17, 0XF8,
0X64, 0X32, 0X76, 0X33, 0X65, 0X33, 0X76, 0X9, 0X6E, 0XB, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2,
0XD2, 0X2, 0X5, 0XD8, 0X9, 0XD8, 0X21, 0X5, 0X6, 0X9, 0XFC, 0X9, 0X9, 0X9, 0XFE, 0XC,
0XFF, 0XC, 0XFF, 0X9, 0XD6, 0X7, 0X5, 0X5, 0X7, 0X8, 0XFC, 0X8, 0XD9, 0X9, 0X22, 0XF8,
0XF8, 0X17, 0XF8, 0XF8, 0XF8, 0XE8, 0X17, 0XFA, 0XF7, 0XF7, 0XE8, 0X17, 0XF8, 0XE8, 0X17, 0XF8,
0X76, 0X33, 0X65, 0X7, 0X65, 0X7, 0X64, 0X34, 0X6F, 0X7, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1,
0XC0, 0X1, 0X5, 0X7, 0XF1, 0XD2, 0X4, 0XFD, 0X9, 0XE9, 0X8, 0XFC, 0X9, 0XFD, 0XD8, 0X5,
0X7, 0XD6, 0X5, 0X9, 0XFD, 0XA, 0XFC, 0X9, 0XE8, 0XD6, 0XE0, 0X4, 0XFC, 0X7, 0XD8, 0X18,
0XFA, 0XF8, 0X17, 0XFA, 0X17, 0XF8, 0XF7, 0XF7, 0X17, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0XF8, 0X17,
0X64, 0X7, 0X65, 0X33, 0X65, 0X33, 0X76, 0X65, 0X9, 0X64, 0X2, 0X1, 0X80, 0X2, 0X1, 0X1,
0X1, 0X2, 0X7, 0X10, 0X7, 0X8, 0X15, 0XD8, 0XD8, 0X9, 0XFC, 0X9, 0XD9, 0X9, 0X8, 0X12,
0X14, 0XD2, 0X15, 0XD9, 0X9, 0XFE, 0X9, 0XE8, 0X7, 0X8, 0X12, 0X2, 0X5, 0X6, 0X14, 0X17,
0XF8, 0XFA, 0XF7, 0X17, 0XF7, 0X17, 0XF8, 0X17, 0XE8, 0XF8, 0XE8, 0XF8, 0XF7, 0X17, 0XE8, 0XF8,
0X64, 0X34, 0X77, 0X7, 0X65, 0X7, 0X65, 0X33, 0X76, 0X32, 0X72, 0X2, 0X2, 0XC1, 0X1, 0XC1,
0X1, 0XD0, 0X7, 0X7, 0XE7, 0XD8, 0X4, 0X14, 0XD6, 0X20, 0XD1, 0XD3, 0XD6, 0XFB, 0X9, 0XD6,
0XFE, 0X4, 0XA, 0XE8, 0X5, 0XD1, 0XD4, 0XD6, 0X14, 0XD8, 0X20, 0X9, 0XD6, 0X20, 0X5, 0X17,
0XF8, 0X17, 0XF8, 0XF8, 0XE8, 0X17, 0XE8, 0XF8, 0X17, 0XF8, 0X17, 0XF7, 0X17, 0XFA, 0XF7, 0XF8,
0X76, 0X34, 0X65, 0X76, 0X33, 0X65, 0X7, 0X65, 0X33, 0X76, 0X31, 0XC0, 0X1, 0X1, 0X1, 0X1,
0X2, 0XC0, 0XD7, 0X8, 0XFD, 0X7, 0X14, 0X9, 0XD7, 0X8, 0X9, 0XFD, 0X9, 0XB, 0XFC, 0X9,
0XB, 0XE8, 0X9, 0XA, 0X9, 0XD8, 0X9, 0X23, 0XD6, 0XD7, 0XD6, 0XE8, 0X7, 0XD7, 0X21, 0XFA,
0XF8, 0X17, 0XF8, 0X17, 0XF8, 0XF8, 0X17, 0XF8, 0XF8, 0X17, 0XE8, 0XF8, 0XF7, 0X17, 0XF8, 0XF8,
0X64, 0X7, 0X65, 0X7, 0X65, 0X33, 0X65, 0X7, 0X65, 0X7, 0X63, 0X2, 0X3, 0X1, 0X1, 0X1,
0XD7, 0X9, 0X8, 0XFB, 0X9, 0XFD, 0XD9, 0XFD, 0X9, 0XFD, 0XFE, 0XA, 0XFE, 0XC, 0XD8, 0XFE,
0XB, 0XFD, 0X8, 0XFE, 0XFE, 0X1C, 0XA, 0XFC, 0X9, 0XFD, 0X7, 0X15, 0X7, 0X8, 0X14, 0XE8,
0XFA, 0X17, 0XFA, 0XF7, 0X17, 0XE8, 0XF8, 0X17, 0XE8, 0XF8, 0X17, 0XF8, 0X17, 0XFA, 0XF7, 0XF8,
0X6F, 0X32, 0X65, 0X33, 0X65, 0X8, 0X65, 0X34, 0X65, 0X32, 0X76, 0X2, 0X1, 0X1, 0X1, 0X2,
0X14, 0XE7, 0X7, 0X9, 0XFC, 0XA, 0X9, 0XE9, 0XA, 0XFE, 0XB, 0XFF, 0XB, 0X7, 0XFD, 0X1C,
0XFE, 0XA, 0XD8, 0XB, 0XB, 0XB, 0XFE, 0XFE, 0XA, 0X15, 0XD9, 0X9, 0XFB, 0XD8, 0X6, 0X8,
0X16, 0XE8, 0X17, 0XF8, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0XFA, 0XF7, 0XF7, 0X17, 0XF8,
0X8, 0X65, 0X7, 0X65, 0X7, 0X65, 0X7, 0X6B, 0X9, 0X76, 0X33, 0X70, 0X4, 0X1, 0X1, 0X2,
0XD7, 0X7, 0X16, 0XD9, 0X9, 0XFC, 0XFD, 0X9, 0XFD, 0X9, 0XFC, 0X9, 0XFC, 0XFE, 0X9, 0XFE,
0XA, 0XFD, 0X9, 0XFC, 0X7, 0XFD, 0X9, 0XFE, 0X9, 0XE8, 0X9, 0XE9, 0X7, 0X16, 0XD7, 0X14,
0XD7, 0X18, 0XF8, 0X17, 0XFA, 0XF7, 0X17, 0XE8, 0XF8, 0XFA, 0X16, 0XF7, 0X17, 0XF8, 0XFA, 0X17,
0X6B, 0X32, 0X65, 0X8, 0X45, 0X65, 0X32, 0XA, 0X6E, 0XB, 0X6D, 0X4, 0X1, 0X1, 0X1, 0X3,
0XFD, 0X9, 0XD9, 0X9, 0XFB, 0X9, 0XFD, 0X9, 0XFE, 0XB, 0XFF, 0XC, 0XB, 0XFD, 0XA, 0XB,
0XFF, 0XFD, 0X9, 0XFE, 0XC, 0XFF, 0X9, 0XFD, 0X8, 0XFC, 0X9, 0X9, 0XE9, 0X8, 0X22, 0X9,
0XFC, 0XFD, 0XFD, 0X17, 0XE8, 0X17, 0XF8, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0XFA, 0X16, 0XF8, 0XF7,
0XC, 0X8, 0X65, 0X64, 0X7, 0X65, 0XA, 0X6E, 0X6F, 0X6E, 0X7, 0X50, 0X2, 0X1, 0X1, 0X2,
0XFE, 0X9, 0XFC, 0X7, 0X8, 0XFC, 0X9, 0XFE, 0XFE, 0XB, 0X1E, 0XFF, 0XA, 0XFD, 0X9, 0XFD,
0XFD, 0X9, 0XFD, 0X9, 0XFE, 0X1E, 0XC, 0XFE, 0X9, 0XFC, 0X9, 0XE9, 0X7, 0X7, 0XE7, 0XD9,
0XB, 0X6E, 0X6E, 0XE, 0XE, 0XB, 0XFC, 0X16, 0XF8, 0X17, 0XE8, 0X17, 0XF8, 0XF7, 0X17, 0XF8,
0X64, 0X64, 0X7, 0X65, 0X33, 0X65, 0XB, 0X6E, 0XE, 0X5F, 0X6B, 0X31, 0X83, 0X1, 0X1, 0X1,
0X9, 0XFD, 0X8, 0X8, 0XFB, 0X9, 0XFC, 0X9, 0XFE, 0XC, 0XFF, 0XB, 0XFD, 0XD7, 0X20, 0XD5,
0XD6, 0XE0, 0XD7, 0XFD, 0XA, 0XFF, 0XB, 0XFD, 0X9, 0XFC, 0X9, 0XE8, 0X8, 0XE8, 0X7, 0X8,
0XFD, 0XE, 0X5F, 0X6F, 0X4F, 0XE, 0X4F, 0XD, 0XFD, 0X16, 0XF8, 0XF8, 0X17, 0XF8, 0XE8, 0XF8,
0X34, 0X65, 0X33, 0X65, 0X8, 0X65, 0X76, 0X7, 0X6E, 0XA, 0XB, 0X32, 0X73, 0X2, 0XC1, 0XD0,
0XD7, 0XFD, 0X7, 0X17, 0X9, 0XFC, 0XA, 0XFD, 0XA, 0XFE, 0XB, 0XFE, 0XB, 0X8, 0XFD, 0XB,
0X1B, 0X9, 0X16, 0XA, 0XFE, 0XB, 0XFF, 0X1C, 0XA, 0XD9, 0X9, 0XFC, 0X7, 0X14, 0X7, 0XFC,
0XD, 0X6E, 0XE, 0XE, 0X6E, 0XE, 0X6E, 0XE, 0XE, 0X1F, 0XFC, 0X16, 0XF8, 0X17, 0XF8, 0XFA,
0X76, 0X8, 0X65, 0X7, 0X66, 0X33, 0X34, 0X65, 0XA, 0X43, 0X65, 0X7, 0X62, 0XD2, 0XC1, 0X1,
0X4, 0X9, 0XE8, 0X9, 0XD9, 0X9, 0XFD, 0XA, 0XFD, 0XB, 0XFE, 0XB, 0XFF, 0X1C, 0XFE, 0XA,
0XFE, 0XA, 0XFF, 0XFE, 0XB, 0XFF, 0XB, 0XFD, 0X9, 0XFC, 0X8, 0X16, 0XD8, 0X8, 0XE8, 0X9,
0XD, 0X5F, 0XE, 0XE, 0X5F, 0XE, 0XE, 0X5F, 0X6E, 0XD, 0X6E, 0XFD, 0X16, 0XFA, 0XF8, 0X17,
0X65, 0X33, 0X65, 0X34, 0X65, 0X77, 0X7, 0X65, 0X33, 0X76, 0X34, 0X76, 0X32, 0X83, 0X1, 0X1,
0XD4, 0XFE, 0X7, 0X8, 0XFC, 0X9, 0XFC, 0XA, 0XFD, 0XFE, 0XB, 0XFF, 0XA, 0XB, 0XFD, 0X9,
0XFD, 0X9, 0XFE, 0XA, 0XB, 0XFE, 0XB, 0XFD, 0X9, 0XFC, 0X8, 0XE8, 0X8, 0X14, 0X9, 0XFD,
0X6F, 0XE, 0XE, 0X6E, 0XE, 0XE, 0X6E, 0XE, 0XE, 0XE, 0X6F, 0X6F, 0X1D, 0X16, 0XF8, 0X17,
0X76, 0X34, 0X78, 0X76, 0X7, 0X65, 0X33, 0X78, 0X34, 0X78, 0X7, 0X66, 0X32, 0X4, 0X80, 0XD3,
0X3, 0X9, 0XE8, 0X9, 0X8, 0XFC, 0XA, 0XFD, 0X9, 0XFE, 0XA, 0XFE, 0X9, 0X16, 0XD6, 0X14,
0XD6, 0X14, 0X9, 0XFD, 0XA, 0XFE, 0X9, 0XFD, 0X9, 0XFC, 0X8, 0X8, 0XD8, 0X7, 0X9, 0X1E,
0XE, 0X6F, 0X5F, 0XE, 0XE, 0XE, 0X5F, 0X6F, 0XE, 0X6E, 0X5F, 0XD, 0XE, 0XC, 0XF8, 0X17,
0X65, 0X7, 0X65, 0X34, 0X65, 0X8, 0X65, 0X7, 0X65, 0X33, 0X65, 0X7, 0X65, 0X5, 0X83, 0X3,
0X90, 0XD2, 0X6, 0X8, 0XFB, 0X9, 0XFC, 0XA, 0XFD, 0XA, 0XFE, 0X9, 0XE8, 0X9, 0X9, 0XFD,
0XA, 0X8, 0X15, 0XD8, 0X1C, 0XA, 0XFE, 0XFD, 0X9, 0XD9, 0XFC, 0XD7, 0X24, 0XD7, 0XB, 0XE,
0X6F, 0XE, 0X6F, 0X6E, 0X5F, 0X6F, 0X6F, 0X6E, 0X5F, 0XE, 0X6F, 0X6E, 0XE, 0X5F, 0X1D, 0XE7,
0X6D, 0X32, 0X65, 0X8, 0X65, 0X33, 0X65, 0X33, 0X78, 0X7, 0X66, 0X33, 0X65, 0X31, 0XC6, 0XD3,
0X83, 0XD0, 0X5, 0X16, 0XD9, 0X9, 0XFC, 0X9, 0XFD, 0XA, 0XFE, 0X9, 0XFE, 0X8, 0XFB, 0X7,
0XFB, 0X8, 0XFC, 0X9, 0XA, 0XFE, 0XA, 0XFD, 0X9, 0XFC, 0X8, 0X24, 0XD8, 0X9, 0X5F, 0XE,
0X5F, 0XE, 0XE, 0XE, 0X6F, 0XE, 0X4F, 0X6F, 0XE, 0X6E, 0XE, 0XE, 0X4F, 0XC, 0XB, 0X1C,
0X76, 0X8, 0X65, 0X33, 0X65, 0X7, 0X65, 0XC, 0X64, 0X33, 0X65, 0X7, 0X65, 0X7, 0X3, 0X83,
0X1, 0XD0, 0XD3, 0X8, 0X8, 0XE8, 0X9, 0XD9, 0X9, 0XFD, 0XA, 0XFD, 0X9, 0XFB, 0XD6, 0X14,
0XD6, 0X15, 0XA, 0XFD, 0XFD, 0XA, 0XFD, 0X9, 0XD9, 0X9, 0XE8, 0X7, 0X23, 0XC, 0XE, 0XE,
0X6F, 0XE, 0XE, 0X5F, 0X6E, 0XE, 0X6E, 0XE, 0XE, 0X5F, 0XE, 0XD, 0X1B, 0XF6, 0XE, 0XE,
0X64, 0X34, 0X65, 0X8, 0X65, 0X8, 0X65, 0X5F, 0X6C, 0XA, 0X6C, 0X63, 0X7, 0X64, 0X4, 0X1,
0X1, 0XC0, 0X2, 0XE8, 0X7, 0X16, 0XD9, 0X9, 0XFB, 0X9, 0XD9, 0XFD, 0XA, 0XFE, 0XA, 0XB,
0XFD, 0XA, 0XFD, 0X9, 0XFD, 0X9, 0XD9, 0X9, 0XFC, 0X22, 0XD7, 0X7, 0X14, 0XE, 0XE, 0XF,
0X5F, 0XE, 0X6F, 0X6F, 0XE, 0X5F, 0X6F, 0XE, 0X6E, 0XE, 0X1D, 0X16, 0XF7, 0XB, 0X5F, 0XE,
0X6E, 0X76, 0X34, 0X65, 0X8, 0X65, 0X9, 0X6E, 0XE, 0X6E, 0X7, 0X65, 0X33, 0X65, 0X30, 0X1,
0XC0, 0X1, 0X4, 0X7, 0XE8, 0X7, 0X16, 0XD8, 0X7, 0XFC, 0X9, 0XFD, 0XA, 0XFE, 0XC, 0XFE,
0XC, 0XFF, 0XB, 0XFD, 0X9, 0XFC, 0XD8, 0X24, 0XD8, 0X7, 0X14, 0X6, 0X6, 0XE, 0X5F, 0XE,
0X6F, 0XE, 0X5F, 0X6E, 0XE, 0X6F, 0XE, 0X4F, 0X1E, 0X17, 0XE8, 0XF8, 0X17, 0X1F, 0XE, 0XE,
0X32, 0X65, 0X77, 0X34, 0X65, 0X9, 0X5D, 0X6F, 0XE, 0X6E, 0X33, 0X76, 0X8, 0X65, 0X6, 0X1,
0X1, 0X1, 0XD1, 0X7, 0X15, 0X7, 0XD7, 0X23, 0XD8, 0X7, 0XE8, 0X9, 0XFD, 0XA, 0XB, 0XFE,
0XB, 0XFE, 0X9, 0XFC, 0XD8, 0X8, 0XD8, 0XD6, 0X22, 0XD6, 0XD6, 0X22, 0X8, 0XE, 0XE, 0XE,
0X5F, 0X6F, 0XE, 0XE, 0XE, 0X4F, 0XD, 0XFC, 0X16, 0XE8, 0X17, 0XF8, 0XFC, 0X6E, 0XE, 0XE,
0X65, 0X7, 0X34, 0X78, 0X64, 0X65, 0X76, 0X5D, 0XE, 0XD, 0X6E, 0X64, 0X33, 0X65, 0X33, 0X3,
0X2, 0XC0, 0X1, 0XD3, 0X7, 0XD7, 0X15, 0XD7, 0X22, 0XD7, 0X7, 0XD7, 0X7, 0XFC, 0X9, 0XFC,
0X9, 0X9, 0XFC, 0X7, 0X7, 0X15, 0X5, 0X14, 0XD6, 0X5, 0XD6, 0X14, 0XFA, 0X1B, 0XE, 0X6F,
0XE, 0XE, 0XE, 0X5F, 0X6E, 0XFD, 0X16, 0XF7, 0X17, 0XF8, 0XF8, 0X17, 0XD, 0XE, 0X6F, 0XE,
0X65, 0X8, 0X66, 0X7, 0X33, 0X8, 0X65, 0XC, 0X8, 0X65, 0X7, 0X64, 0X8, 0X65, 0X7, 0X7,
0X1, 0X1, 0X1, 0X1, 0X5, 0X14, 0X8, 0XD8, 0XD8, 0X23, 0XD8, 0X22, 0XD6, 0XD6, 0X7, 0XE8,
0X7, 0X15, 0XD6, 0XD5, 0XD5, 0XD6, 0XD6, 0X5, 0XD6, 0X22, 0XD6, 0X23, 0XFA, 0X17, 0X1D, 0XE,
0X6F, 0X5F, 0X6F, 0X1D, 0X16, 0X17, 0XF8, 0X17, 0XF8, 0X17, 0XE8, 0X17, 0X6F, 0XE, 0X4F, 0X6F,
0X64, 0X34, 0X77, 0X66, 0X65, 0X33, 0X65, 0X8, 0X66, 0X33, 0X65, 0X33, 0X65, 0X34, 0X65, 0X74,
0X1, 0X1, 0X1, 0X1, 0XD0, 0XD5, 0XD6, 0X7, 0X8, 0XE8, 0X8, 0XD8, 0X21, 0XE2, 0X10, 0X4,
0XD5, 0XD4, 0X20, 0XD4, 0X23, 0XD7, 0X24, 0XD7, 0X14, 0X6, 0XD6, 0X16, 0XFA, 0XF8, 0XF8, 0X1E,
0XE, 0X1F, 0X17, 0XE8, 0XE8, 0XF8, 0X17, 0XFA, 0XF7, 0XFA, 0XF7, 0XE, 0X5F, 0XD, 0X6F, 0XD,
0X65, 0X7, 0X66, 0X34, 0X7, 0X65, 0X8, 0X66, 0X33, 0X65, 0X7, 0X65, 0X7, 0X65, 0X7, 0X64,
0XD0, 0X1, 0X2, 0X1, 0X1, 0X1, 0X20, 0X14, 0XD8, 0X7, 0XE8, 0X7, 0XE8, 0X8, 0XD7, 0X15,
0X7, 0XE7, 0X7, 0XD8, 0X7, 0XD8, 0X14, 0X6, 0XD6, 0X20, 0XD4, 0XE0, 0X17, 0X18, 0XFA, 0X17,
0XFC, 0X16, 0XFA, 0X17, 0XF8, 0X17, 0XF8, 0XF7, 0X17, 0XF8, 0X17, 0XE, 0X6F, 0XE, 0X5F, 0XE,
0X65, 0X34, 0X76, 0X8, 0X66, 0X33, 0X65, 0X34, 0X78, 0X34, 0X78, 0X33, 0X65, 0X7, 0X30, 0X5,
0X70, 0X1, 0X2, 0X2, 0X2, 0X1, 0XC0, 0X2, 0X20, 0XD7, 0X23, 0XD7, 0X6, 0XE7, 0X7, 0XD8,
0XD7, 0X15, 0XD7, 0X15, 0XD6, 0X22, 0XD6, 0X4, 0X13, 0XD4, 0X1, 0X1, 0X15, 0XF8, 0XF8, 0XF8,
0XF8, 0XF8, 0XF8, 0XF8, 0X17, 0XF8, 0X17, 0XFA, 0XF7, 0XFA, 0XD, 0X5F, 0XD, 0X6F, 0X6E, 0XE,
0X9, 0X65, 0X34, 0X66, 0X7, 0X66, 0X7, 0X65, 0X7, 0X74, 0X4, 0X4, 0X3, 0X2, 0X2, 0X1,
0X1, 0X2, 0X1, 0X2, 0X2, 0X2, 0X2, 0X1, 0X1, 0XD2, 0XD4, 0X20, 0XD5, 0X10, 0X5, 0X13,
0X5, 0XD5, 0X20, 0X5, 0X10, 0XD4, 0XE0, 0XD3, 0X2, 0X1, 0X1, 0X1, 0XD0, 0X17, 0XFA, 0X17,
0XF9, 0X17, 0XF8, 0XE8, 0XF8, 0XFA, 0XF7, 0X17, 0XF8, 0X17, 0X6F, 0XE, 0X6F, 0X4F, 0XE, 0XE,
0X65, 0X7, 0X66, 0X7, 0X64, 0X6, 0X30, 0X73, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X1, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1, 0XD1, 0XD2, 0XD2, 0XE1, 0XE1,
0X10, 0XD4, 0XE1, 0XD4, 0XD3, 0X20, 0X2, 0XD0, 0X1, 0X1, 0X1, 0X1, 0X1, 0X13, 0X16, 0XF8,
0XFA, 0XF8, 0X17, 0XF8, 0X17, 0XF8, 0X17, 0XFA, 0XE7, 0XD, 0X6F, 0XE, 0X6E, 0XE, 0X4F, 0XE,
0X33, 0X76, 0X30, 0X2, 0X3, 0X70, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X70, 0X3, 0X2, 0X1,
0X1, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1, 0X1, 0X1, 0X2, 0XD2,
0XD2, 0XE0, 0XD2, 0XE0, 0X4, 0X9, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X3, 0X2,
0X3, 0X20, 0XD5, 0X16, 0XF8, 0XFA, 0XF7, 0XF8, 0X18, 0X6F, 0XE, 0X5F, 0XE, 0XE, 0X6E, 0XE,
0X83, 0XD2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2,
0X1, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X9,
0X7, 0X8, 0X8, 0XFC, 0XA, 0XD2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X3,
0X2, 0X2, 0X2, 0X3, 0X4, 0X13, 0X17, 0XF8, 0XD, 0X5F, 0XE, 0X6F, 0X6E, 0X5F, 0XE, 0XE,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X1, 0X70, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3,
0X8, 0XFB, 0XD8, 0X9, 0X3, 0X2, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2,
0X3, 0X3, 0X3, 0X2, 0X2, 0X3, 0X4, 0X14, 0X6F, 0XE, 0X6F, 0XE, 0XE, 0XE, 0X4F, 0X6F,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X1, 0X3, 0X2, 0X3, 0X3, 0X70, 0X4, 0X2, 0X2, 0X70, 0X3, 0X2, 0XD1,
0X2, 0X5, 0X9, 0X3, 0X1, 0X2, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2,
0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X3, 0X3, 0X4, 0X5, 0X7, 0XE, 0X4F, 0X6E, 0XE, 0X6E,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X71, 0X3, 0X2, 0X2, 0X2, 0X70,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X3, 0X2, 0X3, 0X3, 0X3, 0X2, 0X2, 0X2,
0X3, 0X4, 0X20, 0X1, 0X2, 0X2, 0X1, 0X2, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2,
0X2, 0X3, 0X2, 0X2, 0X3, 0X3, 0X3, 0X83, 0X3, 0X2, 0X2, 0X2, 0X6, 0XD, 0X5F, 0X6F,
0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X3, 0X3, 0X2, 0X2, 0X3, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X1, 0X1, 0X2, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2,
0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X5, 0XE,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2,
0X1, 0X1, 0X2, 0X1, 0X1, 0X2, 0X1, 0X2, 0X1, 0X2, 0X1, 0X70, 0X1, 0X1, 0X2, 0X2,
0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X3, 0X2, 0X3,
0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X3,
0X70, 0X3, 0X2, 0X3, 0X2, 0X70, 0X1, 0X2, 0X3, 0X2, 0X3, 0X70, 0X3, 0X3, 0X2, 0X2,
0X1, 0X1, 0X1, 0X3, 0X1, 0X1, 0X1, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2,
0X3, 0X2, 0X70, 0X3, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2,
0X3, 0X2, 0X2, 0X70, 0X3, 0X3, 0X3, 0X1, 0X2, 0X70, 0X3, 0X3, 0X3, 0X2, 0X2, 0X2,
0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X70, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0X2,
0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X3, 0X2, 0X70, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3,
0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X70, 0X3,
0X2, 0X2, 0X3, 0X3, 0X3, 0X2, 0X2, 0X2, 0X1, 0X3, 0X3, 0X2, 0X2, 0X3, 0X2, 0X1,
0X2, 0X2, 0X2, 0X1, 0X2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0X3,
0X70, 0X3, 0X3, 0X3, 0X2, 0X3, 0X70, 0X3, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X3, 0X3, 0X3,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X1, 0X2, 0X2, 0X2, 0X2, 0X1, 0X70,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1, 0X2, 0X2, 0X3, 0X2,
0X3, 0X3, 0X2, 0X2, 0X3, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2,
0X3, 0X4, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1, 0X1, 0X1, 0X1, 0X1,
0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1, 0X1, 0X1, 0X2, 0X3, 0X2, 0X3, 0X2,
0X2, 0X3, 0X2, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X1,
0X2, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3,
0X2, 0X3, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2,
0X3, 0X2, 0X3, 0X70, 0X3, 0X2, 0X70, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X3, 0X3, 0X2, 0X3, 0X3, 0X3, 0X2, 0X2, 0X3, 0X2, 0X3, 0X70, 0X3, 0X2,
0X3, 0X2, 0X3, 0X3, 0X3, 0X3, 0X2, 0X3, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X2, 0X2, 0X70,
0X3, 0X2, 0X3, 0X3, 0X3, 0X3, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X70, 0X3, 0X2,
0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X3,
0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X3, 0X2, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X70, 0X2, 0X3, 0X3, 0X2, 0X3, 0X3,
0X2, 0X2, 0X3, 0X2, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X3, 0X2, 0X2,
0X2, 0X2, 0X3, 0X2, 0X3, 0X3, 0X3, 0X2, 0X2, 0X3, 0X3, 0X2, 0X3, 0X2, 0X3, 0X2,
0X3, 0X3, 0X3, 0X2, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X2, 0X2, 0X2, 0X2, 0X2, 0X70, 0X2, 0X2, 0X1, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2, 0X2,
0X3, 0X2, 0X2, 0X3, 0X2, 0X3, 0X2, 0X3, 0X3, 0X2, 0X2, 0X2, 0X2, 0X2, 0X3, 0X2,
0X2, 0X2, 0X3, 0X70, 0X3, 0X2, 0X2, 0X3, 0X70, 0X3, 0X2, 0X3, 0X2, 0X3, 0X2, 0X3,
0X2, 0X2, 0X2, 0X3, 0X2, 0X3, 0X3, 0X2, 0X70, 0X3, 0X2, 0X2, 0X2, 0X2, 0X1, 0X2, };
///////////////////