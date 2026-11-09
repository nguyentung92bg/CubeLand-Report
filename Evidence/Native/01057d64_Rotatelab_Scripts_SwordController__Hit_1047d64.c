/* IL2CPP: Rotatelab.Scripts.SwordController$$Hit
void Rotatelab_Scripts_SwordController__Hit (Rotatelab_Scripts_SwordController_o* __this, Rotatelab_Scripts_ShieldController_o* shield, UnityEngine_Transform_o* targetPoint, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SwordController$$Hit
   void Rotatelab_Scripts_SwordController__Hit (Rotatelab_Scripts_SwordController_o* __this,
   Rotatelab_Scripts_ShieldController_o* shield, UnityEngine_Transform_o* targetPoint, const
   MethodInfo* method); */

void Rotatelab_Scripts_SwordController__Hit_1047d64(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  float fVar15;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  pcVar11 = (char *)(_UNK_0105835c + 0x1057d8c);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058360 + 0x1057da0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058364 + 0x1057dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058368 + 0x1057db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105836c + 0x1057dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058370 + 0x1057dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058374 + 0x1057ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058378 + 0x1057de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105837c + 0x1057df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058380 + 0x1057e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058384 + 0x1057e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058388 + 0x1057e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105838c + 0x1057e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01058390 + 0x1057e30));
    *pcVar11 = '\x01';
  }
  fStack_64 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_60 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_68 = 0.0;
  iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01058394 + 0x1057e4c));
  System_Object___ctor_2bb93bc(iVar6,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar6 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar6 + 8),param_1);
  piVar12 = (int *)(iVar6 + 0xc);
  *piVar12 = param_2;
  thunk_FUN_00ec5080(piVar12,param_2);
  pcVar11 = (char *)(_UNK_01058398 + 0x1057e9c);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105839c + 0x1057eb0));
    *pcVar11 = '\x01';
  }
  iVar7 = *(int *)(**(int **)(_UNK_010583a0 + 0x1057ec4) + 0x5c);
  Rotatelab_Scripts_UtilityPlaceableController__Scale_104e45c
            (param_1,*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 0x10),
             *(undefined4 *)(iVar7 + 0x14));
  uVar10 = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(**(int **)(_UNK_010583a4 + 0x1057ee4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Inequality_36018e4(uVar10,0,0);
  if (iVar7 != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_BaseDockController__Empty_100b530(*(int *)(param_1 + 0x44),param_1,0);
  }
  Rotatelab_Scripts_UtilityPlaceableController__StopRotationTween_104d840(param_1);
  iVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_parent_36156e4(iVar7,param_3,0);
  iVar7 = *piVar12;
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + -1;
  Rotatelab_Scripts_ShieldController__UpdateHealthText_105084c(iVar7);
  if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(bool *)(iVar6 + 0x10) = *(int *)(*piVar12 + 0x2c) == 0;
  uVar10 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar8 = UnityEngine_LayerMask__NameToLayer_3602cd0(**(undefined4 **)(_UNK_010583a8 + 0x1057fc8),0)
  ;
  if (*(int *)(**(int **)(_UNK_010583ac + 0x1057fdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetLayerRecursively_fc284c(uVar10,uVar8,0);
  Rotatelab_Scripts_SwordController__UpdateAnimationState_1046960(param_1,3,0);
  iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010583b0 + 0x1058018));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar7,param_1);
  iVar7 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_78,iVar7,0);
  fVar4 = fStack_70;
  fVar2 = fStack_74;
  fVar15 = fStack_78;
  if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&fStack_78,*(int *)(param_1 + 0x70),0);
  fVar5 = fStack_70;
  fVar3 = fStack_74;
  fVar1 = fStack_78;
  PrimeTween_Sequence__Create_2cef1e0(&fStack_78,1,0,1,0,0,0);
  fStack_68 = fStack_78;
  fStack_64 = fStack_74;
  fStack_60 = fStack_70;
  uStack_5c = uStack_6c;
  Rotatelab_Scripts_BasePlaceableController__MoveToTransform_103089c
            (&fStack_88,param_1,param_3,*(undefined4 *)(param_1 + 0x68),fVar15 - fVar1,fVar2 - fVar3
             ,fVar4 - fVar5,9,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_88,&fStack_68,fStack_88,uStack_84,uStack_80,uStack_7c,0);
  fVar15 = *(float *)(param_1 + 0x68);
  puVar13 = *(undefined4 **)(_UNK_010583b4 + 0x105813c);
  fStack_68 = fStack_88;
  fStack_64 = (float)uStack_84;
  fStack_60 = (float)uStack_80;
  uStack_5c = uStack_7c;
  uVar10 = thunk_FUN_00f00cdc(*puVar13);
  System_Action___ctor_2b10bac(uVar10,iVar6,**(undefined4 **)(_UNK_010583b8 + 0x105815c),0);
  PrimeTween_Sequence__InsertCallback_2cf01e0(&fStack_98,&fStack_68,fVar15 + -0.25,uVar10,0,0);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  fStack_68 = fStack_98;
  fStack_64 = (float)uStack_94;
  fStack_60 = (float)uStack_90;
  uStack_5c = uStack_8c;
  uVar10 = thunk_FUN_00f00cdc(*puVar13);
  System_Action___ctor_2b10bac(uVar10,iVar6,**(undefined4 **)(_UNK_010583bc + 0x10581b8),0);
  PrimeTween_Sequence__InsertCallback_2cf01e0(&fStack_a8,&fStack_68,uVar8,uVar10,0,0);
  puVar13 = *(undefined4 **)(_UNK_010583c0 + 0x10581f0);
  fStack_68 = fStack_a8;
  fStack_64 = (float)uStack_a4;
  fStack_60 = (float)uStack_a0;
  uStack_5c = uStack_9c;
  uVar10 = thunk_FUN_00f00cdc(*puVar13);
  System_Action_object____ctor_1f11414(uVar10,iVar6,**(undefined4 **)(_UNK_010583c4 + 0x1058210),0);
  puVar14 = *(undefined4 **)(_UNK_010583c8 + 0x1058234);
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&fStack_b8,&fStack_68,param_1,uVar10,0,*puVar14);
  fStack_68 = fStack_b8;
  fStack_64 = (float)uStack_b4;
  fStack_60 = (float)uStack_b0;
  uStack_5c = uStack_ac;
  PrimeTween_Sequence__ChainDelay_2cf0394(&fStack_c8,&fStack_68,0x3e800000,0);
  piVar12 = *(int **)(_UNK_010583cc + 0x1058270);
  iVar6 = *piVar12;
  fStack_68 = fStack_c8;
  fStack_64 = (float)uStack_c4;
  fStack_60 = (float)uStack_c0;
  uStack_5c = uStack_bc;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar12;
  }
  puVar9 = *(undefined4 **)(iVar6 + 0x5c);
  iVar7 = puVar9[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar6 + 0x74) == 0) {
      FUN_00ec3934();
      puVar9 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar10 = *puVar9;
    iVar7 = thunk_FUN_00f00cdc(*puVar13);
    System_Action_object____ctor_1f11414
              (iVar7,uVar10,**(undefined4 **)(_UNK_010583d0 + 0x10582d8),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar7;
    thunk_FUN_00ec5080(piVar12,iVar7);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&fStack_78,&fStack_68,param_1,iVar7,0,*puVar14)
  ;
  Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb5500
            (&fStack_78,uStack_6c,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  Rotatelab_GameExtensions__PreventManualRotationDuringAnimation_fb5878
            (&fStack_78,uStack_6c,fStack_78,fStack_74,fStack_70,uStack_6c,0);
  return;
}

