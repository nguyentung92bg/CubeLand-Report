/* IL2CPP: Rotatelab.FX.ParticleImageController$$SetSpriteAndPreserveAspect
void Rotatelab_FX_ParticleImageController__SetSpriteAndPreserveAspect (Rotatelab_FX_ParticleImageController_o* __this, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.ParticleImageController$$SetSpriteAndPreserveAspect
   void Rotatelab_FX_ParticleImageController__SetSpriteAndPreserveAspect
   (Rotatelab_FX_ParticleImageController_o* __this, UnityEngine_Sprite_o* sprite, const MethodInfo*
   method); */

void Rotatelab_FX_ParticleImageController__SetSpriteAndPreserveAspect_1100424
               (int param_1,int param_2)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_150 [104];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  
  pcVar2 = (char *)(_UNK_0111065c + 0x1110444);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110660 + 0x1110458));
    *pcVar2 = '\x01';
  }
  FUN_00f88e5c(&uStack_b8,100);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(*(int *)(param_1 + 0x10),param_2,0);
  UnityEngine_Sprites_DataUtility__GetPadding_364622c(&fStack_d0,param_2,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = fStack_c8;
  fVar6 = fStack_c4;
  UnityEngine_Sprite__get_rect_35a2c6c(&fStack_d0,param_2,0);
  if (*(int *)(**(int **)(_UNK_01110664 + 0x11104dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar6 = fStack_c4 - (fStack_cc + fVar6);
  fVar7 = fStack_c8 - (fStack_d0 + fVar7);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  thunk_FUN_00f95db8(&uStack_b8,*(int *)(param_1 + 0x10) + 0xf0,100);
  uStack_b7 = fVar7 != fVar6;
  uVar4 = (uint)&uStack_b8 | 4;
  fVar1 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant_368fd70(uVar4,0);
  uStack_bc = 0;
  uStack_e8 = 0;
  uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_d0 = 0.0;
  uStack_c0 = 0;
  fVar5 = fVar7 / fVar6;
  if (1.0 < fVar7 / fVar6) {
    fVar5 = 1.0;
  }
  fStack_cc = (float)uStack_e4;
  fStack_c8 = (float)uStack_e0;
  fStack_c4 = (float)uStack_dc;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&fStack_d0,fVar5 * fVar1,0);
  uStack_9c = CONCAT44(fStack_cc,fStack_d0);
  uStack_94 = CONCAT44(fStack_c4,fStack_c8);
  uStack_8c = CONCAT44(uStack_bc,uStack_c0);
  thunk_FUN_00ec5080(&uStack_94,0);
  fVar1 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant_368fd70(uVar4,0);
  uStack_d4 = 0;
  uStack_d8 = 0;
  fVar5 = fVar6 / fVar7;
  if (1.0 < fVar6 / fVar7) {
    fVar5 = 1.0;
  }
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_e8,fVar5 * fVar1,0);
  uStack_84 = CONCAT44(uStack_e4,uStack_e8);
  uStack_7c = CONCAT44(uStack_dc,uStack_e0);
  uStack_74 = CONCAT44(uStack_d4,uStack_d8);
  thunk_FUN_00ec5080(&uStack_7c,0);
  iVar3 = *(int *)(param_1 + 0x10);
  thunk_FUN_00f95db8(auStack_150,&uStack_b8,100);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  thunk_FUN_00f95db8(iVar3 + 0xf0,auStack_150,100);
  thunk_FUN_00ec5080(iVar3 + 0xfc,0);
  return;
}

