/* IL2CPP: Rotatelab.UI.UiElementHider$$OnEnable
void Rotatelab_UI_UiElementHider__OnEnable (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$OnEnable
   void Rotatelab_UI_UiElementHider__OnEnable (Rotatelab_UI_UiElementHider_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_UiElementHider__OnEnable_112e444(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar9 = (char *)(_UNK_0113eb7c + 0x113e45c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb80 + 0x113e470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb84 + 0x113e47c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb88 + 0x113e488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb8c + 0x113e494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb90 + 0x113e4a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb94 + 0x113e4ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb98 + 0x113e4b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eb9c + 0x113e4c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eba0 + 0x113e4d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eba4 + 0x113e4dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113eba8 + 0x113e4e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebac + 0x113e4f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebb0 + 0x113e500));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebb4 + 0x113e50c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebb8 + 0x113e518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebbc + 0x113e524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebc0 + 0x113e530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebc4 + 0x113e53c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebc8 + 0x113e548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebcc + 0x113e554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebd0 + 0x113e560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebd4 + 0x113e56c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebd8 + 0x113e578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebdc + 0x113e584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebe0 + 0x113e590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebe4 + 0x113e59c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113ebe8 + 0x113e5a8));
    *pcVar9 = '\x01';
  }
  piVar8 = *(int **)(_UNK_0113ebec + 0x113e5bc);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *(int *)(iVar3 + 8);
  uVar12 = *(uint *)(iVar3 + 0xc);
  piVar8 = *(int **)(_UNK_0113ebf0 + 0x113e604);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar12 + 1;
    piVar8 = (int *)(iVar11 + uVar12 * 4 + 0x10);
    *piVar8 = param_1;
    thunk_FUN_00ec5080(piVar8,param_1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,param_1,*(undefined4 *)(*(int *)(*(int *)(*piVar8 + 0x10) + 0x60) + 0x38));
  }
  piVar8 = *(int **)(_UNK_0113ebf4 + 0x113e65c);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  puVar7 = *(undefined4 **)(_UNK_0113ebf8 + 0x113e680);
  uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9c);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0113ebfc + 0x113e6a4),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar10,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x9c) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113ec00 + 0x113e6e4));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec04 + 0x113e704),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                    (uVar10,uVar4,**(undefined4 **)(_UNK_0113ec08 + 0x113e71c));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x118) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x114);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113ec0c + 0x113e74c));
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0113ec10 + 0x113e76c),0);
  puVar13 = *(undefined4 **)(_UNK_0113ec14 + 0x113e788);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar10,uVar4,*puVar13);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x114) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa4);
  puVar16 = *(undefined4 **)(_UNK_0113ec18 + 0x113e7b8);
  uVar4 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec1c + 0x113e7d4),0);
  puVar14 = *(undefined4 **)(_UNK_0113ec20 + 0x113e7f0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar10,uVar4,*puVar14);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa4) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa8);
  uVar4 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec24 + 0x113e834),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar10,uVar4,*puVar14);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa8) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xac);
  uVar4 = thunk_FUN_00f00cdc(*puVar16);
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec28 + 0x113e88c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar10,uVar4,*puVar14);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xac) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xd0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113ec2c + 0x113e8d0));
  System_Action_bool__bool____ctor_1f17d90
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec30 + 0x113e8ec),0);
  uVar4 = Rotatelab_GameAction_bool__bool___op_Addition_23a39d4
                    (uVar10,uVar4,**(undefined4 **)(_UNK_0113ec34 + 0x113e904));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xd0) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x8c);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0113ec38 + 0x113e94c),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar10,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x8c) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x90);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0113ec3c + 0x113e9a4),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar10,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x90) = uVar4;
  thunk_FUN_00ec5080();
  puVar7 = *(undefined4 **)(_UNK_0113ec40 + 0x113e9e4);
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x3c);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0113ec44 + 0x113ea04),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar10,uVar4,*puVar13);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x3c) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x40);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0113ec48 + 0x113ea5c),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar10,uVar4,*puVar13);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x40) = uVar4;
  thunk_FUN_00ec5080();
  uVar10 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18c);
  uVar4 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_bool____ctor_17aaff0(uVar4,param_1,**(undefined4 **)(_UNK_0113ec4c + 0x113eab4),0);
  uVar4 = Rotatelab_GameAction_bool___op_Addition_23a2828(uVar10,uVar4,*puVar13);
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18c) = uVar4;
  thunk_FUN_00ec5080();
  puVar7 = *(undefined4 **)(_UNK_0113ec50 + 0x113eaec);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113ec54 + 0x113eb00));
  System_Action_Int32Enum____ctor_1f10670
            (uVar4,param_1,**(undefined4 **)(_UNK_0113ec58 + 0x113eb1c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIManager__add_OnPageOpened_1127194(iVar3,uVar4);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x10);
  pcVar9 = (char *)(_UNK_0113f02c + 0x113ec7c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f030 + 0x113ec90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f034 + 0x113ec9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f038 + 0x113eca8));
    *pcVar9 = '\x01';
  }
  if ((*(int *)(param_1 + 0x10) != 2) || (*(char *)(param_1 + 0x28) == '\0')) {
    iVar3 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchorMin_36131f0
              (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),0
              );
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchorMax_3613400
              (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),
               0);
    uVar6 = *(undefined4 *)(iVar3 + 0x24);
    uVar5 = *(undefined4 *)(iVar3 + 0x28);
    uVar17 = *(undefined4 *)(param_1 + 0x1c);
    uVar15 = *(undefined4 *)(param_1 + 0x18);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
    uVar2 = uStack_40;
    uVar1 = uStack_44;
    uVar18 = uStack_48;
    uVar10 = uStack_4c;
    uVar4 = uStack_50;
    if (*(int *)(**(int **)(_UNK_0113f03c + 0x113ed6c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPosition_2ce6e40
              (&uStack_50,uVar15,uVar6,uVar5,uVar17,uVar4,uVar10,uVar18,uVar1,uVar2,1,0,0,0,0,0);
    if (*(int *)(param_1 + 0x10) == 1) {
      iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,0,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar7 = *(undefined4 **)(_UNK_0113f040 + 0x113ee30);
      uVar4 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
      iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,1,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0113f044 + 0x113ee90));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar15 = *(undefined4 *)(param_1 + 0x1c);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x10);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      uVar6 = uStack_40;
      uVar5 = uStack_44;
      uVar2 = uStack_48;
      uVar1 = uStack_4c;
      uVar18 = uStack_50;
      puVar7 = (undefined4 *)&UNK_0113f01c;
      if (iVar3 == 3) {
        puVar7 = (undefined4 *)&UNK_0113f020;
      }
      uVar17 = *puVar7;
      if (*(int *)(**(int **)(_UNK_0113f048 + 0x113eee8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                (&uStack_50,uVar4,uVar17,uVar15,uVar18,uVar1,uVar2,uVar5,uVar6,1,0,0,0,0,0);
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0113f04c + 0x113ef5c));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x10);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      puVar7 = (undefined4 *)&UNK_0113f024;
      if (iVar3 == 3) {
        puVar7 = (undefined4 *)&UNK_0113f028;
      }
      uVar18 = *puVar7;
      if (*(int *)(**(int **)(_UNK_0113f050 + 0x113efb8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                (&uStack_50,uVar10,uVar18,uVar4,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,1,
                 0,0,0,0,0);
    }
  }
  return;
}

