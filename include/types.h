#ifndef _BMHERO_TYPES_H_
#define _BMHERO_TYPES_H_

// structs and defines

#define UNK_TYPE s32

typedef float Matrix[4][4];

struct UnkStruct8010B3FC {
    char filler0[0x20];
    Lights2 *unk20;
};

typedef struct {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
} UnkStruct80165100;

struct UnkStruct8016E104 {
    /* 0x00 */ Mtx unk00[3];
    /* 0xC0 */ Hilite hilites[2];
    /* 0xE0 */ Mtx unkE0[1];
};

struct UnkStruct8016E10C {
    u32 unk0;
    u8 filler4[0x4];
    u32 unk8;
    u32 unkC;
    OSTask task;
    OSMesgQueue *unk50;
    u32 unk54;
    u32 unk58;
    u8 filler5C[0x4];
    u32 unk60;
    u8 filler64[0x18148-0x64];
    u32 unk18148[1];
    u8 filler1814C[0x1C];
    u32 unk18168;
};

struct UnkInputStruct80001CF0 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    char filler8[0x4];
    OSTask unk10;
};

struct UnkStruct80001CF0 {
    s16 unk0;
    char filler2[0x1E];
    s16 unk20;
    char filler22[0x40-0x22];
    OSMesgQueue unk40;
    OSMesg unk58;
    char filler5C[0x1C];
    OSMesgQueue unk78;
    OSMesg unk90;
    char filler94[0x1C];
    OSThread unkB0;
    u32 unk260;
    u32 unk264;
    u32 unk268;
    u32 unk26C;
    u32 unk270;
    struct UnkInputStruct80001CF0 *unk274;
    u32 unk278;
    u32 unk27C;
    u32 unk280;
};

struct UnkStruct80340000 {
    char filler0[0x18170];
}; // size = 0x18170

struct UnkStruct260 {
    u32 unk0;
    OSMesg unk4;
};

struct UnkStruct80002424 {
    char filler0[0x4];
    u32 unk4;
    u32 unk8;
    void *unkC;
    u32 unk10;
    char filler14[0x3C];
    OSMesgQueue *unk50;
    OSMesg unk54;
};

struct UnkStruct8000265C {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    char fillerC[0x4];
    u32 unk10;
};

struct UnkStruct800026F4_Arg1 {
    char filler0[0x4];
    u32 unk4;
    char filler8[0x8];
    OSTask unk10;
};

struct UnkStruct800026F4_Arg2 {
    char filler0[0x38];
    u32 unk38;
    u64 *unk3C;
};

struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
};

struct ShortPair {
    s16 unk0;
    s16 unk2;
};

struct MegaStruct {
     struct Vec3f D_80134F28;
     struct Vec3f D_80134F34;
     f32 D_80134F40;
     struct Vec3f D_80134F44;
     struct Vec3f D_80134F50;
     struct Vec3f D_80134F5C;
     struct Vec3f D_80134F68;
     f32 D_80134F74;
     struct Vec3f D_80134F78;
     struct Vec3f D_80134F84;
     struct Vec3f D_80134F90;
     f32 D_80134F9C;
     struct ShortPair D_80134FA0;
     struct ShortPair D_80134FA4;
     s32 D_80134FA8;
};

struct UnkStruct_8008AE64
{
    s32 Unk0;
    char Padding[9];
};

struct UnkStruct80088B80
{
    s16 Unk0;
    char Padding[17];
};

struct UnkStruct80088B80_2
{
    f32 Unk0;
    char Padding[13];
};

struct UnkStruct80088B80_3
{
    struct UnkStruct_8008AE64 Unk0;
    char Padding[0x3];
};

struct Light
{
    u8 LightData[8];
};

struct LightingStruct
{
    struct Light AmbientLight;
    struct Light DiffuseLight;
    s8 Direction[8];
};

struct LevelInfo {
    /* 0x00 */ s8 Stage;
    /* 0x01 */ s8 Area;
    /* 0x02 */ s8 Map;
    /* 0x03 */ s8 Clear;
    char filler4[0x4];
    /* 0x08 */ u8* Unk8;
    char fillerC[0x13];
    /* 0x20 */ Lights2* unk20;
    /* 0x24 */ Lights2* LightingInfo;
};

