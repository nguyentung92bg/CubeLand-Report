/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$Init
void Rotatelab_Shop_DailyQuestMemberController__Init (Rotatelab_Shop_DailyQuestMemberController_o* __this, Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* dailyQuestData, Rotatelab_Shop_DailyQuestSo_DailyQuestRewardsData_o* rewardsData, int32_t currentSliderValue, bool isCollected, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$Init
   void Rotatelab_Shop_DailyQuestMemberController__Init
   (Rotatelab_Shop_DailyQuestMemberController_o* __this,
   Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* dailyQuestData,
   Rotatelab_Shop_DailyQuestSo_DailyQuestRewardsData_o* rewardsData, int32_t currentSliderValue,
   bool isCollected, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestMemberController__Init_10bc510
               (int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  uint in_fpscr;
  
  pcVar7 = (char *)(_UNK_010cc99c + 0x10cc538);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9a0 + 0x10cc54c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9a4 + 0x10cc558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9a8 + 0x10cc564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9ac + 0x10cc570));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9b0 + 0x10cc57c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9b4 + 0x10cc588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9b8 + 0x10cc594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc9bc + 0x10cc5a0));
    *pcVar7 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010cc9c0 + 0x10cc5b4);
  *(char *)(param_1 + 0x24) = (char)param_5;
  *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(*piVar3 + 0x5c);
  thunk_FUN_00ec5080();
  *(int *)(param_1 + 0x2c) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x2c),param_2);
  iVar4 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestSo_10b9214();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = *(undefined4 *)(iVar4 + 0x1c);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(_UNK_010cc9c4 + 0x10cc610);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *piVar3;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar3;
  }
  puVar5 = *(undefined4 **)(iVar4 + 0x5c);
  iVar10 = puVar5[1];
  if (iVar10 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar3 + 0x5c);
    }
    uVar8 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cc9c8 + 0x10cc65c));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar10,uVar8,**(undefined4 **)(_UNK_010cc9cc + 0x10cc67c),0);
    piVar3 = (int *)(*(int *)(*piVar3 + 0x5c) + 4);
    *piVar3 = iVar10;
    thunk_FUN_00ec5080(piVar3,iVar10);
  }
  if (*(int *)(**(int **)(_UNK_010cc9d0 + 0x10cc6a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar11,uVar9,iVar10,**(undefined4 **)(_UNK_010cc9d4 + 0x10cc6c8));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x10),*(undefined4 *)(iVar4 + 0x10),0)
  ;
  if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = System_String__Contains_2a1052c(*(int *)(iVar4 + 0xc),0x7c,0);
  if (iVar10 == 0) {
    piVar3 = *(int **)(param_1 + 0x14);
    uVar11 = *(undefined4 *)(iVar4 + 0xc);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = *(code **)(*piVar3 + 0x2b0);
    uVar9 = *(undefined4 *)(*piVar3 + 0x2b4);
  }
  else {
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = System_String__Split_2a0df50(*(int *)(iVar4 + 0xc),0x7c,0,0);
    piVar3 = *(int **)(param_1 + 0x14);
    iVar10 = FUN_00ec388c(**(undefined4 **)(_UNK_010cc9d8 + 0x10cc768),5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar11 = *(undefined4 *)(iVar4 + 0x10);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar10 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar10 + 0x10) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x10),uVar11);
    puVar5 = *(undefined4 **)(_UNK_010cc9dc + 0x10cc7d8);
    uVar11 = *puVar5;
    if (*(uint *)(iVar10 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar10 + 0x14) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x14),uVar11);
    uVar11 = System_Int32__ToString_2b6b9ec(param_2 + 0x14,0);
    if (*(uint *)(iVar10 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar10 + 0x18) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x18),uVar11);
    uVar11 = *puVar5;
    if (*(uint *)(iVar10 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar10 + 0x1c) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x1c),uVar11);
    if (*(uint *)(iVar4 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar11 = *(undefined4 *)(iVar4 + 0x14);
    if (*(uint *)(iVar10 + 0xc) < 5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar10 + 0x20) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x20),uVar11);
    uVar11 = System_String__Concat_2a0bee8(iVar10,0);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = *(code **)(*piVar3 + 0x2b0);
    uVar9 = *(undefined4 *)(*piVar3 + 0x2b4);
  }
  (*pcVar6)(piVar3,uVar11,uVar9);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Slider__set_minValue_39c2514(*(int *)(param_1 + 0x1c),0,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = VectorSignedToFloat(*(undefined4 *)(param_2 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x1c),uVar11,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_DailyQuestChest__Init_10bbc1c
            (*(int *)(param_1 + 0x20),*(undefined4 *)(param_3 + 0xc));
  if (param_5 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_DailyQuestChest__SetCollected_10bbfd8(*(int *)(param_1 + 0x20));
  }
  Rotatelab_Shop_DailyQuestMemberController__SetSlider_10bec7c(param_1,param_4);
  pcVar7 = (char *)(_UNK_010cf364 + 0x10cee44);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf368 + 0x10cee58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf36c + 0x10cee64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf370 + 0x10cee70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf374 + 0x10cee7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf378 + 0x10cee88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf37c + 0x10cee94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf380 + 0x10ceea0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf384 + 0x10ceeac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf388 + 0x10ceeb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf38c + 0x10ceec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf390 + 0x10ceed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf394 + 0x10ceedc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf398 + 0x10ceee8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf39c + 0x10ceef4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf3a0 + 0x10cef00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cf3a4 + 0x10cef0c));
    *pcVar7 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10)) {
  case 0:
    piVar3 = *(int **)(&UNK_010cf22c + _UNK_010cf3a8);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x74);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf250 + _UNK_010cf3ac));
    System_Action___ctor_2b10bac(uVar11,param_1,**(undefined4 **)(&UNK_010cf270 + _UNK_010cf3b0),0);
    uVar11 = Rotatelab_GameAction__op_Addition_fbfed8(uVar9,uVar11,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x74);
    *puVar5 = uVar11;
    break;
  case 1:
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(&UNK_010cf2a8 + _UNK_010cf3b4));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar4 + 0x14) + 0x10) == 1) {
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
    piVar3 = *(int **)(&UNK_010cf2e8 + _UNK_010cf3b8);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x120);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf30c + _UNK_010cf3bc));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar11,param_1,**(undefined4 **)(&UNK_010cf32c + _UNK_010cf3c0),0);
    uVar11 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                       (uVar9,uVar11,**(undefined4 **)(&UNK_010cf344 + _UNK_010cf3c4));
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x120);
    *puVar5 = uVar11;
    break;
  case 2:
    piVar3 = *(int **)(&UNK_010cf12c + _UNK_010cf3c8);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc4);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf150 + _UNK_010cf3cc));
    System_Action___ctor_2b10bac(uVar11,param_1,**(undefined4 **)(&UNK_010cf170 + _UNK_010cf3d0),0);
    uVar11 = Rotatelab_GameAction__op_Addition_fbfed8(uVar9,uVar11,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc4);
    *puVar5 = uVar11;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    piVar3 = *(int **)(&UNK_010cef78 + _UNK_010cf3d4);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa8);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cef9c + _UNK_010cf3d8));
    System_Action_Int32Enum____ctor_1f10670
              (uVar11,param_1,**(undefined4 **)(&UNK_010cefbc + _UNK_010cf3dc),0);
    uVar11 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8
                       (uVar9,uVar11,**(undefined4 **)(&UNK_010cefd4 + _UNK_010cf3e0));
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xa8);
    *puVar5 = uVar11;
    break;
  case 7:
    piVar3 = *(int **)(&UNK_010cf000 + _UNK_010cf3e4);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    puVar5 = *(undefined4 **)(&UNK_010cf024 + _UNK_010cf3e8);
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x74);
    uVar11 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar11,param_1,**(undefined4 **)(&UNK_010cf044 + _UNK_010cf3ec),0);
    uVar11 = Rotatelab_GameAction__op_Addition_fbfed8(uVar9,uVar11,0);
    *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x74) = uVar11;
    thunk_FUN_00ec5080();
    uVar9 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x88);
    uVar11 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar11,param_1,**(undefined4 **)(&UNK_010cf09c + _UNK_010cf3f0),0);
    uVar11 = Rotatelab_GameAction__op_Addition_fbfed8(uVar9,uVar11,0);
    *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x88) = uVar11;
    thunk_FUN_00ec5080();
    uVar9 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x94);
    uVar11 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar11,param_1,**(undefined4 **)(&UNK_010cf0f4 + _UNK_010cf3f4),0);
    uVar11 = Rotatelab_GameAction__op_Addition_fbfed8(uVar9,uVar11,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x94);
    *puVar5 = uVar11;
    break;
  case 8:
    piVar3 = *(int **)(&UNK_010cf1a8 + _UNK_010cf3f8);
    iVar4 = *piVar3;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar3;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa0);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf1cc + _UNK_010cf3fc));
    System_Action_object__int____ctor_1f18be8
              (uVar11,param_1,**(undefined4 **)(&UNK_010cf1ec + _UNK_010cf400),0);
    uVar11 = Rotatelab_GameAction_object__int___op_Addition_23a4d40
                       (uVar9,uVar11,**(undefined4 **)(&UNK_010cf204 + _UNK_010cf404));
    puVar5 = (undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xa0);
    *puVar5 = uVar11;
    break;
  default:
    return;
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
  return;
}

