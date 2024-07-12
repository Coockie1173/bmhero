#include <ultra64.h>

extern Gfx* gMasterDisplayList;

extern Lights2 D_8004A590;
extern Lights2 gLightingSettings;

struct UnkStruct8010B3FC {
    char filler0[0x20];
    Lights2 *unk20;
};

extern struct UnkStruct8010B3FC *gLevelInfo[];

extern s32 D_8016E084;
extern s32 D_8016E08C;
extern s32 D_8016E244;
extern s32 D_8016E26C;
extern s32 D_8016E274;
extern s32 D_801765F4;
extern s8 D_80176602;
extern u8 D_801775BC;
extern u8 D_801775C4;
extern u8 D_801775CC;
extern u8 D_801775D4;
extern u8 D_801775DC;
extern u8 D_801775E4;
extern u8 D_801775EC;

// functions
s32 func_8001EBE8();                                  /* extern */
s32 func_8001EC1C();                                  /* extern */
s32 func_8001EC50();                                  /* extern */
s32 func_8001EC84();                                  /* extern */

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016D30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016DD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016E84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/PlayTrack_WithVolLoop.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80016FF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800171E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800175F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800176F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800177D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800178D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017934.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800179B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017B04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017B3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017CFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017DFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017EE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80017FD8.s")

