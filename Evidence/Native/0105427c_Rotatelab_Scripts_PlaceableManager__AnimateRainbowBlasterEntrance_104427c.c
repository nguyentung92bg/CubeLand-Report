/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$AnimateRainbowBlasterEntrance
void Rotatelab_Scripts_PlaceableManager__AnimateRainbowBlasterEntrance (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, UnityEngine_Vector3_o targetLocalPosition, UnityEngine_Vector3_o initialEulerAngles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$AnimateRainbowBlasterEntrance
   void Rotatelab_Scripts_PlaceableManager__AnimateRainbowBlasterEntrance
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster,
   UnityEngine_Vector3_o targetLocalPosition, UnityEngine_Vector3_o initialEulerAngles, const
   MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager__AnimateRainbowBlasterEntrance_104427c
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  pcVar8 = (char *)(_UNK_01054b4c + 0x10542a4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b50 + 0x10542bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b54 + 0x10542c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b58 + 0x10542d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b5c + 0x10542e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b60 + 0x10542ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b64 + 0x10542f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b68 + 0x1054304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b6c + 0x1054310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b70 + 0x105431c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b74 + 0x1054328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b78 + 0x1054334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01054b7c + 0x1054340));
    *pcVar8 = '\x01';
  }
  fStack_64 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  fStack_60 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fStack_68 = 0.0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01054b80 + 0x1054360));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = *(undefined4 **)(_UNK_01054b84 + 0x105438c);
  *(undefined4 *)(iVar1 + 0x20) = param_3;
  *(undefined4 *)(iVar1 + 0x24) = param_4;
  uVar3 = *puVar2;
  *(undefined4 *)(iVar1 + 0x28) = param_5;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar3);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0x24);
  if (*(int *)(**(int **)(_UNK_01054b88 + 0x10543b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Equality_36033f4(iVar4,0,0);
  if (iVar5 == 0) {
    iVar5 = UnityEngine_Camera__get_main_35aede4(0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Boosters_SpecialBooster__get_IconScreenPosition_113d474(&fStack_a0,iVar4,0);
    fVar13 = fStack_9c;
    fVar11 = fStack_a0;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__TransformPoint_3616968
              (&fStack_a0,*(int *)(param_1 + 0x14),*(undefined4 *)(iVar1 + 0x20),
               *(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),0);
    fVar19 = fStack_98;
    fVar18 = fStack_9c;
    fVar16 = fStack_a0;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_position_36149b0(&fStack_a0,iVar4,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar19 = fVar19 - fStack_98;
    fVar18 = fVar18 - fStack_9c;
    fVar16 = fVar16 - fStack_a0;
    iVar4 = UnityEngine_Component__get_transform_35fe190(iVar5,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_forward_36152b0(&fStack_a0,iVar4,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__ScreenToWorldPoint_35aeaa8
              (&fStack_a0,iVar5,fVar11,fVar13,
               fVar18 * fStack_9c + fVar16 * fStack_a0 + fVar19 * fStack_98,0);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__InverseTransformPoint_3616aa0
              (&uStack_78,*(int *)(param_1 + 0x14),fStack_a0,fStack_9c,fStack_98,0);
    *(undefined4 *)(iVar1 + 0x10) = uStack_70;
    *(undefined8 *)(iVar1 + 8) = uStack_78;
    fVar11 = *(float *)(iVar1 + 0x20);
    fVar20 = *(float *)(iVar1 + 8);
    fVar13 = *(float *)(iVar1 + 0x24);
    fVar19 = *(float *)(iVar1 + 0xc);
    fVar16 = *(float *)(iVar1 + 0x28);
    fVar18 = *(float *)(iVar1 + 0x10);
    pcVar8 = (char *)(_UNK_01054b8c + 0x10545b0);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01054b90 + 0x10545d0));
      *pcVar8 = '\x01';
    }
    fVar12 = *(float *)(param_1 + 0x98);
    iVar4 = *(int *)(**(int **)(_UNK_01054b94 + 0x10545e8) + 0x5c);
    fVar14 = *(float *)(iVar4 + 0x1c);
    fVar15 = *(float *)(iVar4 + 0x20);
    *(float *)(iVar1 + 0x14) = fVar20 + (fVar11 - fVar20) * 0.5 + *(float *)(iVar4 + 0x18) * fVar12;
    *(float *)(iVar1 + 0x18) = fVar19 + (fVar13 - fVar19) * 0.5 + fVar14 * fVar12;
    *(float *)(iVar1 + 0x1c) = fVar18 + (fVar16 - fVar18) * 0.5 + fVar15 * fVar12;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localPosition_3613c6c
              (iVar4,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
               *(undefined4 *)(iVar1 + 0x10),0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    pcVar8 = (char *)(_UNK_01054b98 + 0x1054688);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01054b9c + 0x105469c));
      *pcVar8 = '\x01';
    }
    fVar11 = *(float *)(param_1 + 0x9c);
    iVar5 = *(int *)(**(int **)(_UNK_01054ba0 + 0x10546b4) + 0x5c);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar4,*(float *)(iVar5 + 0xc) * fVar11,*(float *)(iVar5 + 0x10) * fVar11,
               *(float *)(iVar5 + 0x14) * fVar11,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar2 = *(undefined4 **)(_UNK_01054ba4 + 0x1054720);
    *(undefined1 *)(param_2 + 199) = 1;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
    uVar3 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_FX_AboveUiOverlayRenderer__Begin_10fbd68(iVar4,uVar3,0);
    PrimeTween_Sequence__Create_2cef1e0(&fStack_88,1,0,1,0,0,0);
    fStack_68 = fStack_88;
    fStack_64 = (float)uStack_84;
    fStack_60 = (float)uStack_80;
    uStack_5c = uStack_7c;
    uVar6 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    uVar17 = *(undefined4 *)(param_1 + 0x94);
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01054ba8 + 0x10547ac));
    System_Action_object__float____ctor_1f19254
              (uVar7,iVar1,**(undefined4 **)(_UNK_01054bac + 0x10547c8),0);
    PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_a0,4,0);
    uVar9 = uStack_90;
    uVar3 = uStack_94;
    fVar16 = fStack_98;
    fVar13 = fStack_9c;
    fVar11 = fStack_a0;
    if (*(int *)(**(int **)(_UNK_01054bb0 + 0x10547ec) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_object__15d5b3c
              (&fStack_a0,uVar6,0,0x3f800000,uVar17,uVar7,fVar11,fVar13,fVar16,uVar3,uVar9,1,0,0,0,0
               ,**(undefined4 **)(_UNK_01054bb4 + 0x1054834));
    PrimeTween_Sequence__Group_2cef730
              (&fStack_b0,&fStack_68,fStack_a0,fStack_9c,fStack_98,uStack_94,0);
    fStack_68 = fStack_b0;
    fStack_64 = (float)uStack_ac;
    fStack_60 = (float)uStack_a8;
    uStack_5c = uStack_a4;
    uVar3 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    uVar9 = *(undefined4 *)(param_1 + 0x94);
    fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xac),(byte)(in_fpscr >> 0x16) & 3
                                       );
    PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_a0,9,0);
    PrimeTween_Tween__LocalEulerAngles_2ceaa78
              (&fStack_a0,uVar3,param_6,param_7,param_8,0,fVar11 * _UNK_01054b48,0,uVar9,fStack_a0,
               fStack_9c,fStack_98,uStack_94,uStack_90,1,0,0,0,0,0);
    PrimeTween_Sequence__Group_2cef730
              (&fStack_c0,&fStack_68,fStack_a0,fStack_9c,fStack_98,uStack_94,0);
    fStack_68 = fStack_c0;
    fStack_64 = (float)uStack_bc;
    fStack_60 = (float)uStack_b8;
    uStack_5c = uStack_b4;
    uVar3 = UnityEngine_Component__get_transform_35fe190(param_2,0);
    pcVar8 = (char *)(_UNK_01054bb8 + 0x105497c);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01054bbc + 0x1054990));
      *pcVar8 = '\x01';
    }
    uVar9 = *(undefined4 *)(param_1 + 0x94);
    fVar11 = *(float *)(param_1 + 0x9c);
    iVar1 = *(int *)(**(int **)(_UNK_01054bc0 + 0x10549ac) + 0x5c);
    fVar13 = *(float *)(iVar1 + 0xc);
    fVar16 = *(float *)(iVar1 + 0x10);
    fVar18 = *(float *)(iVar1 + 0x14);
    PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_a0,9,0);
    PrimeTween_Tween__Scale_2ce679c
              (&fStack_a0,uVar3,fVar13 * fVar11,fVar16 * fVar11,fVar18 * fVar11,fVar13,fVar16,fVar18
               ,uVar9,fStack_a0,fStack_9c,fStack_98,uStack_94,uStack_90,1,0,0,0,0,0);
    PrimeTween_Sequence__Group_2cef730
              (&fStack_a0,&fStack_68,fStack_a0,fStack_9c,fStack_98,uStack_94,0);
    piVar10 = *(int **)(_UNK_01054bc4 + 0x1054a6c);
    iVar1 = *piVar10;
    fStack_68 = fStack_a0;
    fStack_64 = fStack_9c;
    fStack_60 = fStack_98;
    uStack_5c = uStack_94;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar10;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar4 = puVar2[1];
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar3 = *puVar2;
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01054bc8 + 0x1054abc));
      System_Action_object____ctor_1f11414
                (iVar4,uVar3,**(undefined4 **)(_UNK_01054bcc + 0x1054adc),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
      *piVar10 = iVar4;
      thunk_FUN_00ec5080(piVar10,iVar4);
    }
    PrimeTween_Sequence__ChainCallback_object__15b4c64
              (&fStack_a0,&fStack_68,param_2,iVar4,0,**(undefined4 **)(_UNK_01054bd0 + 0x1054b0c));
    *(float *)(param_1 + 0x80) = fStack_a0;
    *(float *)(param_1 + 0x84) = fStack_9c;
    *(float *)(param_1 + 0x88) = fStack_98;
    *(undefined4 *)(param_1 + 0x8c) = uStack_94;
    thunk_FUN_00ec5080(param_1 + 0x88,0);
  }
  return;
}

