#define INTERNAL_SRC_CODE_Z_PRENMI_C
#include "global.h"
#include "z_prenmi_buff.h"
#include "vt.h"
#include "def/z_prenmi.h"
#include "def/z_rcp.h"
#include "def/graph.h" // FORCE

void func_80092320(PreNMIContext* this) {
    this->state.running = false;
    this->state.init = NULL;
    this->state.size = 0;
}

void PreNMI_Update(PreNMIContext* this) {
    osSyncPrintf(VT_COL(YELLOW, BLACK) "prenmi_move\n" VT_RST);

    // Strings existing only in rodata
    if (0) {
        osSyncPrintf("../z_prenmi.c");
        osSyncPrintf("(int)volume = %d\n");
    }

    if (this->timer == 0) {
        func_80092320(this);
        return;
    }

    this->timer--;
}

void PreNMI_Draw(PreNMIContext* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;

    osSyncPrintf(VT_COL(YELLOW, BLACK) "prenmi_draw\n" VT_RST);

    OPEN_DISPS(gfxCtx, "../z_prenmi.c", 96);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    func_80095248(gfxCtx, 0, 0, 0);
    func_800940B0(gfxCtx);
    gDPSetFillColor(POLY_OPA_DISP++, (GPACK_RGBA5551(255, 255, 255, 1) << 16) | GPACK_RGBA5551(255, 255, 255, 1));
    gDPFillRectangle(POLY_OPA_DISP++, 0, this->timer + 100, SCREEN_WIDTH - 1, this->timer + 100);

    CLOSE_DISPS(gfxCtx, "../z_prenmi.c", 112);
}

void PreNMI_Main(GameState* thisx) {
    PreNMIContext* this = (PreNMIContext*)thisx;

    PreNMI_Update(this);
    PreNMI_Draw(this);

    this->state.unk_A0 = 1;
}

void PreNMI_Destroy(GameState* thisx) {
}

void PreNMI_Init(GameState* thisx) {
    PreNMIContext* this = (PreNMIContext*)thisx;

    this->state.main = PreNMI_Main;
    this->state.destroy = PreNMI_Destroy;
    this->timer = 30;
    this->unk_A8 = 10;

    R_UPDATE_RATE = 1;
}
