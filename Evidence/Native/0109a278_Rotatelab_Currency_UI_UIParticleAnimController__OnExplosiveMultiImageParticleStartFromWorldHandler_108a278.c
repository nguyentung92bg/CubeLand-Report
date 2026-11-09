/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnExplosiveMultiImageParticleStartFromWorldHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnExplosiveMultiImageParticleStartFromWorldHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t rateOverLifetime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController$$OnExplosiveMultiImageParticleStartFromWorldHandler
   void 
   Rotatelab_Currency_UI_UIParticleAnimController__OnExplosiveMultiImageParticleStartFromWorldHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos,
   UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t rateOverLifetime, const MethodInfo*
   method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnExplosiveMultiImageParticleStartFromWorldHandler_108a278
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  undefined4 uVar17;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [104];
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [28];
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar10 = (char *)(_UNK_0109adb0 + 0x109a2a0);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adb4 + 0x109a2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adb8 + 0x109a2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adbc + 0x109a2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adc0 + 0x109a2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adc4 + 0x109a2e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adc8 + 0x109a2f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adcc + 0x109a300));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109add0 + 0x109a30c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109add4 + 0x109a318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109add8 + 0x109a324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109addc + 0x109a330));
    *pcVar10 = '\x01';
  }
  uStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  FUN_00f88e5c(auStack_b8,100);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109ade0 + 0x109a364));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  *(undefined4 *)(iVar1 + 0xc) = param_6;
  iVar2 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToScreenPoint_35aea00(&uStack_150,iVar2,param_2,param_3,param_4,0);
  uVar9 = uStack_14c;
  uVar4 = uStack_150;
  if (*(int *)(**(int **)(_UNK_0109ade4 + 0x109a3d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(param_1,0);
  if (*(int *)(**(int **)(_UNK_0109ade8 + 0x109a410) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_39a69c8
            (uVar3,uVar4,uVar9,0,&uStack_50,0);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968(&uStack_150,iVar2,uStack_50,uStack_4c,0,0);
  uVar17 = uStack_148;
  uVar3 = uStack_14c;
  uVar9 = uStack_150;
  pcVar10 = (char *)(_UNK_0109adec + 0x109a4a4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109adf0 + 0x109a4c4));
    *pcVar10 = '\x01';
  }
  puVar5 = *(undefined4 **)(**(int **)(_UNK_0109adf4 + 0x109a4dc) + 0x5c);
  uVar12 = *puVar5;
  uVar14 = puVar5[1];
  uVar15 = puVar5[2];
  uVar11 = puVar5[3];
  uVar6 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_0109adf8 + 0x109a500) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar4,uVar9,uVar3,uVar17,uVar12,uVar14,uVar15,uVar11,uVar6,
                     **(undefined4 **)(_UNK_0109adfc + 0x109a524));
  piVar13 = (int *)(iVar1 + 0x10);
  *piVar13 = iVar2;
  thunk_FUN_00ec5080(piVar13,iVar2);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__TryGetComponent_object__14402fc
                    (*piVar13,&iStack_54,**(undefined4 **)(_UNK_0109ae00 + 0x109a578));
  if (iVar2 != 0) {
    if (iStack_54 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iStack_54 + 0x1c) = 0;
  }
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*piVar13 + 0x2fdc);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109ae04 + 0x109a5c0));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,iVar1,**(undefined4 **)(_UNK_0109ae08 + 0x109a5e0),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar2,uVar4,0);
  uVar7 = *(uint *)(iVar1 + 0xc);
  if (uVar7 == 5) {
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(*piVar13,0);
    pcVar10 = (char *)(_UNK_0109ae0c + 0x109a640);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109ae10 + 0x109a654));
      *pcVar10 = '\x01';
    }
    iVar8 = *(int *)(**(int **)(_UNK_0109ae14 + 0x109a670) + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(float *)(iVar8 + 0xc) * _UNK_0109aa20,
               *(float *)(iVar8 + 0x10) * _UNK_0109aa20,*(float *)(iVar8 + 0x14) * _UNK_0109aa20,0);
    uVar7 = *(uint *)(iVar1 + 0xc);
  }
  uVar4 = 0x3f800000;
  uVar9 = 0x3f800000;
  if ((uVar7 & 0xfffffffe) == 4) {
    uVar4 = 0x3f6bebec;
    uVar9 = 0x3c808081;
  }
  iVar2 = *piVar13;
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
            (&uStack_150,0x3f800000,uVar4,uVar9,0x3f800000,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 0x154) = uStack_150;
  *(undefined4 *)(iVar2 + 0x158) = uStack_14c;
  *(undefined4 *)(iVar2 + 0x15c) = uStack_148;
  *(undefined4 *)(iVar2 + 0x160) = uStack_144;
  *(undefined4 *)(iVar2 + 0x174) = uStack_130;
  *(undefined4 *)(iVar2 + 0x178) = uStack_12c;
  *(undefined4 *)(iVar2 + 0x17c) = uStack_128;
  *(undefined8 *)(iVar2 + 0x164) = uStack_140;
  *(undefined8 *)(iVar2 + 0x16c) = uStack_138;
  thunk_FUN_00ec5080(iVar2 + 0x158,0);
  iVar2 = *piVar13;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = 0;
  uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(iVar2 + 0xe8) = 0x3dcccccd;
  uStack_bc = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_cc = uVar9;
  uStack_c8 = uVar3;
  uStack_c4 = uVar17;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fce0(&uStack_d0,0x3f000000,0x3f800000,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(ulonglong *)(iVar2 + 0x180) = CONCAT44(uStack_cc,uStack_d0);
  *(ulonglong *)(iVar2 + 0x188) = CONCAT44(uStack_c4,uStack_c8);
  *(undefined4 *)(iVar2 + 0x194) = uStack_bc;
  *(undefined4 *)(iVar2 + 400) = uStack_c0;
  thunk_FUN_00ec5080(iVar2 + 0x188,0);
  iVar2 = *piVar13;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e8 = uVar4;
  uStack_e4 = uVar9;
  uStack_e0 = uVar3;
  uStack_dc = uVar17;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fce0(&uStack_e8,0x3f800000,0x40400000,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(ulonglong *)(iVar2 + 0x198) = CONCAT44(uStack_e4,uStack_e8);
  *(ulonglong *)(iVar2 + 0x1a0) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined4 *)(iVar2 + 0x1ac) = uStack_d4;
  *(undefined4 *)(iVar2 + 0x1a8) = uStack_d8;
  thunk_FUN_00ec5080(iVar2 + 0x1a0,0);
  iVar2 = *piVar13;
  FUN_00f88e5c(&uStack_150,100);
  AssetKits_ParticleImage_SeparatedMinMaxCurve___ctor_2cda638(&uStack_150,0x42200000,0,1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  thunk_FUN_00f95db8(iVar2 + 0xf0,&uStack_150,100);
  thunk_FUN_00ec5080(iVar2 + 0xfc,0);
  iVar2 = *piVar13;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 0xb8) = 1;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  *(undefined1 *)(iVar2 + 0xdd) = 1;
  *(undefined4 *)(iVar2 + 200) = 0x42480000;
  AssetKits_ParticleImage_ParticleImage__set_fitRect_2ccea00(iVar2,0,0);
  iVar2 = *piVar13;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar2 + 0x2efc) = uVar4;
  *(undefined4 *)(iVar2 + 0x2ef8) = 0;
  AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(iVar2,param_5,0);
  iVar2 = *piVar13;
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
            (&uStack_180,*(undefined4 *)(param_1 + 0x20),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 0x1b0) = uStack_180;
  *(undefined4 *)(iVar2 + 0x1b4) = uStack_17c;
  *(undefined4 *)(iVar2 + 0x1b8) = uStack_178;
  *(undefined4 *)(iVar2 + 0x1bc) = uStack_174;
  *(undefined4 *)(iVar2 + 0x1d0) = uStack_160;
  *(undefined4 *)(iVar2 + 0x1d4) = uStack_15c;
  *(undefined4 *)(iVar2 + 0x1d8) = uStack_158;
  *(ulonglong *)(iVar2 + 0x1c0) = CONCAT44(uStack_16c,uStack_170);
  *(undefined8 *)(iVar2 + 0x1c8) = uStack_168;
  thunk_FUN_00ec5080(iVar2 + 0x1b4,0);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__set_attractorEnabled_2ccf278(*piVar13,0,0);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__set_noiseEnabled_2ccf2f4(*piVar13,0,0);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__set_velocityEnabled_2ccf30c(*piVar13,1,0);
  iVar2 = *piVar13;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 0x470) = 1;
  thunk_FUN_00f95db8(auStack_b8,iVar2 + 0x474,100);
  uVar4 = 0;
  uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar3 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_180 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_17c = uVar9;
  uStack_178 = uVar3;
  uStack_174 = uVar17;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_180,0,0);
  uStack_9c = CONCAT44(uStack_17c,uStack_180);
  uStack_94 = CONCAT44(uStack_174,uStack_178);
  uStack_8c = CONCAT44(uStack_16c,uStack_170);
  thunk_FUN_00ec5080(&uStack_94,0);
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_198 = uVar4;
  uStack_194 = uVar9;
  uStack_190 = uVar3;
  uStack_18c = uVar17;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_198,0xbf800000,0);
  uStack_84 = CONCAT44(uStack_194,uStack_198);
  uStack_7c = CONCAT44(uStack_18c,uStack_190);
  uStack_74 = CONCAT44(uStack_184,uStack_188);
  thunk_FUN_00ec5080(&uStack_7c,0);
  uStack_19c = 0;
  uStack_1a0 = 0;
  uStack_1b0 = uVar4;
  uStack_1ac = uVar9;
  uStack_1a8 = uVar3;
  uStack_1a4 = uVar17;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_1b0,0,0);
  uStack_6c = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_64 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_5c = CONCAT44(uStack_19c,uStack_1a0);
  thunk_FUN_00ec5080(&uStack_64,0);
  iVar2 = *piVar13;
  thunk_FUN_00f95db8(auStack_218,auStack_b8,100);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  thunk_FUN_00f95db8(iVar2 + 0x474,auStack_218,100);
  thunk_FUN_00ec5080(iVar2 + 0x480,0);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  AssetKits_ParticleImage_ParticleImage__set_gravityEnabled_2ccf2fc(*piVar13,1,0);
  iVar2 = *piVar13;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_230,0x41a00000,0);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x430) = uStack_230;
    *(undefined4 *)(iVar2 + 0x434) = uStack_22c;
    *(undefined4 *)(iVar2 + 0x438) = uStack_228;
    *(undefined4 *)(iVar2 + 0x43c) = uStack_224;
    *(undefined4 *)(iVar2 + 0x440) = uStack_220;
    *(undefined4 *)(iVar2 + 0x444) = uStack_21c;
    thunk_FUN_00ec5080(iVar2 + 0x438,0);
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    AssetKits_ParticleImage_ParticleImage__set_vortexEnabled_2ccf304(*piVar13,0,0);
    iVar2 = *piVar13;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar2 + 0xe4) = 0;
    AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar2,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0109ae18 + 0x109ac4c));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_108dbe8(iVar2,0x18,0x3f800000);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (*(int *)(iVar1 + 0xc) == 4) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = *(undefined4 *)(iVar2 + 0xe8);
      uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109ae1c + 0x109ac94));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar4,iVar1,**(undefined4 **)(_UNK_0109ae20 + 0x109acb4),0);
      DG_Tweening_DOVirtual__DelayedCall_11685c0(uVar9,uVar4,1,0);
      if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar1 + 0x10),0);
      if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar16 = *(float *)(*piVar13 + 0xe8);
      if (*(int *)(**(int **)(_UNK_0109ae24 + 0x109ad0c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar16 = fVar16 + _UNK_0109adac;
    }
    else {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
      if (*(int *)(**(int **)(_UNK_0109ae28 + 0x109ad58) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar16 = 3.0;
    }
    UnityEngine_Object__Destroy_36096ec(uVar4,fVar16,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

