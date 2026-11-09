/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShiftRearPlaceableForwards
PrimeTween_Sequence_o Rotatelab_Scripts_PlaceableManager__ShiftRearPlaceableForwards (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o* placeable, Rotatelab_Scripts_BasePlaceableController_o* leavingPlaceable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$ShiftRearPlaceableForwards
   PrimeTween_Sequence_o Rotatelab_Scripts_PlaceableManager__ShiftRearPlaceableForwards
   (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_BasePlaceableController_o*
   placeable, Rotatelab_Scripts_BasePlaceableController_o* leavingPlaceable, const MethodInfo*
   method); */

void Rotatelab_Scripts_PlaceableManager__ShiftRearPlaceableForwards_1045214
               (undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  uint uVar13;
  char *pcVar14;
  undefined4 uVar15;
  int *piVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar14 = (char *)(_UNK_010560dc + 0x1055240);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560e0 + 0x1055254));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560e4 + 0x1055260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560e8 + 0x105526c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560ec + 0x1055278));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560f0 + 0x1055284));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560f4 + 0x1055290));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560f8 + 0x105529c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010560fc + 0x10552a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056100 + 0x10552b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056104 + 0x10552c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056108 + 0x10552cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105610c + 0x10552d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056110 + 0x10552e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056114 + 0x10552f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056118 + 0x10552fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105611c + 0x1055308));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056120 + 0x1055314));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056124 + 0x1055320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056130 + 0x105532c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056330 + 0x1055338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056334 + 0x1055344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056338 + 0x1055350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105633c + 0x105535c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056340 + 0x1055368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056344 + 0x1055374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056348 + 0x1055380));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105634c + 0x105538c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056350 + 0x1055398));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056354 + 0x10553a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056358 + 0x10553b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105635c + 0x10553bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056360 + 0x10553c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056364 + 0x10553d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056368 + 0x10553e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105636c + 0x10553ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056370 + 0x10553f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056374 + 0x1055404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056378 + 0x1055410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105637c + 0x105541c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056380 + 0x1055428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056384 + 0x1055434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056388 + 0x1055440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105638c + 0x105544c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056390 + 0x1055458));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056394 + 0x1055464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056398 + 0x1055470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010563a0 + 0x105547c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010563a4 + 0x1055488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056488 + 0x1055494));
    *pcVar14 = '\x01';
  }
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_74 = uStack_84;
  uStack_70 = uStack_80;
  uStack_6c = uStack_7c;
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  param_3[8] = param_3[8] + -1;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_98,1,0,1,0,0,0);
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_3,0);
  fVar19 = *(float *)(param_2 + 0x48);
  fVar24 = (float)VectorSignedToFloat(param_3[7],(byte)(in_fpscr >> 0x16) & 3);
  fVar20 = *(float *)(param_2 + 0x4c);
  fVar25 = (float)VectorSignedToFloat(param_3[8],(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = *(float *)(param_2 + 0x54);
  fVar22 = *(float *)(param_2 + 0x58);
  fVar23 = *(float *)(param_2 + 0x5c);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_b0,9,0);
  uVar3 = uStack_a4;
  uVar2 = uStack_a8;
  uVar1 = uStack_ac;
  uVar15 = uStack_b0;
  fVar18 = _UNK_01055890;
  fVar22 = fVar22 + _UNK_01055890;
  if (*(int *)(**(int **)(_UNK_01056564 + 0x1055578) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__LocalPosition_2ce550c
            (&uStack_b0,uVar4,fVar21 + fVar19 * fVar24,fVar22,fVar23 + fVar20 * fVar25,0x3ec00000,
             uVar15,uVar1,uVar2,uVar3,uStack_a0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_b0,&uStack_78,uStack_b0,uStack_ac,uStack_a8,uStack_a4,0);
  iVar5 = *param_3;
  uVar13 = (uint)*(byte *)(**(int **)(_UNK_010565b4 + 0x105560c) + 0xb8);
  uVar8 = (uint)*(byte *)(iVar5 + 0xb8);
  if ((uVar8 < uVar13) ||
     (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) != **(int **)(_UNK_010565b4 + 0x105560c))) {
    uVar13 = (uint)*(byte *)(**(int **)(_UNK_010565b8 + 0x1055644) + 0xb8);
    if ((uVar13 <= uVar8) &&
       (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) == **(int **)(_UNK_010565b8 + 0x1055644)))
    {
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
      Rotatelab_Scripts_BlasterGeneratorController__UpdateAnimationState_103ae14(param_3,1,1,0);
      piVar16 = *(int **)(_UNK_01056790 + 0x1055af4);
      iVar5 = *piVar16;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar16;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[6];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056794 + 0x1055b3c));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_01056798 + 0x1055b5c),0);
        piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x18);
        *piVar16 = iVar10;
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
      puVar9 = *(undefined4 **)(_UNK_0105679c + 0x1055b84);
      goto LAB_01056648;
    }
    uVar13 = (uint)*(byte *)(**(int **)(_UNK_010565bc + 0x1055670) + 0xb8);
    if ((uVar13 <= uVar8) &&
       (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) == **(int **)(_UNK_010565bc + 0x1055670)))
    {
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
      Rotatelab_Scripts_KeyController__UpdateAnimationState_103dcdc(param_3,2,1,0);
      piVar16 = *(int **)(_UNK_010567a0 + 0x1055bc4);
      iVar5 = *piVar16;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar16;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[7];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567a4 + 0x1055c0c));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_010567a8 + 0x1055c2c),0);
        piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x1c);
        *piVar16 = iVar10;
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
      puVar9 = *(undefined4 **)(_UNK_010567ac + 0x1055c54);
      goto LAB_01056648;
    }
    uVar13 = (uint)*(byte *)(**(int **)(_UNK_01056684 + 0x105569c) + 0xb8);
    if ((uVar13 <= uVar8) &&
       (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) == **(int **)(_UNK_01056684 + 0x105569c)))
    {
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
      Rotatelab_Scripts_LockController__UpdateAnimationState_103e77c(param_3,2,1,0);
      piVar16 = *(int **)(_UNK_010567b0 + 0x1055c94);
      iVar5 = *piVar16;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar16;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[8];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567b4 + 0x1055cdc));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_010567b8 + 0x1055cfc),0);
        piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x20);
        *piVar16 = iVar10;
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
      puVar9 = *(undefined4 **)(_UNK_010567bc + 0x1055d24);
      goto LAB_01056648;
    }
    piVar16 = *(int **)(_UNK_01056688 + 0x10556c8);
    iVar10 = *piVar16;
    uVar13 = (uint)*(byte *)(iVar10 + 0xb8);
    if ((uVar8 < uVar13) || (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) != iVar10)) {
      piVar16 = *(int **)(_UNK_0105668c + 0x10556f4);
      iVar10 = *piVar16;
      uVar13 = (uint)*(byte *)(iVar10 + 0xb8);
      if ((uVar13 <= uVar8) && (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) == iVar10)) {
        iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
        Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
        Rotatelab_Scripts_HammerController__UpdateAnimationState_103d2fc(param_3,2,1,0);
        piVar17 = *(int **)(_UNK_010567d8 + 0x1055f3c);
        iVar5 = *piVar17;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar17;
        }
        puVar9 = *(undefined4 **)(iVar5 + 0x5c);
        iVar10 = puVar9[0xb];
        if (iVar10 == 0) {
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            puVar9 = *(undefined4 **)(*piVar17 + 0x5c);
          }
          uVar15 = *puVar9;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567dc + 0x1055f84));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar15,**(undefined4 **)(_UNK_010567e0 + 0x1055fa4),0);
          piVar6 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x2c);
          *piVar6 = iVar10;
          thunk_FUN_00ec5080(piVar6,iVar10);
        }
        puVar9 = *(undefined4 **)(_UNK_010567e4 + 0x1055fd8);
        PrimeTween_Sequence__ChainCallback_object__15b4c64
                  (&uStack_b0,&uStack_78,param_3,iVar10,0,*puVar9);
        iVar5 = *piVar16;
        uStack_88 = uStack_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        uVar15 = _UNK_0105639c;
        if (param_4 != (int *)0x0) {
          uVar8 = (uint)*(byte *)(iVar5 + 0xb8);
          if (uVar8 <= *(byte *)(*param_4 + 0xb8)) {
            puVar12 = (undefined4 *)&UNK_01056128;
            if (*(int *)(*(int *)(*param_4 + 100) + uVar8 * 4 + -4) == iVar5) {
              puVar12 = (undefined4 *)&UNK_0105612c;
            }
            uVar15 = *puVar12;
          }
        }
        PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_b0,&uStack_88,uVar15,0);
        iVar5 = *piVar17;
        uStack_88 = uStack_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar17;
        }
        puVar12 = *(undefined4 **)(iVar5 + 0x5c);
        iVar10 = puVar12[0xc];
        if (iVar10 == 0) {
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            puVar12 = *(undefined4 **)(*piVar17 + 0x5c);
          }
          uVar15 = *puVar12;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567e8 + 0x10560a4));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar15,**(undefined4 **)(_UNK_010567ec + 0x10560c4),0);
          piVar16 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x30);
          *piVar16 = iVar10;
          goto LAB_0105630c;
        }
        goto LAB_01056318;
      }
      piVar16 = *(int **)(_UNK_01056690 + 0x1055720);
      iVar10 = *piVar16;
      uVar13 = (uint)*(byte *)(iVar10 + 0xb8);
      if ((uVar13 <= uVar8) && (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) == iVar10)) {
        iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
        Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
        Rotatelab_Scripts_SwordController__UpdateAnimationState_1046960(param_3,2,1);
        piVar17 = *(int **)(_UNK_010567f0 + 0x1056170);
        iVar5 = *piVar17;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar17;
        }
        puVar9 = *(undefined4 **)(iVar5 + 0x5c);
        iVar10 = puVar9[0xd];
        if (iVar10 == 0) {
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            puVar9 = *(undefined4 **)(*piVar17 + 0x5c);
          }
          uVar15 = *puVar9;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567f4 + 0x10561b8));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar15,**(undefined4 **)(_UNK_010567f8 + 0x10561d8),0);
          piVar6 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x34);
          *piVar6 = iVar10;
          thunk_FUN_00ec5080(piVar6,iVar10);
        }
        puVar9 = *(undefined4 **)(_UNK_010567fc + 0x105620c);
        PrimeTween_Sequence__ChainCallback_object__15b4c64
                  (&uStack_b0,&uStack_78,param_3,iVar10,0,*puVar9);
        iVar5 = *piVar16;
        uStack_88 = uStack_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        uVar15 = _UNK_0105639c;
        if (param_4 != (int *)0x0) {
          uVar8 = (uint)*(byte *)(iVar5 + 0xb8);
          if (uVar8 <= *(byte *)(*param_4 + 0xb8)) {
            puVar12 = (undefined4 *)&UNK_01056128;
            if (*(int *)(*(int *)(*param_4 + 100) + uVar8 * 4 + -4) == iVar5) {
              puVar12 = (undefined4 *)&UNK_0105612c;
            }
            uVar15 = *puVar12;
          }
        }
        PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_b0,&uStack_88,uVar15,0);
        iVar5 = *piVar17;
        uStack_88 = uStack_b0;
        uStack_84 = uStack_ac;
        uStack_80 = uStack_a8;
        uStack_7c = uStack_a4;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar17;
        }
        puVar12 = *(undefined4 **)(iVar5 + 0x5c);
        iVar10 = puVar12[0xe];
        if (iVar10 == 0) {
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            puVar12 = *(undefined4 **)(*piVar17 + 0x5c);
          }
          uVar15 = *puVar12;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056800 + 0x10562d8));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar15,**(undefined4 **)(_UNK_01056804 + 0x10562f8),0);
          piVar16 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x38);
          *piVar16 = iVar10;
          goto LAB_0105630c;
        }
        goto LAB_01056318;
      }
      piVar16 = *(int **)(_UNK_01056694 + 0x105574c);
      iVar10 = *piVar16;
      uVar13 = (uint)*(byte *)(iVar10 + 0xb8);
      if ((uVar8 < uVar13) || (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) != iVar10)) {
        uVar13 = (uint)*(byte *)(**(int **)(_UNK_01056758 + 0x1055778) + 0xb8);
        if ((uVar8 < uVar13) ||
           (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) !=
            **(int **)(_UNK_01056758 + 0x1055778))) {
          uVar13 = (uint)*(byte *)(**(int **)(_UNK_0105675c + 0x10557a4) + 0xb8);
          if ((uVar8 < uVar13) ||
             (*(int *)(*(int *)(iVar5 + 100) + uVar13 * 4 + -4) !=
              **(int **)(_UNK_0105675c + 0x10557a4))) goto LAB_01056668;
          iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
          Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
          Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80(param_3,2,1);
          piVar16 = *(int **)(_UNK_01056760 + 0x1055800);
          iVar5 = *piVar16;
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            iVar5 = *piVar16;
          }
          puVar9 = *(undefined4 **)(iVar5 + 0x5c);
          iVar10 = puVar9[0x13];
          if (iVar10 == 0) {
            if (*(int *)(iVar5 + 0x74) == 0) {
              FUN_00ec3934();
              puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
            }
            uVar15 = *puVar9;
            iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056840 + 0x1055848));
            System_Action_object____ctor_1f11414
                      (iVar10,uVar15,**(undefined4 **)(_UNK_01056844 + 0x1055868),0);
            piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x4c);
            *piVar16 = iVar10;
            thunk_FUN_00ec5080(piVar16,iVar10);
          }
          puVar9 = *(undefined4 **)(&UNK_01055890 + _UNK_01056848);
        }
        else {
          iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
          Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
          Rotatelab_Scripts_MacheteController__UpdateAnimationState_103e9b4(param_3,1,1,0);
          iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
          piVar16 = *(int **)(_UNK_01056828 + 0x10564e0);
          iVar7 = *piVar16;
          if (iVar5 < 1) {
            if (*(int *)(iVar7 + 0x74) == 0) {
              FUN_00ec3934();
              iVar7 = *piVar16;
            }
            puVar9 = *(undefined4 **)(iVar7 + 0x5c);
            iVar10 = puVar9[0x12];
            if (iVar10 == 0) {
              if (*(int *)(iVar7 + 0x74) == 0) {
                FUN_00ec3934();
                puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
              }
              uVar15 = *puVar9;
              iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056838 + 0x1056604));
              System_Action_object____ctor_1f11414
                        (iVar10,uVar15,**(undefined4 **)(_UNK_0105683c + 0x1056624),0);
              piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x48);
              *piVar16 = iVar10;
              goto LAB_01056638;
            }
          }
          else {
            if (*(int *)(iVar7 + 0x74) == 0) {
              FUN_00ec3934();
              iVar7 = *piVar16;
            }
            puVar9 = *(undefined4 **)(iVar7 + 0x5c);
            iVar10 = puVar9[0x11];
            if (iVar10 == 0) {
              if (*(int *)(iVar7 + 0x74) == 0) {
                FUN_00ec3934();
                puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
              }
              uVar15 = *puVar9;
              iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105682c + 0x105652c));
              System_Action_object____ctor_1f11414
                        (iVar10,uVar15,**(undefined4 **)(_UNK_01056830 + 0x105654c),0);
              piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x44);
              *piVar16 = iVar10;
