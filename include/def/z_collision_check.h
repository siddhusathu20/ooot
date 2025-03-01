#pragma once
#ifdef INTERNAL_SRC_CODE_Z_COLLISION_CHECK_C
s32 Collider_DestroyCylinder(GlobalContext* globalCtx, ColliderCylinder* collider);
s32 Collider_DestroyJntSph(GlobalContext* globalCtx, ColliderJntSph* collider);
s32 Collider_DestroyLine(GlobalContext* globalCtx, OcLine* line);
s32 Collider_DestroyQuad(GlobalContext* globalCtx, ColliderQuad* collider);
s32 Collider_DestroyTris(GlobalContext* globalCtx, ColliderTris* tris);
void Collider_Draw(GlobalContext* globalCtx, Collider* collider);
void Collider_DrawPoly(GraphicsContext* gfxCtx, Vec3f* vA, Vec3f* vB, Vec3f* vC, u8 r, u8 g, u8 b);
void Collider_DrawRedPoly(GraphicsContext* gfxCtx, Vec3f* vA, Vec3f* vB, Vec3f* vC);
s32 Collider_FreeJntSph(GlobalContext* globalCtx, ColliderJntSph* collider);
s32 Collider_FreeTris(GlobalContext* globalCtx, ColliderTris* tris);
s32 Collider_InitCylinder(GlobalContext* globalCtx, ColliderCylinder* collider);
s32 Collider_InitJntSph(GlobalContext* globalCtx, ColliderJntSph* collider);
s32 Collider_InitLine(GlobalContext* globalCtx, OcLine* line);
s32 Collider_InitQuad(GlobalContext* globalCtx, ColliderQuad* collider);
s32 Collider_InitTris(GlobalContext* globalCtx, ColliderTris* tris);
s32 Collider_ResetCylinderAC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetCylinderAT(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetCylinderOC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetJntSphAC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetJntSphAT(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetJntSphOC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetLineOC(GlobalContext* globalCtx, OcLine* line);
s32 Collider_ResetQuadAC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetQuadAT(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetQuadOC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetTrisAC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetTrisAT(GlobalContext* globalCtx, Collider* collider);
s32 Collider_ResetTrisOC(GlobalContext* globalCtx, Collider* collider);
s32 Collider_SetCylinder(GlobalContext* globalCtx, ColliderCylinder* collider, Actor* actor, ColliderCylinderInit* src);
void Collider_SetCylinderPosition(ColliderCylinder* collider, Vec3s* pos);
s32 Collider_SetCylinderToActor(GlobalContext* globalCtx, ColliderCylinder* collider, ColliderCylinderInitToActor* src);
s32 Collider_SetCylinderType1(GlobalContext* globalCtx, ColliderCylinder* collider, Actor* actor, ColliderCylinderInitType1* src);
s32 Collider_SetJntSph(GlobalContext* globalCtx, ColliderJntSph* dest, Actor* actor, ColliderJntSphInit* src, ColliderJntSphElement* elements);
s32 Collider_SetJntSphAlloc(GlobalContext* globalCtx, ColliderJntSph* dest, Actor* actor, ColliderJntSphInit* src);
s32 Collider_SetJntSphAllocType1(GlobalContext* globalCtx, ColliderJntSph* dest, Actor* actor, ColliderJntSphInitType1* src);
s32 Collider_SetJntSphToActor(GlobalContext* globalCtx, ColliderJntSph* dest, ColliderJntSphInitToActor* src);
s32 Collider_SetLine(GlobalContext* globalCtx, OcLine* dest, OcLine* src);
s32 Collider_SetLinePoints(GlobalContext* globalCtx, OcLine* ocLine, Vec3f* a, Vec3f* b);
s32 Collider_SetQuad(GlobalContext* globalCtx, ColliderQuad* collider, Actor* actor, ColliderQuadInit* src);
s32 Collider_SetQuadType1(GlobalContext* globalCtx, ColliderQuad* collider, Actor* actor, ColliderQuadInitType1* src);
void Collider_SetQuadVertices(ColliderQuad* collider, Vec3f* a, Vec3f* b, Vec3f* c, Vec3f* d);
s32 Collider_SetTris(GlobalContext* globalCtx, ColliderTris* dest, Actor* actor, ColliderTrisInit* src, ColliderTrisElement* elements);
s32 Collider_SetTrisAlloc(GlobalContext* globalCtx, ColliderTris* dest, Actor* actor, ColliderTrisInit* src);
s32 Collider_SetTrisAllocType1(GlobalContext* globalCtx, ColliderTris* dest, Actor* actor, ColliderTrisInitType1* src);
void Collider_SetTrisDim(GlobalContext* globalCtx, ColliderTris* collider, s32 index, ColliderTrisElementDimInit* init);
void Collider_SetTrisVertices(ColliderTris* collider, s32 index, Vec3f* a, Vec3f* b, Vec3f* c);
void Collider_UpdateCylinder(Actor* actor, ColliderCylinder* collider);
void Collider_UpdateSpheres(s32 limb, ColliderJntSph* collider);
void CollisionCheck_AT(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_BlueBlood(GlobalContext* globalCtx, Collider* collider, Vec3f* v);
void CollisionCheck_ClearContext(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
s32 CollisionCheck_CylSideVsLineSeg(f32 radius, f32 height, f32 offset, Vec3f* actorPos, Vec3f* itemPos, Vec3f* itemProjPos, Vec3f* out1, Vec3f* out2);
void CollisionCheck_Damage(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_DestroyContext(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_DisableSAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_DrawCollision(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_EnableSAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
u8 CollisionCheck_GetSwordDamage(s32 dmgFlags);
void CollisionCheck_InitContext(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_InitInfo(CollisionCheckInfo* info);
s32 CollisionCheck_LineOCCheck(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Vec3f* a, Vec3f* b, Actor** exclusions, s32 numExclusions);
s32 CollisionCheck_LineOCCheckAll(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Vec3f* a, Vec3f* b);
void CollisionCheck_OC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx);
void CollisionCheck_ResetDamage(CollisionCheckInfo* info);
s32 CollisionCheck_SetAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_SetAC_SAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);
s32 CollisionCheck_SetAT(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_SetAT_SAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);
void CollisionCheck_SetInfo(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit* init);
void CollisionCheck_SetInfo2(CollisionCheckInfo* info, DamageTable* damageTable, CollisionCheckInfoInit2* init);
void CollisionCheck_SetInfoGetDamageTable(CollisionCheckInfo* info, s32 index, CollisionCheckInfoInit2* init);
void CollisionCheck_SetInfoNoDamageTable(CollisionCheckInfo* info, CollisionCheckInfoInit* init);
s32 CollisionCheck_SetOC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_SetOCLine(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, OcLine* collider);
s32 CollisionCheck_SetOC_SAC(GlobalContext* globalCtx, CollisionCheckContext* colChkCtx, Collider* collider, s32 index);
void CollisionCheck_SpawnRedBlood(GlobalContext* globalCtx, Vec3f* v);
void CollisionCheck_SpawnShieldParticles(GlobalContext* globalCtx, Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetal(GlobalContext* globalCtx, Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetal2(GlobalContext* globalCtx, Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetalSound(GlobalContext* globalCtx, Vec3f* v, Vec3f* actorPos);
void CollisionCheck_SpawnShieldParticlesWood(GlobalContext* globalCtx, Vec3f* b, Vec3f* actorPos);
void CollisionCheck_SpawnWaterDroplets(GlobalContext* globalCtx, Vec3f* v);
#else
s32 Collider_DestroyCylinder(struct GlobalContext* globalCtx, struct ColliderCylinder* collider);
s32 Collider_DestroyJntSph(struct GlobalContext* globalCtx, struct ColliderJntSph* collider);
s32 Collider_DestroyLine(struct GlobalContext* globalCtx, struct OcLine* line);
s32 Collider_DestroyQuad(struct GlobalContext* globalCtx, struct ColliderQuad* collider);
s32 Collider_DestroyTris(struct GlobalContext* globalCtx, struct ColliderTris* tris);
void Collider_Draw(struct GlobalContext* globalCtx, struct Collider* collider);
void Collider_DrawPoly(struct GraphicsContext* gfxCtx, struct Vec3f* vA, struct Vec3f* vB, struct Vec3f* vC, u8 r, u8 g, u8 b);
void Collider_DrawRedPoly(struct GraphicsContext* gfxCtx, struct Vec3f* vA, struct Vec3f* vB, struct Vec3f* vC);
s32 Collider_FreeJntSph(struct GlobalContext* globalCtx, struct ColliderJntSph* collider);
s32 Collider_FreeTris(struct GlobalContext* globalCtx, struct ColliderTris* tris);
s32 Collider_InitCylinder(struct GlobalContext* globalCtx, struct ColliderCylinder* collider);
s32 Collider_InitJntSph(struct GlobalContext* globalCtx, struct ColliderJntSph* collider);
s32 Collider_InitLine(struct GlobalContext* globalCtx, struct OcLine* line);
s32 Collider_InitQuad(struct GlobalContext* globalCtx, struct ColliderQuad* collider);
s32 Collider_InitTris(struct GlobalContext* globalCtx, struct ColliderTris* tris);
s32 Collider_ResetCylinderAC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetCylinderAT(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetCylinderOC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetJntSphAC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetJntSphAT(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetJntSphOC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetLineOC(struct GlobalContext* globalCtx, struct OcLine* line);
s32 Collider_ResetQuadAC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetQuadAT(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetQuadOC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetTrisAC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetTrisAT(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_ResetTrisOC(struct GlobalContext* globalCtx, struct Collider* collider);
s32 Collider_SetCylinder(struct GlobalContext* globalCtx, struct ColliderCylinder* collider, struct Actor* actor, struct ColliderCylinderInit* src);
void Collider_SetCylinderPosition(struct ColliderCylinder* collider, struct Vec3s* pos);
s32 Collider_SetCylinderToActor(struct GlobalContext* globalCtx, struct ColliderCylinder* collider, struct ColliderCylinderInitToActor* src);
s32 Collider_SetCylinderType1(struct GlobalContext* globalCtx, struct ColliderCylinder* collider, struct Actor* actor, struct ColliderCylinderInitType1* src);
s32 Collider_SetJntSph(struct GlobalContext* globalCtx, struct ColliderJntSph* dest, struct Actor* actor, struct ColliderJntSphInit* src, struct ColliderJntSphElement* elements);
s32 Collider_SetJntSphAlloc(struct GlobalContext* globalCtx, struct ColliderJntSph* dest, struct Actor* actor, struct ColliderJntSphInit* src);
s32 Collider_SetJntSphAllocType1(struct GlobalContext* globalCtx, struct ColliderJntSph* dest, struct Actor* actor, struct ColliderJntSphInitType1* src);
s32 Collider_SetJntSphToActor(struct GlobalContext* globalCtx, struct ColliderJntSph* dest, struct ColliderJntSphInitToActor* src);
s32 Collider_SetLine(struct GlobalContext* globalCtx, struct OcLine* dest, struct OcLine* src);
s32 Collider_SetLinePoints(struct GlobalContext* globalCtx, struct OcLine* ocLine, struct Vec3f* a, struct Vec3f* b);
s32 Collider_SetQuad(struct GlobalContext* globalCtx, struct ColliderQuad* collider, struct Actor* actor, struct ColliderQuadInit* src);
s32 Collider_SetQuadType1(struct GlobalContext* globalCtx, struct ColliderQuad* collider, struct Actor* actor, struct ColliderQuadInitType1* src);
void Collider_SetQuadVertices(struct ColliderQuad* collider, struct Vec3f* a, struct Vec3f* b, struct Vec3f* c, struct Vec3f* d);
s32 Collider_SetTris(struct GlobalContext* globalCtx, struct ColliderTris* dest, struct Actor* actor, struct ColliderTrisInit* src, struct ColliderTrisElement* elements);
s32 Collider_SetTrisAlloc(struct GlobalContext* globalCtx, struct ColliderTris* dest, struct Actor* actor, struct ColliderTrisInit* src);
s32 Collider_SetTrisAllocType1(struct GlobalContext* globalCtx, struct ColliderTris* dest, struct Actor* actor, struct ColliderTrisInitType1* src);
void Collider_SetTrisDim(struct GlobalContext* globalCtx, struct ColliderTris* collider, s32 index, struct ColliderTrisElementDimInit* init);
void Collider_SetTrisVertices(struct ColliderTris* collider, s32 index, struct Vec3f* a, struct Vec3f* b, struct Vec3f* c);
void Collider_UpdateCylinder(struct Actor* actor, struct ColliderCylinder* collider);
void Collider_UpdateSpheres(s32 limb, struct ColliderJntSph* collider);
void CollisionCheck_AT(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_BlueBlood(struct GlobalContext* globalCtx, struct Collider* collider, struct Vec3f* v);
void CollisionCheck_ClearContext(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
s32 CollisionCheck_CylSideVsLineSeg(f32 radius, f32 height, f32 offset, struct Vec3f* actorPos, struct Vec3f* itemPos, struct Vec3f* itemProjPos, struct Vec3f* out1, struct Vec3f* out2);
void CollisionCheck_Damage(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_DestroyContext(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_DisableSAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_DrawCollision(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_EnableSAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
u8 CollisionCheck_GetSwordDamage(s32 dmgFlags);
void CollisionCheck_InitContext(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_InitInfo(struct CollisionCheckInfo* info);
s32 CollisionCheck_LineOCCheck(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Vec3f* a, struct Vec3f* b, struct Actor** exclusions, s32 numExclusions);
s32 CollisionCheck_LineOCCheckAll(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Vec3f* a, struct Vec3f* b);
void CollisionCheck_OC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx);
void CollisionCheck_ResetDamage(struct CollisionCheckInfo* info);
s32 CollisionCheck_SetAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider);
s32 CollisionCheck_SetAC_SAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider, s32 index);
s32 CollisionCheck_SetAT(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider);
s32 CollisionCheck_SetAT_SAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider, s32 index);
void CollisionCheck_SetInfo(struct CollisionCheckInfo* info, struct DamageTable* damageTable, struct CollisionCheckInfoInit* init);
void CollisionCheck_SetInfo2(struct CollisionCheckInfo* info, struct DamageTable* damageTable, struct CollisionCheckInfoInit2* init);
void CollisionCheck_SetInfoGetDamageTable(struct CollisionCheckInfo* info, s32 index, struct CollisionCheckInfoInit2* init);
void CollisionCheck_SetInfoNoDamageTable(struct CollisionCheckInfo* info, struct CollisionCheckInfoInit* init);
s32 CollisionCheck_SetOC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider);
s32 CollisionCheck_SetOCLine(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct OcLine* collider);
s32 CollisionCheck_SetOC_SAC(struct GlobalContext* globalCtx, struct CollisionCheckContext* colChkCtx, struct Collider* collider, s32 index);
void CollisionCheck_SpawnRedBlood(struct GlobalContext* globalCtx, struct Vec3f* v);
void CollisionCheck_SpawnShieldParticles(struct GlobalContext* globalCtx, struct Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetal(struct GlobalContext* globalCtx, struct Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetal2(struct GlobalContext* globalCtx, struct Vec3f* v);
void CollisionCheck_SpawnShieldParticlesMetalSound(struct GlobalContext* globalCtx, struct Vec3f* v, struct Vec3f* actorPos);
void CollisionCheck_SpawnShieldParticlesWood(struct GlobalContext* globalCtx, struct Vec3f* b, struct Vec3f* actorPos);
void CollisionCheck_SpawnWaterDroplets(struct GlobalContext* globalCtx, struct Vec3f* v);
#endif