s32 func_80017FF8(void) {
    Lights2 *sp4 = gLevelInfo[gCurrentLevel]->unk20;

    if (sp4) {
        gLightingSettings = *sp4;

        if ((gCurrentLevel == 0x3B) || (gCurrentLevel == 0x40)) {
            return 2;
        } else {
            return 1;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800180C4.s")

void func_8001819C(void) {
    gLightingSettings = D_8004A590;
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800181F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001838C.s")

void func_800183E8(s32 r, s32 g, s32 b, s32 a, s32 arg4, s32 arg5) {
    gDPPipeSync(gMasterDisplayList++);
    gDPSetCycleType(gMasterDisplayList++, G_CYC_1CYCLE);
    gSPClearGeometryMode(gMasterDisplayList++, G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH);
    gSPSetGeometryMode(gMasterDisplayList++, G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH);
    gDPSetCombineLERP(gMasterDisplayList++, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1);
    gDPSetRenderMode(gMasterDisplayList++, AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM));
    gDPSetFogColor(gMasterDisplayList++, r, g, b, a);
    gSPFogFactor(gMasterDisplayList++, (0x1F400 / (arg5 - arg4)), ((-1 * arg4) + 0x1F4) * 0x100 / (arg5 - arg4));
    gDPSetTextureFilter(gMasterDisplayList++, G_TF_BILERP); 
    gDPSetTexturePersp(gMasterDisplayList++, G_TP_PERSP);
    gSPNumLights(gMasterDisplayList++, 2);
    gSPLight(gMasterDisplayList++, &gLightingSettings.l[0], 1);
    gSPLight(gMasterDisplayList++, &gLightingSettings.l[1], 2);
    gSPLight(gMasterDisplayList++, &gLightingSettings.a, 3);
}

void func_80018794(s32 r, s32 g, s32 b, s32 a, s32 arg4, s32 arg5) {
    gDPPipeSync(gMasterDisplayList++);
    gDPSetCycleType(gMasterDisplayList++, G_CYC_2CYCLE);
    gSPClearGeometryMode(gMasterDisplayList++, G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH);
    gSPSetGeometryMode(gMasterDisplayList++, G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH);
    gDPSetCombineLERP(gMasterDisplayList++, TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED);
    gDPSetRenderMode(gMasterDisplayList++, G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2);
    gDPSetFogColor(gMasterDisplayList++, r, g, b, a);
    gSPFogFactor(gMasterDisplayList++, (0x1F400 / (arg5 - arg4)), ((-1 * arg4) + 0x1F4) * 0x100 / (arg5 - arg4));
    gDPSetAlphaCompare(gMasterDisplayList++, G_AC_NONE);
    gDPSetAlphaDither(gMasterDisplayList++, G_AD_DISABLE);
    gDPSetColorDither(gMasterDisplayList++, G_CD_DISABLE);
    gDPSetBlendColor(gMasterDisplayList++, 0x00, 0x00, 0x00, 0x01);
    gDPSetTextureFilter(gMasterDisplayList++, G_TF_BILERP); 
    gDPSetTexturePersp(gMasterDisplayList++, G_TP_PERSP);
    gSPNumLights(gMasterDisplayList++, 2);
    gSPLight(gMasterDisplayList++, &gLightingSettings.l[0], 1);
    gSPLight(gMasterDisplayList++, &gLightingSettings.l[1], 2);
    gSPLight(gMasterDisplayList++, &gLightingSettings.a, 3);
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80018C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80018CF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80018EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019050.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800193CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_800194C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001994C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019BC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019C84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019CCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019D2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_80019D74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A258.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A2A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A488.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A5F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A88C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A958.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001A988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001AA60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001AB30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001AB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001ABC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001ABF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001AD6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B014.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B44C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B49C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B580.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B62C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B6AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B6BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B7E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001B9F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BA7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BB04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BB34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BBDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BC84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BD44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001BE6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C0EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C1A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C248.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C464.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C5B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C70C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001C96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CAAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CD20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CD50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CD88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CDF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001CEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D000.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D1D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D244.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D284.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D3CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D440.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D4D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001D9E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001DC78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001DCD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001DCEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001DEDC.s")

void func_8001DFC8(void) {
    s32 sp1C;
    u16 i;

    D_8016E27C = 0;
    osCreateMesgQueue(&D_801776B0, &D_801776CC, 1);
    osSetEventMesg(5U, &D_801776B0, (void* )1);
    sp1C = osContInit(&D_801776B0, &D_8016E27C, &D_80177650);
    if (sp1C != 0) {

    }
    for(i = 0; i < 4; i++) {
        D_8016E300[i] = 0;
        D_8016E320[i] = 0;
        D_8016E310[i] = 0;
        D_8016E330[i] = 0;
        D_8016E33C[i] = 0;
        D_8016E344[i] = 0;
        D_8016E350[i] = 0;
        D_8016E360[i] = 0;
        D_8016E370[i] = 0;
        D_8016E2A0[i] = 0;
        D_8016E290[i] = 0;
        D_8016E2B0[i] = 0;
        D_8016E2BC[i] = 0;
        D_8016E2C4[i] = 0;
        D_8016E2D0[i] = 0;
        D_8016E2E0[i] = 0;
        D_8016E2F0[i] = 0;
    }
    func_8001DEDC(0);
    func_8001DC78();
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001E1C0.s")

void func_8001E208(void) {
    OSContPad* pad;
    u16 dir;
    u16 i;
    s32 status;

    status = 1;
    if (D_8016E27C & 1) {
        status = osContStartReadData(&D_801776B0);
        if (status == 0) {
            osRecvMesg(&D_801776B0, NULL, 1);
            osContGetReadData(D_80177668);
        }
    }
    for(i = 0; i < 4; i++) {
        if ((D_8016E27C >> i) & 1) {
            pad = &D_80177668[i];
            // if any errors occurred or if no controllers are plugged in, treat the controller as if its not plugged in.
            if ((pad->errno != 0) || (status != 0)) {
                D_8016E300[i] = 0;;
            } else {
                D_8016E300[i] = 1;
                dir = 0;
                D_8016E33C[i] = pad->stick_x;
                D_8016E344[i] = pad->stick_y;
                if (D_8016E33C[i] >= 0x32) {
                    dir |= CONT_RIGHT;
                } else if (D_8016E33C[i] < -0x31) {
                    dir |= CONT_LEFT;
                }
                if (D_8016E344[i] >= 0x32) {
                    dir |= CONT_UP;
                } else if (D_8016E344[i] < -0x31) {
                    dir |= CONT_DOWN;
                }
                if (D_8016525C != 0) {
                    D_8016E310[i] = 0;
                    D_8016E350[i] = 0;
                } else if (D_80165284 == 1) {
                    D_8016E320[i] = D_8016E310[i];
                    D_8016E310[i] = pad->button;
                    D_8016E360[i] = D_8016E350[i];
                    D_8016E350[i] = dir;
                } else {
                    D_8016E310[i] |= pad->button;
                    D_8016E350[i] |= dir;
                }
            }
        }
    }
}

void func_8001E560(void) {
    u16 i;

    for(i = 0; i < 4; i++) {
        if (D_8016E300[i] != 0) {
            D_8016E330[i] = (D_8016E310[i] ^ D_8016E320[i]) & D_8016E310[i];
            D_8016E370[i] = (D_8016E350[i] ^ D_8016E360[i]) & D_8016E350[i];
            D_8016E280[i] = D_8016E300[i];
            D_8016E2A0[i] = D_8016E320[i];
            D_8016E290[i] = D_8016E310[i];
            D_8016E2B0[i] = D_8016E330[i];
            D_8016E2BC[i] = D_8016E33C[i];
            D_8016E2C4[i] = D_8016E344[i];
            D_8016E2E0[i] = D_8016E360[i];
            D_8016E2D0[i] = D_8016E350[i];
            D_8016E2F0[i] = D_8016E370[i];
        } else {
            D_8016E330[i] = 0;
            D_8016E370[i] = 0;
            D_8016E280[i] = 0;
            D_8016E2A0[i] = 0;
            D_8016E290[i] = 0;
            D_8016E2B0[i] = 0;
            D_8016E2BC[i] = 0;
            D_8016E2C4[i] = 0;
            D_8016E2E0[i] = 0;
            D_8016E2D0[i] = 0;
            D_8016E2F0[i] = 0;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001E80C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001E954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001E96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001E98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EA68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EB68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EBE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EC84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001ECA0.s")

void func_8001ECB8(void) {
    func_8001F9DC();
    D_8016E244 = 0;
    D_8016E084 = 0;
    D_8016E08C = 0;
    D_801765F4 = 0;
    D_80176602 = 0;
    func_8001EBE8();
    func_8001EC1C();
    func_8001EC50();
    func_8001EC84();
    // Set the View struct.
    gView.at.x = 0.0f;
    gView.at.y = 0.0f;
    gView.at.z = 0.0f;
    gView.eye.x = 0.0f;
    gView.eye.y = 0.0f;
    gView.eye.z = 1000.0f;
    gView.rot.x = 0.0f;
    gView.rot.y = 0.0f;
    gView.rot.z = 0.0f;
    gView.up.x = 0.0f;
    gView.up.y = 1.0f;
    gView.up.z = 0.0f;
    gView.dist = 1000.0f;
    gLightingSettings = D_8004A590;
    D_801775BC = 0;
    D_801775C4 = 0;
    D_801775CC = 0;
    D_801775D4 = 0;
    D_801775DC = 0;
    D_801775E4 = 0;
    D_801775EC = 0;
    D_8016E26C = 0x20;
    D_8016E274 = 0x20;
}

#pragma GLOBAL_ASM("asm/nonmatchings/boot/17930/func_8001EE64.s")