struct ObjectStruct 
{
    struct Vec3f Pos;
    struct Vec3f Scale;
    struct Vec3f Rot;
    struct Vec3f Vel;
    char pad30[0x8];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    f32 unk4C;
    f32 unk50;
    f32 unk54;
    f32 unk58;
    char padding15[0x14];
    f32 unk70;
    char padding16[0x18];
    f32 unk8C;
    char padding13[0x14];
    s16 unkA4;
    s16 unkA6;
    s16 unkA8;
    s16 unkAA;
    s16 unkAC;
    s16 unkAE;
    s16 unkB0;
    s16 unkB2;
    s16 unkB4;
    s16 unkB6;
    s16 unkB8;
    s16 unkBA;
    s16 unkBC;
    s16 unkBE;
    s16 unkC0;
    s16 unkC2;
    char padding8[0x10];
    f32 unkD4;
    char padding9[0xB];
    s16 unkE4;
    s16 unkE6[0x1];
    s16 unkE8[0x2];
    s16 unkEC;
    char padding10[0xE];
    s16 unkFC;
    char padding11[0x2];
    s16 unk100;
    s8 unk102;
    s8 unk103;
    s16 unk104;
    s16 unk106;
    s16 unk108;
    char Pad10A[1];
    u8 unk10B;
    u8 unk10C;
    s16 unk10E[1];
    char pad10C[0x18];
    f32 unk128;
    f32 unk12C;
    char pad[0x1];
    u8 unk131;
    u8 unk132;
    char pad133[0x7];
    s8 unk13A;
    s8 unk13B;
    s8 unk13C;
    s8 unk13D;
    s8 unk13E;
    s8 unk13F;
    s16 Unk140[1];
    char pad142[0xC];
};

struct UnkStruct80134D48 {
    u32 *unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
}; // size = 0x14

struct UnkStructSTCG
{
    f32 Unk0;
    f32 Unk4;
    f32 Unk8;
    char Padding_3[0x24 - (sizeof(f32) * 3)];
    f32 Unk24;
    f32 Unk28;
    f32 Unk2C;
    char Padding_1[0xA4 - 0x24 - (sizeof(s32) * 3)];
    s16 UnkA4;
    char Padding_2[0x108 - 0xA4 - sizeof(s16)];
    s16 Unk108;
};

struct DecompressedFileEntry
{
    u8 *ptr; // ptr to the decompressed file area
    u8 filler4[4]; // unused
};

struct View {
    /* 0x00 */ struct Vec3f at;
    /* 0x0C */ struct Vec3f eye;
    /* 0x18 */ struct Vec3f rot;
    /* 0x24 */ struct Vec3f up;
    /* 0x30 */ f32 dist;
}; // size=0x34

// DEMO IDs
#define DEMO_TITLE_INTRO                0
#define DEMO_CREDIT_SCENE               1
#define DEMO_BOMBER_CHANGE_JET_QUICK    2
#define DEMO_BOMBER_CHANGE_MARINE_QUICK 3
#define DEMO_BOMBER_CHANGE_COPTER_QUICK 4
#define DEMO_BOMBER_CHANGE_SLIDER_QUICK 5
#define DEMO_BOMBER_CHANGE_JET          6
#define DEMO_BOMBER_CHANGE_MARINE       7
#define DEMO_BOMBER_CHANGE_COPTER       8
#define DEMO_BOMBER_CHANGE_SLIDER       9
#define DEMO_LAST DEMO_BOMBER_CHANGE_SLIDER

struct UnkStruct80165290 {
    s32 unk0;
    char padding4[0x10];
    u8 unk14;
    char padding15[0x7];
    s32 unk1C;
    char padding20[0x50];
};

struct UnkStruct_8001EFD0 {
    s32 unk0;
    char pad[0x64];
    s32 unk68;
    s32 unk6C;
    s32 unk70;
    s32 unk74;
    s32 unk78;
    s32 unk7C;
    s32 unk80;
};

struct UnkStruct_8004A5F0 {
    s32 unk0;
    char pad [0xE];
    s8 unkE;
};

// could be a Vector
struct UnkStruct8004A3A0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

// could be Struct Tri. describes 3 vectors
struct UnkInputStruct8000FEB0 {
    struct UnkStruct8004A3A0 unk0;
    struct UnkStruct8004A3A0 unkC;
    struct UnkStruct8004A3A0 unk18;
};

struct UnkStruct80055D50 {
    u32 unk0;
    struct UnkStruct8004A3A0 unk4[3];
    u32 unk28;
    u32 unk2C;
}; // size = 0x30

