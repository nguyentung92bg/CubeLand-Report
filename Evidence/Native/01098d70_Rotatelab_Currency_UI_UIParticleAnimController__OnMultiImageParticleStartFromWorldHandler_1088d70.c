/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartFromWorldHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartFromWorldHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t ratePerSecond, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartFromWorldHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartFromWorldHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos,
   UnityEngine_Sprite_o* sprite, int32_t targetPos, int32_t ratePerSecond, const MethodInfo*
   method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartFromWorldHandler_1088d70
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  uint in_fpscr;
  float fVar17;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar11 = (char *)(_UNK_010993f4 + 0x1098d98);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010993f8 + 0x1098db0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010993fc + 0x1098dbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099400 + 0x1098dc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099404 + 0x1098dd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099408 + 0x1098de0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109940c + 0x1098dec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099410 + 0x1098df8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099414 + 0x1098e04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099418 + 0x1098e10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109941c + 0x1098e1c));
    *pcVar11 = '\x01';
  }
  uStack_4c = 0;
  uStack_50 = 0;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099420 + 0x1098e38));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar2 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar2 + 8),param_1);
  *(undefined4 *)(iVar2 + 0xc) = param_6;
  iVar3 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToScreenPoint_35aea00(&uStack_7c,iVar3,param_2,param_3,param_4,0);
  uVar10 = uStack_78;
  uVar5 = uStack_7c;
  if (*(int *)(**(int **)(_UNK_01099424 + 0x1098eb4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__RectTransform_fc1bd0(param_1,0);
  if (*(int *)(**(int **)(_UNK_01099428 + 0x1098eec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_39a69c8
            (uVar4,uVar5,uVar10,0,&uStack_50,0);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968(&uStack_7c,iVar3,uStack_50,uStack_4c,0,0);
  uVar1 = uStack_74;
  uVar4 = uStack_78;
  uVar10 = uStack_7c;
  pcVar11 = (char *)(_UNK_0109942c + 0x1098f80);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01099430 + 0x1098fa0));
    *pcVar11 = '\x01';
  }
  puVar6 = *(undefined4 **)(**(int **)(_UNK_01099434 + 0x1098fb8) + 0x5c);
  uVar13 = *puVar6;
  uVar14 = puVar6[1];
  uVar15 = puVar6[2];
  uVar12 = puVar6[3];
  uVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01099438 + 0x1098fdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar5,uVar10,uVar4,uVar1,uVar13,uVar14,uVar15,uVar12,uVar7,
                     **(undefined4 **)(_UNK_0109943c + 0x1099000));
  piVar16 = (int *)(iVar2 + 0x10);
  *piVar16 = iVar3;
  thunk_FUN_00ec5080(piVar16,iVar3);
  if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*piVar16 + 0x2fdc);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099440 + 0x1099054));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar5,iVar2,**(undefined4 **)(_UNK_01099444 + 0x1099074),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar5,0);
  uVar8 = *(uint *)(iVar2 + 0xc);
  if (uVar8 == 5) {
    if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(*piVar16,0);
    pcVar11 = (char *)(_UNK_01099448 + 0x10990d4);
    if (*pcVar11 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109944c + 0x10990e8));
      *pcVar11 = '\x01';
    }
    iVar9 = *(int *)(**(int **)(_UNK_01099450 + 0x1099104) + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,*(float *)(iVar9 + 0xc) * _UNK_010993ec,
               *(float *)(iVar9 + 0x10) * _UNK_010993ec,*(float *)(iVar9 + 0x14) * _UNK_010993ec,0);
    uVar8 = *(uint *)(iVar2 + 0xc);
  }
  uVar5 = 0x3f800000;
  uVar10 = 0x3f800000;
  if ((uVar8 & 0xfffffffe) == 4) {
    uVar5 = 0x3f6bebec;
    uVar10 = 0x3c808081;
  }
  iVar3 = *piVar16;
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
            (&uStack_7c,0x3f800000,uVar5,uVar10,0x3f800000,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(ulonglong *)(iVar3 + 0x154) = CONCAT44(uStack_78,uStack_7c);
  *(ulonglong *)(iVar3 + 0x15c) = CONCAT44(uStack_70,uStack_74);
  *(undefined4 *)(iVar3 + 0x174) = uStack_5c;
  *(undefined4 *)(iVar3 + 0x178) = uStack_58;
  *(undefined4 *)(iVar3 + 0x17c) = uStack_54;
  *(undefined8 *)(iVar3 + 0x164) = uStack_6c;
  *(undefined8 *)(iVar3 + 0x16c) = uStack_64;
  thunk_FUN_00ec5080(iVar3 + 0x158,0);
  iVar3 = *piVar16;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar3 + 0x2ef8) = uVar5;
  AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(iVar3,param_5,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x10),*(undefined4 *)(iVar2 + 0xc),
                       **(undefined4 **)(_UNK_01099454 + 0x1099264));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar6 = (undefined4 *)(iVar3 + 0x44c);
    *puVar6 = uVar5;
    thunk_FUN_00ec5080(puVar6,uVar5);
    iVar3 = *piVar16;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar3 + 0xe4) = 0;
    AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar3,0);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (*(int *)(iVar2 + 0xc) == 4) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = *(undefined4 *)(iVar3 + 0xe8);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01099458 + 0x10992f4));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar5,iVar2,**(undefined4 **)(_UNK_0109945c + 0x1099314),0);
      DG_Tweening_DOVirtual__DelayedCall_11685c0(uVar10,uVar5,1,0);
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar2 + 0x10),0);
      if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar17 = *(float *)(*piVar16 + 0xe8);
      if (*(int *)(**(int **)(_UNK_01099460 + 0x109936c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar17 = fVar17 + _UNK_010993f0;
    }
    else {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
      if (*(int *)(**(int **)(_UNK_01099464 + 0x10993b8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      fVar17 = 3.0;
    }
    UnityEngine_Object__Destroy_36096ec(uVar5,fVar17,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

