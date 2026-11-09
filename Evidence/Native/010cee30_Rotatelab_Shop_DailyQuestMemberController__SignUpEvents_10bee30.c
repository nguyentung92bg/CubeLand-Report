/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$SignUpEvents
void Rotatelab_Shop_DailyQuestMemberController__SignUpEvents (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestMemberController$$SignUpEvents
   void Rotatelab_Shop_DailyQuestMemberController__SignUpEvents
   (Rotatelab_Shop_DailyQuestMemberController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestMemberController__SignUpEvents_10bee30(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_010cf364 + 0x10cee44);
  if (*pcVar6 == '\0') {
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
    *pcVar6 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  switch(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10)) {
  case 0:
    piVar8 = *(int **)(&UNK_010cf22c + _UNK_010cf3a8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf250 + _UNK_010cf3ac));
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(&UNK_010cf270 + _UNK_010cf3b0),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74);
    *puVar5 = uVar4;
    break;
  case 1:
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(&UNK_010cf2a8 + _UNK_010cf3b4));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar3 + 0x14) + 0x10) == 1) {
      *(undefined1 *)(param_1 + 0x26) = 1;
    }
    piVar8 = *(int **)(&UNK_010cf2e8 + _UNK_010cf3b8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x120);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf30c + _UNK_010cf3bc));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar4,param_1,**(undefined4 **)(&UNK_010cf32c + _UNK_010cf3c0),0);
    uVar4 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                      (uVar7,uVar4,**(undefined4 **)(&UNK_010cf344 + _UNK_010cf3c4));
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
    *puVar5 = uVar4;
    break;
  case 2:
    piVar8 = *(int **)(&UNK_010cf12c + _UNK_010cf3c8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc4);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf150 + _UNK_010cf3cc));
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(&UNK_010cf170 + _UNK_010cf3d0),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xc4);
    *puVar5 = uVar4;
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    piVar8 = *(int **)(&UNK_010cef78 + _UNK_010cf3d4);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa8);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cef9c + _UNK_010cf3d8));
    System_Action_Int32Enum____ctor_1f10670
              (uVar4,param_1,**(undefined4 **)(&UNK_010cefbc + _UNK_010cf3dc),0);
    uVar4 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8
                      (uVar7,uVar4,**(undefined4 **)(&UNK_010cefd4 + _UNK_010cf3e0));
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa8);
    *puVar5 = uVar4;
    break;
  case 7:
    piVar8 = *(int **)(&UNK_010cf000 + _UNK_010cf3e4);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    puVar5 = *(undefined4 **)(&UNK_010cf024 + _UNK_010cf3e8);
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74);
    uVar4 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(&UNK_010cf044 + _UNK_010cf3ec),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x74) = uVar4;
    thunk_FUN_00ec5080();
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x88);
    uVar4 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(&UNK_010cf09c + _UNK_010cf3f0),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x88) = uVar4;
    thunk_FUN_00ec5080();
    uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x94);
    uVar4 = thunk_FUN_00f00cdc(*puVar5);
    System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(&UNK_010cf0f4 + _UNK_010cf3f4),0);
    uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x94);
    *puVar5 = uVar4;
    break;
  case 8:
    piVar8 = *(int **)(&UNK_010cf1a8 + _UNK_010cf3f8);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa0);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010cf1cc + _UNK_010cf3fc));
    System_Action_object__int____ctor_1f18be8
              (uVar4,param_1,**(undefined4 **)(&UNK_010cf1ec + _UNK_010cf400),0);
    uVar4 = Rotatelab_GameAction_object__int___op_Addition_23a4d40
                      (uVar7,uVar4,**(undefined4 **)(&UNK_010cf204 + _UNK_010cf404));
    puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa0);
    *puVar5 = uVar4;
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

