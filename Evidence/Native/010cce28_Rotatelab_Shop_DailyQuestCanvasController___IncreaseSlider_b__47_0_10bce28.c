/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$<IncreaseSlider>b__47_0
void Rotatelab_Shop_DailyQuestCanvasController___IncreaseSlider_b__47_0 (Rotatelab_Shop_DailyQuestCanvasController_o* __this, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$<IncreaseSlider>b__47_0
   void Rotatelab_Shop_DailyQuestCanvasController___IncreaseSlider_b__47_0
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, float v, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController___IncreaseSlider_b__47_0_10bce28
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_010cd068 + 0x10cce44);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd06c + 0x10cce58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd070 + 0x10cce64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd074 + 0x10cce70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd078 + 0x10cce7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd07c + 0x10cce88));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x60);
  iStack_24 = 0;
  uStack_28 = 0;
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x238))(piVar5,param_2,*(undefined4 *)(*piVar5 + 0x23c));
  if (*(int *)(**(int **)(_UNK_010cd080 + 0x10cced0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iStack_24 = System_Convert__ToInt32_2b1dc64(param_2,0);
  piVar5 = *(int **)(param_1 + 100);
  uVar1 = System_Int32__ToString_2b6b9ec(&iStack_24,0);
  if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xc4);
  iVar3 = 0;
  uVar2 = System_Single__ToString_2b8501c(&uStack_28,0);
  uVar1 = System_String__Concat_2a0b574(uVar1,**(undefined4 **)(_UNK_010cd084 + 0x10ccf40),uVar2,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar1,*(undefined4 *)(*piVar5 + 0x2b4));
  iVar7 = 0;
  puVar9 = *(undefined4 **)(_UNK_010cd088 + 0x10ccf80);
  puVar8 = *(undefined4 **)(_UNK_010cd08c + 0x10ccf88);
  while( true ) {
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar3) {
      return;
    }
    if (*(int *)(param_1 + 0x5c) == 0) break;
    iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar3,*puVar9);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar6 + 8) + iVar7;
    iVar6 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestCollectedWeeklyChestCount_10b9320
                      ();
    if ((iVar7 <= iStack_24) && (iVar6 + -1 < iVar3)) {
      iVar6 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestCollectedWeeklyChestCount_10b9320
                        ();
      Rotatelab_Shop_DailyQuestCanvasController__set_DailyQuestCollectedWeeklyChestCount_10b9374
                (iVar6 + 1);
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x4c),iVar3,*puVar8);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Shop_DailyQuestChest__Collect_10bd090(iVar6);
    }
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