struct UnkInputStruct8000FF44 {
    u32 unk0;
    u32 unk4;
    char filler8[0x4];
    struct UnkInputStruct8000FF44 **unkC;
    s32 unk10;
    struct UnkStruct8004A3A0 unk14[3];
};

struct UnkInputStruct80010098 {
    u32 unk0;
    char filler4[0x24];
    struct UnkInputStruct8000FF44 *unk28;
};

struct UnkInputStruct800100E8_SP24 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 *unkC;
    u32 unk10;
    u32 unk14;
    char filler18[0x18];
};

struct UnkInputStruct80010350 {
    char filler0[0xC];
    u32 *unkC;
    s32 unk10;
};

struct UnkStruct8016E3AC {
    char filler0[0xC];
    u32 unkC;
    char filler10[0x8];
    u32 unk18;
};

struct UnkInputStruct80010408_Inner {
    u32 unk0;
    u32 unk4;
    char filler8[0x4];
};

struct UnkInputStruct80010408 {
    char filler0[0x4];
    u32 unk4;
    char filler8[0x4];
    struct UnkInputStruct80010408_Inner unkC[1];
};

struct UnkStruct80010408_SP2C {
    u32 unk0;
    struct UnkStruct8004A3A0 unk4[3];
    u32 unk28;
};

struct UnkStruct800105D8 {
    u32 unk0;
    char filler4[0x24];
    struct UnkInputStruct80010350* unk28;
};

struct UnkInputStruct80010634_SP20 {
    u32 *unk0;
    s32 unk4;
    struct UnkStruct8004A3A0 unk8;
    struct UnkStruct8004A3A0 unk14;
    struct UnkStruct8004A3A0 unk20;
};

struct UnkStruct80055D54 {
    char filler0[0x4];
    struct UnkInputStruct80010634_SP20 *unk4;
    u32 unk8;
};

struct UnkInputStruct800108D0 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
};

struct UnkInputStruct80010B6C {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

struct UnkInputStruct80010B6C_2 {
    struct UnkStruct8004A3A0 unk0[3];
};

struct UnkInputStruct80010C88 {
    u32 *unk0;
    char filler4[0x4];
    struct UnkInputStruct80010C88 **unk8;
    s32 unkC;
    u32 unk10[1]; // unk size
    char filler14[0x4];
    struct UnkInputStruct80010B6C_2 unk18[1];
};

struct UnkInputStruct80011084_Inner {
    u8 filler0[0x14];
    f32 unk14[3];
};

struct UnkInputStruct80011084 {
    struct UnkInputStruct80011084_Inner *unk0;
    u8 filler4[0x4];
    u32 *unk8;
    s32 unkC;
    u32 unk10;
    u32 unk14;
    f32 unk18[3];
    u8 filler24[0x18];
    f32 unk3C[3];
};

struct UnkStruct800111D4_Inner {
    u32 unk0[3];
    struct UnkStruct800111D4_Inner *unkC;
    u8 filler10[0x4];
    f32 unk14[3];
    f32 unk20[3];
    f32 unk2C[3];
};

struct UnkStruct800111D4 {
    u8 filler0[0x24];
    u32 unk24;
    struct UnkStruct800111D4_Inner *unk28;
};

struct UnkInputStruct8000E680 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    char fillerC[0x4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    char filler1C[0x4];
    f32 unk20;
    f32 unk24;
    f32 unk28;
    char filler2C[0x4];
};

struct UnkInnerStruct8000E944 {
    union {
        s32 unk0;
        f32 unk0_f;
    } u;
    f32 unk4;
    f32 unk8;
    char fillerC[0x1C];
    u32 unk28;
    u32 unk2C;
};

struct UnkInputStruct8000EEE8_SPE4 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

struct UnkInputStruct8000EEE8_SPEC {
    s32 unk0; // type of unk4 union?
    union {
        f32 unk4_as_f;
        s32 unk4_as_s;
    } u;
    Gfx *dlist;
};

struct UnkInputStruct8000FC08 {
    s32 unk0;
    char filler4[0x8];
    u32 *unkC;
    s32 unk10;
    char filler14[0x14];
    u32 unk28;
};

struct UnkInputStruct800069D0 {
    u32 unk0;
    f32 unk4;
    u32 unk8;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    u8 unk12;
    u8 unk13;
    s8 unk14;
    u8 unk15;
    u8 unk16;
};

struct UnkInputStruct80002F94 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u8 unk10;
    s32 *unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
    u32 unk28;
    u16 unk2C;
    u32 unk30;
    u32 unk34;
    u32 unk38;
    u32 unk3C;
};

