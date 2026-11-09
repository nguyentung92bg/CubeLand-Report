/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$Init
void Rotatelab_SeasonPass_SeasonPassManager__Init (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$Init
   void Rotatelab_SeasonPass_SeasonPassManager__Init (Rotatelab_SeasonPass_SeasonPassManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__Init_10a37c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  pcVar7 = (char *)(_UNK_010b4304 + 0x10b37e8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4308 + 0x10b37fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b430c + 0x10b3808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4310 + 0x10b3814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4314 + 0x10b3820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4318 + 0x10b382c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b431c + 0x10b3838));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4320 + 0x10b3844));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4324 + 0x10b3850));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4328 + 0x10b385c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b432c + 0x10b3868));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4330 + 0x10b3874));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4334 + 0x10b3880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4338 + 0x10b388c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b433c + 0x10b3898));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4340 + 0x10b38a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4344 + 0x10b38b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4348 + 0x10b38bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b434c + 0x10b38c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4350 + 0x10b38d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4354 + 0x10b38e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4358 + 0x10b38ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b435c + 0x10b38f8));
    *pcVar7 = '\x01';
  }
  puStack_4c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_50 = 0;
  uStack_3c = puStack_4c;
  uStack_38 = uStack_48;
  iStack_34 = iStack_44;
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 100),**(undefined4 **)(_UNK_010b4360 + 0x10b3930));
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x70),uVar1);
  iVar8 = *(int *)(param_1 + 0x3c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar8 + 0xc);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (0 < iVar6) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar8 + 8),0,iVar6,0);
  }
  piVar9 = *(int **)(param_1 + 0x48);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = (**(code **)(*piVar9 + 0x1c0))(piVar9,*(undefined4 *)(*piVar9 + 0x1c4));
  if (*(int *)(**(int **)(_UNK_010b4364 + 0x10b39b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__Instantiate_object__14d4b10
                    (uVar1,**(undefined4 **)(_UNK_010b4368 + 0x10b39d4));
  piVar11 = (int *)(param_1 + 0x74);
  *piVar11 = iVar8;
  thunk_FUN_00ec5080(piVar11,iVar8);
  piVar9 = *(int **)(param_1 + 0x48);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar9 + 0x1c8))(piVar9,*piVar11,*(undefined4 *)(*piVar9 + 0x1cc));
  piVar9 = *(int **)(_UNK_010b436c + 0x10b3a2c);
  iVar8 = *piVar9;
  if (*(int *)(iVar8 + 0x74) == 0) {
    FUN_00ec3934();
    iVar8 = *piVar9;
  }
  iVar8 = *(int *)(*(int *)(iVar8 + 0x5c) + 0xd8);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar8,*(undefined4 *)(param_1 + 0x14),1,0,**(undefined4 **)(_UNK_010b4370 + 0x10b3a70))
  ;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x48),0);
  uVar1 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar1,uVar2,**(undefined4 **)(_UNK_010b4374 + 0x10b3aac));
  iVar8 = *(int *)(param_1 + 0x3c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar8 + 8);
  uVar10 = *(uint *)(iVar8 + 0xc);
  piVar9 = *(int **)(_UNK_010b4378 + 0x10b3ae8);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar8 + 0xc) = uVar10 + 1;
    puVar3 = (undefined4 *)(iVar6 + uVar10 * 4 + 0x10);
    *puVar3 = uVar1;
    thunk_FUN_00ec5080(puVar3,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar8,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_60,iVar8,**(undefined4 **)(_UNK_010b437c + 0x10b3b68));
  uStack_40 = uStack_60;
  uStack_3c = puStack_5c;
  uStack_38 = uStack_58;
  iStack_34 = iStack_54;
  uStack_60 = 0;
  puVar3 = *(undefined4 **)(_UNK_010b4380 + 0x10b3b94);
  puVar13 = *(undefined4 **)(_UNK_010b4384 + 0x10b3b9c);
  puStack_5c = &uStack_40;
  while (iVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_40,*puVar3), iVar8 = iStack_34, iVar6 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x48),0);
    if (*(int *)(**(int **)(_UNK_010b4388 + 0x10b3be0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar9 = (int *)UnityEngine_Object__Instantiate_object__14d4dd0
                              (uVar1,uVar2,**(undefined4 **)(_UNK_010b438c + 0x10b3bfc));
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_List_object___IndexOf_267e86c(iVar6,iVar8,*puVar13);
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0xe8))(piVar9,iVar8,uVar1,*(undefined4 *)(*piVar9 + 0xec));
    iVar8 = *(int *)(param_1 + 0x3c);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar8 + 8);
    uVar10 = *(uint *)(iVar8 + 0xc);
    piVar5 = *(int **)(_UNK_010b4390 + 0x10b3c98);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (uVar10 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar10 + 1;
      piVar5 = (int *)(iVar6 + uVar10 * 4 + 0x10);
      *piVar5 = (int)piVar9;
      thunk_FUN_00ec5080(piVar5,piVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize_267dae0
                (iVar8,piVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_40,**(undefined4 **)(_UNK_010b4394 + 0x10b3cf4));
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x48),0);
  if (*(int *)(**(int **)(_UNK_010b439c + 0x10b3d2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar9 = (int *)UnityEngine_Object__Instantiate_object__14d4dd0
                            (uVar1,uVar2,**(undefined4 **)(_UNK_010b43a0 + 0x10b3d4c));
  if (piVar9 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar8 = **(int **)(_UNK_010b43a4 + 0x10b3d6c);
    uVar10 = (uint)*(byte *)(iVar8 + 0xb8);
    if ((*(byte *)(*piVar9 + 0xb8) < uVar10) ||
       (*(int *)(*(int *)(*piVar9 + 100) + uVar10 * 4 + -4) != iVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar9);
    }
    *(int **)(param_1 + 0x78) = piVar9;
    if ((*(byte *)(*piVar9 + 0xb8) < uVar10) ||
       (piVar5 = piVar9, *(int *)(*(int *)(*piVar9 + 100) + uVar10 * 4 + -4) != iVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar9);
    }
  }
  thunk_FUN_00ec5080(param_1 + 0x78,piVar5);
  piVar5 = *(int **)(param_1 + 0x78);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0xf0))
            (piVar5,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(*piVar5 + 0xf4));
  iVar8 = *(int *)(param_1 + 0x3c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar8 + 8);
  uVar10 = *(uint *)(iVar8 + 0xc);
  piVar5 = *(int **)(_UNK_010b43a8 + 0x10b3e64);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar8 + 0xc) = uVar10 + 1;
    piVar5 = (int *)(iVar6 + uVar10 * 4 + 0x10);
    *piVar5 = (int)piVar9;
    thunk_FUN_00ec5080(piVar5,piVar9);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar8,piVar9,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_60,*(int *)(param_1 + 0x3c),**(undefined4 **)(_UNK_010b43ac + 0x10b3ed8));
  uStack_50 = uStack_60;
  puStack_4c = puStack_5c;
  uStack_48 = uStack_58;
  iStack_44 = iStack_54;
  uStack_60 = 0;
  puVar3 = *(undefined4 **)(_UNK_010b43b0 + 0x10b3f04);
  fVar14 = _UNK_010b42f8;
  puStack_5c = &uStack_50;
  while (iVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_50,*puVar3), iVar8 != 0) {
    if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar4 = (float)Rotatelab_SeasonPass_SeasonPassCheckpointBase__get_Height_10a0a04(iStack_44);
    fVar14 = fVar14 + fVar4;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_50,**(undefined4 **)(_UNK_010b43b4 + 0x10b3f44));
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x48),0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_sizeDelta_3613820(iVar8,0x449b4000,fVar14,0);
  if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Material__set_mainTextureScale_35c8028
            (*piVar11,0x40800000,(fVar14 / _UNK_010b4300) * 4.0,0);
  piVar9 = *(int **)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc
                    (*(int *)(param_1 + 0x7c));
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar9 + 0x2b0))(piVar9,uVar1,*(undefined4 *)(*piVar9 + 0x2b4));
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(_UNK_010b43bc + 0x10b402c);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x34);
  iVar8 = *(int *)(param_1 + 100);
  uVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4(uVar2,*puVar3);
  uVar1 = Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(param_1,uVar1);
  uVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4(uVar2,*puVar3);
  uVar2 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase_10a6fb4(param_1,uVar2);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget_10a7024(iVar8,uVar1,0,uVar2);
  iVar8 = *(int *)(param_1 + 100);
  uVar10 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached_10a7254(param_1);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetVisible_10a72ec(iVar8,uVar10 ^ 1);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(_UNK_010b43c0 + 0x10b40cc);
  iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar13 = *(undefined4 **)(_UNK_010b43c4 + 0x10b40ec);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar13,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar12 = *(undefined4 **)(_UNK_010b43c8 + 0x10b4110);
  Rotatelab_Save_SavedValue_int___add_OnValueChanged_1a8b6b4(iVar8,uVar1,*puVar12);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x38);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar13,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___add_OnValueChanged_1a8b6b4(iVar8,uVar1,*puVar12);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x34);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar13,0);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___add_OnValueChanged_1a8b6b4(iVar8,uVar1,*puVar12);
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x7c) + 0x40);
    uVar1 = thunk_FUN_00f00cdc(*puVar3);
    System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar13,0);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Save_SavedValue_int___add_OnValueChanged_1a8b6b4(iVar8,uVar1,*puVar12);
    Rotatelab_SeasonPass_SeasonPassManager__RefreshButtonRadialFill_10a7320(param_1);
    iVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar8 != 0) {
      UnityEngine_GameObject__SetActive_3602038(iVar8,0,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