LAB_01056638:
              thunk_FUN_00ec5080(piVar16,iVar10);
            }
          }
          puVar9 = *(undefined4 **)(_UNK_01056834 + 0x105664c);
        }
        goto LAB_01056648;
      }
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
      Rotatelab_Scripts_PropellerController__UpdateAnimationState_1046a6c(param_3,2,1);
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      if (0 < iVar5) {
        piVar16 = *(int **)(_UNK_01056808 + 0x10563f8);
        iVar5 = *piVar16;
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          iVar5 = *piVar16;
        }
        puVar9 = *(undefined4 **)(iVar5 + 0x5c);
        iVar10 = puVar9[0xf];
        if (iVar10 == 0) {
          if (*(int *)(iVar5 + 0x74) == 0) {
            FUN_00ec3934();
            puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
          }
          uVar15 = *puVar9;
          iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105680c + 0x1056440));
          System_Action_object____ctor_1f11414
                    (iVar10,uVar15,**(undefined4 **)(_UNK_01056810 + 0x1056460),0);
          piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x3c);
          *piVar16 = iVar10;
          thunk_FUN_00ec5080(piVar16,iVar10);
        }
        puVar9 = *(undefined4 **)(&UNK_01056488 + _UNK_01056814);
        goto LAB_01056648;
      }
      uVar15 = _UNK_01056764;
      if (param_4 != (int *)0x0) {
        iVar5 = *piVar16;
        uVar8 = (uint)*(byte *)(iVar5 + 0xb8);
        if (uVar8 <= *(byte *)(*param_4 + 0xb8)) {
          puVar9 = (undefined4 *)&UNK_01056768;
          if (*(int *)(*(int *)(*param_4 + 100) + uVar8 * 4 + -4) == iVar5) {
            puVar9 = (undefined4 *)&UNK_0105676c;
          }
          uVar15 = *puVar9;
        }
      }
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_b0,&uStack_78,uVar15,0);
      piVar16 = *(int **)(_UNK_01056818 + 0x10566bc);
      iVar5 = *piVar16;
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar16;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[0x10];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0105681c + 0x105670c));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_01056820 + 0x105672c),0);
        piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x40);
        *piVar16 = iVar10;
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
      uVar15 = **(undefined4 **)(_UNK_01056824 + 0x1056754);
    }
    else {
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(param_3,iVar5 == 0,0);
      Rotatelab_Scripts_ScissorsController__UpdateAnimationState_104684c(param_3,2,1);
      piVar17 = *(int **)(_UNK_010567c0 + 0x1055d60);
      iVar5 = *piVar17;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar17;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[9];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar17 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567c4 + 0x1055da8));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_010567c8 + 0x1055dc8),0);
        piVar6 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x24);
        *piVar6 = iVar10;
        thunk_FUN_00ec5080(piVar6,iVar10);
      }
      puVar9 = *(undefined4 **)(_UNK_010567cc + 0x1055dfc);
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_b0,&uStack_78,param_3,iVar10,0,*puVar9);
      iVar5 = *piVar16;
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      if (param_4 != (int *)0x0) {
        uVar8 = (uint)*(byte *)(iVar5 + 0xb8);
        if (uVar8 <= *(byte *)(*param_4 + 0xb8)) {
          pfVar11 = (float *)&UNK_01056128;
          if (*(int *)(*(int *)(*param_4 + 100) + uVar8 * 4 + -4) == iVar5) {
            pfVar11 = (float *)&UNK_0105612c;
          }
          fVar18 = *pfVar11;
        }
      }
      PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_b0,&uStack_88,fVar18,0);
      iVar5 = *piVar17;
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar17;
      }
      puVar12 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar12[10];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar12 = *(undefined4 **)(*piVar17 + 0x5c);
        }
        uVar15 = *puVar12;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010567d0 + 0x1055ec4));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_010567d4 + 0x1055ee4),0);
        piVar16 = (int *)(*(int *)(*piVar17 + 0x5c) + 0x28);
        *piVar16 = iVar10;