struct UnkStruct80052D5C {
    u32 unk0;
    f32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    s16 unk14;
    s16 unk16;
    s16 unk18;
    u16 unk1A;
    f32 unk1C;
    s16 unk20;
    s8 unk22;
    s8 unk23;
    u8 unk24;
    u8 unk25;
    u8 unk26;
    u8 unk27;
    u8 unk28;
    s8 unk29;
    char filler2A[0x2];
};

struct UnkStruct80052EB4 {
    u8 unk0;
    u8 unk1;
    char filler2[0x2];
    u32 len;
    u32 unk8;
    u32 unkC;
};

struct UnkStruct80052ED8 {
    struct UnkStruct80052ED8* unk0;
    char filler4[0x10];
};

struct UnkInputStruct800047C8 {
    u32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
};

struct UnkStruct80052D58 {
    s16 unk0;
    s16 unk2;
    char filler4[0x1]; // unk size
};

// this is some pointer ALBank has to, but it doesnt match up with an ALBank struct. What is this.
struct UnkALStruct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u16 unk4;
    u16 unk6;
};

struct UnkStruct80052D60 {
    u8 unk0;
    u8 unk1;
    char filler2[0x6];
};

struct UnkStructSP1C {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u8  unkC;
    u8  unkD;
    u8  unkE;
    u8  unkF;
};

struct UnkStructSP18 {
    u32 unk0;
    char filler4[0x5];
    u8 unk9;
    char fillera[0x2];
    u32 unkC;
    u32 unk10;
};

struct UnkInputStruct80007140 {
    char filler0[0x13];
    u8 unk13;
};

typedef struct {  
    u8      rate;
    u8      depth;
    u8      oscCount;
} defData;

typedef struct {
    u8      halfdepth;
    u8      baseVol;
} tremSinData;
    
typedef struct {
    u8      curVal;
    u8      hiVal;
    u8      loVal;
} tremSqrData;

typedef struct {
    u8      baseVol;
    u8      depth;
} tremSawData;
    
typedef struct {
    f32     depthcents;
} vibSinData;

typedef struct {
    f32     loRatio;
    f32     hiRatio;
} vibSqrData;

typedef struct {
    s32     hicents;
    s32     centsrange;
} vibDSawData;

typedef struct {
    s32     locents;
    s32     centsrange;
} vibASawData;

// based on case 0xC9
typedef struct {
    f32    unkC;
} unkC9Data;

typedef struct oscData_s {
    struct oscData_s  *next;
    u8      type;
    u8      stateFlags;
    u16     maxCount;
    u16     curCount;
    union {
        defData         def;
        tremSinData     tsin;
        tremSqrData     tsqr;
        tremSawData     tsaw;
        vibSinData      vsin;
        vibSqrData      vsqr;
        vibDSawData     vdsaw;
        vibASawData     vasaw;
        unkC9Data       unk;
    } data;        
} oscData;

#define MAX_VOICES              22

/*
 * Number of osc states needed. In worst case will need two for each
 * voice. But if tremelo and vibrato not used on all instruments will
 * need less.
 */
#define  OSC_STATE_COUNT    2*MAX_VOICES 

#define  TREMELO_SIN        1
#define  TREMELO_SQR        2
#define  TREMELO_DSC_SAW    3
#define  TREMELO_ASC_SAW    4
#define  VIBRATO_SIN        128
#define  VIBRATO_SQR        129
#define  VIBRATO_DSC_SAW    130
#define  VIBRATO_ASC_SAW    131

#define AL_PAN_CENTER   64
#define AL_PAN_LEFT     0
#define AL_PAN_RIGHT    127
#define AL_VOL_FULL     127
#define AL_KEY_MIN      0
#define AL_KEY_MAX      127
#define AL_DEFAULT_FXMIX	0
#define AL_SUSTAIN      63

#define  OSC_HIGH   0
#define  OSC_LOW    1
#define  TWO_PI     6.2831853

struct UnkStruct8004A2A4 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    void* unk14;
    u32 unk18;
};

struct UnkStruct8004A310 {
    s32 unk0;
    void *unk4;
};

struct UnkStruct80052D80 {
    u32 unk0;
    u32 unk4;
};

struct UnkStruct80052D88 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s8 unkE;
};

