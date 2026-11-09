/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$ResetDailyQuestCompletely
void Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuestCompletely (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$ResetDailyQuestCompletely
   void Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuestCompletely
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuestCompletely_10ba6d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  
  Rotatelab_Shop_DailyQuestCanvasController__set_DailyQuestWeeklyValue_10b92c8(0);
  Rotatelab_Shop_DailyQuestCanvasController__set_DailyQuestCollectedWeeklyChestCount_10b9374(0);
  pcVar7 = (char *)(_UNK_010ca784 + 0x10ca70c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca788 + 0x10ca720));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca78c + 0x10ca72c));
    *pcVar7 = '\x01';
  }
  Rotatelab_Shop_DailyQuestCanvasController__set_SavedDailyQuests_10b943c
            (**(undefined4 **)(_UNK_010ca790 + 0x10ca740));
  iVar6 = *(int *)(param_1 + 0x70);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar5 < 1) {
    return;
  }
  puVar1 = *(undefined4 **)(iVar6 + 8);
  if (puVar1 == (undefined4 *)0x0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6df8 + 0x2ba6d44),0,iVar5,0,unaff_r4,unaff_r5);
    uVar3 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6dfc + 0x2ba6d58));
    System_ArgumentNullException___ctor_2b08d00(uVar3,uVar4,0);
  }
  else {
    if (iVar5 < 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e00 + 0x2ba6d78),0,iVar5,0,unaff_r4,unaff_r5);
      uVar3 = thunk_FUN_00f00cdc();
      uVar4 = *(undefined4 *)(_UNK_02ba6e04 + 0x2ba6d8c);
    }
    else {
      iVar6 = FUN_00ed20b8(puVar1,0);
      if (iVar6 < 1) {
        iVar2 = System_Array__get_Length_2b8bcdc(puVar1);
        if (-iVar6 <= iVar2 - iVar5) {
          iVar2 = FUN_00f943a0(*puVar1);
          FUN_00f88e5c((int)puVar1 + iVar2 * -iVar6 + 0x10,iVar2 * iVar5);
          return;
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e14 + 0x2ba6db8));
        uVar3 = thunk_FUN_00f00cdc();
        uVar4 = *(undefined4 *)(_UNK_02ba6e18 + 0x2ba6dcc);
      }
      else {
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e0c + 0x2ba6d98));
        uVar3 = thunk_FUN_00f00cdc();
        uVar4 = *(undefined4 *)(_UNK_02ba6e10 + 0x2ba6dac);
      }
    }
    uVar4 = thunk_FUN_00f23fd0(uVar4);
    System_IndexOutOfRangeException___ctor_2b69538(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba6e08 + 0x2ba6de8));
  func_0x00ec3920(uVar3,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

