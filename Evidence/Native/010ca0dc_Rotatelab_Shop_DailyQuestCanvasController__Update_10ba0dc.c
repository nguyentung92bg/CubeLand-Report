/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Update
void Rotatelab_Shop_DailyQuestCanvasController__Update (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Update
   void Rotatelab_Shop_DailyQuestCanvasController__Update
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__Update_10ba0dc(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  double dVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return;
  }
  pcVar2 = (char *)(_UNK_010ca390 + 0x10ca104);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca394 + 0x10ca118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca398 + 0x10ca124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca39c + 0x10ca130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3a0 + 0x10ca13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3a4 + 0x10ca148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3a8 + 0x10ca154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3ac + 0x10ca160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3b0 + 0x10ca16c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca3b4 + 0x10ca178));
    *pcVar2 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010ca3b8 + 0x10ca190) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_28,0);
  System_DateTime__op_Subtraction_2b4c068(&uStack_20,uStack_24,uVar6,uVar3,uStack_28,uStack_24,0);
  if (*(int *)(**(int **)(_UNK_010ca3bc + 0x10ca1e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar9 = (double)System_TimeSpan__get_TotalSeconds_2b89cf0(&uStack_20,0);
  uVar6 = uStack_1c;
  uVar3 = uStack_20;
  if (dVar9 <= 0.0) {
    piVar1 = *(int **)(_UNK_010ca3c0 + 0x10ca2cc);
    iVar5 = *(int *)(param_1 + 0x48);
    iVar4 = *piVar1;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar1;
    }
    puVar8 = *(undefined4 **)(iVar4 + 0x5c);
    iVar7 = puVar8[5];
    if (iVar7 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar8 = *(undefined4 **)(*piVar1 + 0x5c);
      }
      uVar3 = *puVar8;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ca3c4 + 0x10ca318));
      System_Action_object____ctor_1f11414
                (iVar7,uVar3,**(undefined4 **)(_UNK_010ca3c8 + 0x10ca338),0);
      piVar1 = (int *)(*(int *)(*piVar1 + 0x5c) + 0x14);
      *piVar1 = iVar7;
      thunk_FUN_00ec5080(piVar1,iVar7);
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___ForEach_267e6f0
              (iVar5,iVar7,**(undefined4 **)(_UNK_010ca3cc + 0x10ca370));
    Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuestCompletely_10ba6d4(param_1);
    Rotatelab_Shop_DailyQuestCanvasController__InitializeDailyQuestSystem_10b9cac(param_1);
  }
  else {
    if (*(int *)(**(int **)(_UNK_010ca3d0 + 0x10ca21c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = 0;
    uVar3 = Rotatelab_Extensions__GetTimeText_fc3638(uVar3,uVar6,0);
    puVar8 = *(undefined4 **)(_UNK_010ca3d4 + 0x10ca258);
    while( true ) {
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= iVar4) break;
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar1 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (*(int *)(param_1 + 0x48),iVar4,*puVar8);
      if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar1 + 0x2b0))(piVar1,uVar3,*(undefined4 *)(*piVar1 + 0x2b4));
      iVar4 = iVar4 + 1;
    }
  }
  return;
}