struct UnkStruct80052DA8 {
    s16 unk0;
    s16 unk2;
    s8 unk4;
    s8 unk5;
    u8 unk6;
    s8 unk7;
    s8 unk8;
    s8 unk9;
    char fillerA[0x2];
};

struct UnkStruct_8011670C {
    s32 unk0;
    char pad[0x18];
};

struct UnkStruct_80027B34 {
    /* 0x0 */ s8 unk0;
    /* 0x2 */ s16 unk2;
    /* 0x4 */ s8 unk4;
    /* 0x8 */ s32 unk8;
    /* 0xC*/ s8 unkC;
};

struct UnkStruct_80027C00 {
    /* 0x0 */ s8 unk0;
    /* 0x2 */ s16 unk2;
    /* 0x4 */ s16 unk4;
    /* 0x6 */ s8 unk6;
    /* 0x7 */ s8 unk7;
    /* 0x8 */ s8 unk8;
    /* 0x9 */ s8 unk9;
    /* 0xA */ char unkA;
};

struct UnkStruct_80028260 {
    union {
        s32 unk0;
        f32 _unk0;
    };
    union {
        s32 unk4;
        f32 _unk4;
    };
};

struct UnkStruct_80026548 {
    // Dunno if this is real or not
    char unk0;
    char filler1[0x3];
    s8 unk4;
    char filler5[0x3];
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 unkE;
    s8 unkF;
    char filler10[0x4];
    void *(*routine)( );
    void *(*routine2)( );
    char filler1C[0x14];
    u64 unk30;
    char filler28[0x24];
};


struct UnkStruct_80027464 {
    s32 unk24[1];
    char pad[0x20];
};

typedef struct {
    s16 unk0;
    char padding[0x14E];
} UnkStruct800FA0DC;

typedef struct {
    f32 unk0;
} UnkStruct80114354;

struct CutsceneString {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 len;
    /* 0x0A */ s16 str[1]; // dynamic length
};

struct DemoString {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2;
    /* 0x04 */ s16 unk4;
    /* 0x06 */ s16 unk6;
    /* 0x08 */ s16 len;
    u8 paddingA[0x2];
    /* 0x0C */ s16 str[1]; // dynamic length
};

struct StringInfo {
    struct DemoString *strInfo;
    s16 x;
    s16 y;
    s16 renderBG;
};

struct UnkStruct_801347A0 {
    s32 *arr;
};

struct UnkStruct80134794 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14[8];
    u32 unk34[8];
    s8 unk54;
};

struct UnkInputStruct_8001ABF4 {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
    void *unk10;
    s16 unk14;
    u8 unk16;
    u8 unk17;
    u8 unk18;
};

struct UnkStruct_8010289C {
    struct String *unk0[7];
};

extern struct UnkStruct8016E230 {
    u32 unk0;
    u32 unk4;
} UnkStruct8016E230;

typedef struct UnkStruct_800600B8 {
    u8 Unk01;
    u8 Padding[3];
} UnkStruct_800600B8;

struct UnkStruct_56400 {
    s16* ptr;
    s16 Unk04;
    s16 Unk06;
};

struct UnkStruct80177778 {
    char filler0[0x18];
    s16 unk18;
};

struct UnkBigStruct_8006B64C
{
    u16 Unk0;
    u16 Unk1;
    u8 Padding[336 - sizeof(u32)];
};

struct UnkStruct80176458 {
    Vtx vertices[4];
    f32 unk40[4];
    u32 unk50;
    u8 padding54[0x4]; // Or, really, unidentified members
}; // size 0x58;

// Not entierly sure about this struct, needs more investigation
struct UnkInputStruct800643C0_arg9 {
    s16 unk00s16;
    s16 unk02[3];
    s16 unk08;
}; // size = 0xA;

struct UnkStruct80177964 {
    s8 unk0;
    u8 padding1[0x2B];
    f32 unk2C;
    f32 unk30;
}; // size=0x34

struct UnkStruct80104C20 {
    u8 *romAddr;
    int size;
};

struct UnkStruct800654AC_SP0 {
    char filler0[0x8];
    s8 unk8;
    char filler9[0x3];
    s8 unkC;
};

struct UnkStruct800657E8_sp40 {
    char filler0[0x4];
    s8 unk4;
    s8 filler5[0x2];
    s8 unk7[2]; // unk size, could be rest of struct
    s8 filler9[0x3];
    s8 unkC;
    s8 fillerD[0x3];
};

#endif // _BMHERO_TYPES_H_