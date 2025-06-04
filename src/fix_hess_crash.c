#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"

RECOMP_HOOK("Player_DrawImpl") void hess_crash_fix_hook(PlayState* play, void** skeleton, Vec3s* jointTable, s32 dListCount, s32 lod,
                     PlayerTransformation playerForm, s32 boots, s32 face, OverrideLimbDrawFlex overrideLimbDraw,
                     PostLimbDrawFlex postLimbDraw, Actor* actor) {
    if (((jointTable[0x16].x & 0xF00) >> 8) >= 3) {
        jointTable[0x16].x &= ~0xF00;
    }
}
