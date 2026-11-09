/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect, UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t ratePerSecond, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect,
   UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t ratePerSecond, const MethodInfo*
   method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartHandler_1089470
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint in_fpscr;
  float fVar16;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar9 = (char *)(_UNK_01099a60 + 0x109949c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a64 + 0x10994b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a68 + 0x10994bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a6c + 0x10994c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a70 + 0x10994d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a74 + 0x10994e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a78 + 0x10994ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a7c + 0x10994f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a80 + 0x1099504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a84 + 0x1099510));
    *pcVar9 = '\x01';
  }
  iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099a88 + 0x1099524));
  System_Object___ctor_2bb93bc(iVar3,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar3 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar3 + 8),param_1);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(iVar3 + 0xc) = param_4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_74,iVar5,0);
  uVar2 = uStack_6c;
  uVar1 = uStack_70;
  uVar10 = uStack_74;
  pcVar9 = (char *)(_UNK_01099a8c + 0x10995b8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099a90 + 0x10995d8));
    *pcVar9 = '\x01';
  }
  puVar6 = *(undefined4 **)(**(int **)(_UNK_01099a94 + 0x10995f0) + 0x5c);
  uVar12 = *puVar6;
  uVar15 = puVar6[1];
  uVar14 = puVar6[2];
  uVar11 = puVar6[3];
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01099a98 + 0x1099618) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar4,uVar10,uVar1,uVar2,uVar12,uVar15,uVar14,uVar11,uVar7,
                     **(undefined4 **)(_UNK_01099a9c + 0x109963c));
  piVar13 = (int *)(iVar3 + 0x10);
  *piVar13 = iVar5;
  thunk_FUN_00ec5080(piVar13,iVar5);
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*piVar13 + 0x2fdc);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099aa0 + 0x1099694));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar4,iVar3,**(undefined4 **)(_UNK_01099aa4 + 0x10996b4),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar4,0);
  if (*(int *)(iVar3 + 0xc) != 5) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Object__get_name_36081bc(iVar5,0);
    iVar5 = System_String__op_Equality_2a0975c(uVar4,**(undefined4 **)(_UNK_01099aa8 + 0x109972c),0)
    ;
    if (iVar5 == 0) goto LAB_010997e0;
  }
  if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*piVar13,0);
  pcVar9 = (char *)(_UNK_01099aac + 0x1099764);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099ab0 + 0x1099778));
    *pcVar9 = '\x01';
  }
  iVar8 = *(int *)(**(int **)(_UNK_01099ab4 + 0x1099794) + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar5,*(float *)(iVar8 + 0xc) * _UNK_01099a58,*(float *)(iVar8 + 0x10) * _UNK_01099a58,
             *(float *)(iVar8 + 0x14) * _UNK_01099a58,0);
LAB_010997e0:
  iVar5 = *piVar13;
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
            (&uStack_74,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(ulonglong *)(iVar5 + 0x154) = CONCAT44(uStack_70,uStack_74);
  *(ulonglong *)(iVar5 + 0x15c) = CONCAT44(uStack_68,uStack_6c);
  *(undefined4 *)(iVar5 + 0x174) = uStack_54;
  *(undefined4 *)(iVar5 + 0x178) = uStack_50;
  *(undefined4 *)(iVar5 + 0x17c) = uStack_4c;
  *(undefined8 *)(iVar5 + 0x164) = uStack_64;
  *(undefined8 *)(iVar5 + 0x16c) = uStack_5c;
  thunk_FUN_00ec5080(iVar5 + 0x158,0);
  iVar5 = *piVar13;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar5 + 0x2ef8) = uVar4;
  AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(iVar5,param_3,0);
  iVar5 = *(int *)(iVar3 + 0x10);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),*(undefined4 *)(iVar3 + 0xc),
                     **(undefined4 **)(_UNK_01099ab8 + 0x10998d0));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = (undefined4 *)(iVar5 + 0x44c);
  *puVar6 = uVar4;
  thunk_FUN_00ec5080(puVar6,uVar4);
  iVar5 = *piVar13;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar5 + 0xe4) = 0;
  AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar5,0);
  iVar5 = *(int *)(iVar3 + 0x10);
  if (*(int *)(iVar3 + 0xc) == 4) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar5 + 0xe8);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099abc + 0x1099960));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar3,**(undefined4 **)(_UNK_01099ac0 + 0x1099980),0);
    DG_Tweening_DOVirtual__DelayedCall_11685c0(uVar10,uVar4,1,0);
    if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar3 + 0x10),0);
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar16 = *(float *)(*piVar13 + 0xe8);
    if (*(int *)(**(int **)(_UNK_01099ac4 + 0x10999d8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar16 = fVar16 + _UNK_01099a5c;
  }
  else {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
    if (*(int *)(**(int **)(_UNK_01099ac8 + 0x1099a24) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar16 = 3.0;
  }
  UnityEngine_Object__Destroy_36096ec(uVar4,fVar16,0);
  return;
}