LAB_0105630c:
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
LAB_01056318:
      uVar15 = *puVar9;
    }
    puVar9 = &uStack_88;
  }
  else {
    iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
    if ((iVar5 == 0) && (*(char *)((int)param_3 + 0xc2) != '\0')) {
      piVar16 = *(int **)(_UNK_01056770 + 0x10558c0);
      iVar5 = *piVar16;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar16;
      }
      puVar9 = *(undefined4 **)(iVar5 + 0x5c);
      iVar10 = puVar9[4];
      if (iVar10 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
        }
        uVar15 = *puVar9;
        iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056774 + 0x1055908));
        System_Action_object____ctor_1f11414
                  (iVar10,uVar15,**(undefined4 **)(_UNK_01056778 + 0x1055928),0);
        piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x10);
        *piVar16 = iVar10;
        thunk_FUN_00ec5080(piVar16,iVar10);
      }
      PrimeTween_Sequence__InsertCallback_object__15b4ee8
                (&uStack_b0,&uStack_78,0x3dcccccd,param_3,iVar10,0,
                 **(undefined4 **)(_UNK_0105677c + 0x1055960));
    }
    iVar5 = Rotatelab_Scripts_BlasterController__get_HasColorBarrel_1030edc(param_3,0);
    if (iVar5 != 0) {
      iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
      Rotatelab_Scripts_BlasterController__PlayColorBarrelQueueMove_103428c(param_3,iVar5 == 0,0);
    }
    iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
    if ((iVar5 < 3) &&
       (iVar5 = Rotatelab_Scripts_BlasterController__get_IsIced_1030e20(param_3,0), iVar5 == 0)) {
      (**(code **)(*param_3 + 0x110))(param_3,1,*(undefined4 *)(*param_3 + 0x114));
    }
    iVar5 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
    uVar15 = 1;
    if (iVar5 == 0) {
      uVar15 = 3;
    }
    (**(code **)(*param_3 + 0x150))(param_3,uVar15,*(undefined4 *)(*param_3 + 0x154));
    piVar16 = *(int **)(_UNK_01056780 + 0x1055a24);
    iVar5 = *piVar16;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar16;
    }
    puVar9 = *(undefined4 **)(iVar5 + 0x5c);
    iVar10 = puVar9[5];
    if (iVar10 == 0) {
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        puVar9 = *(undefined4 **)(*piVar16 + 0x5c);
      }
      uVar15 = *puVar9;
      iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01056784 + 0x1055a6c));
      System_Action_object____ctor_1f11414
                (iVar10,uVar15,**(undefined4 **)(_UNK_01056788 + 0x1055a8c),0);
      piVar16 = (int *)(*(int *)(*piVar16 + 0x5c) + 0x14);
      *piVar16 = iVar10;
      thunk_FUN_00ec5080(piVar16,iVar10);
    }
    puVar9 = *(undefined4 **)(_UNK_0105678c + 0x1055ab4);
LAB_01056648:
    uVar15 = *puVar9;
    puVar9 = &uStack_78;
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64(&uStack_b0,puVar9,param_3,iVar10,0,uVar15);
LAB_01056668:
  *param_1 = uStack_78;
  param_1[1] = uStack_74;
  param_1[2] = uStack_70;
  param_1[3] = uStack_6c;
  return;
}

