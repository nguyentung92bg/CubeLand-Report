/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$InitializeDailyQuestSystem
void Rotatelab_Shop_DailyQuestCanvasController__InitializeDailyQuestSystem (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$InitializeDailyQuestSystem
   void Rotatelab_Shop_DailyQuestCanvasController__InitializeDailyQuestSystem
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__InitializeDailyQuestSystem_10b9cac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010c9fb8 + 0x10c9cc4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fbc + 0x10c9cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fc0 + 0x10c9ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fc4 + 0x10c9cf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fc8 + 0x10c9cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fcc + 0x10c9d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fd0 + 0x10c9d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fd4 + 0x10c9d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9fd8 + 0x10c9d2c));
    *pcVar7 = '\x01';
  }
  iVar6 = *(int *)(**(int **)(_UNK_010c9fdc + 0x10c9d44) + 0x74);
  *(undefined1 *)(param_1 + 0x7d) = 1;
  if (iVar6 == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_30,0);
  uVar1 = uStack_2c;
  uVar5 = uStack_30;
  piVar9 = *(int **)(_UNK_010c9fe0 + 0x10c9d70);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uVar5,uVar1,0);
  iVar2 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(uVar5,uVar1,0);
  puVar8 = *(undefined4 **)(_UNK_010c9fe4 + 0x10c9dc0);
  iVar3 = Rotatelab_Save_SaveManager__HasKey_1082f48(*puVar8,0);
  if (iVar3 != 0) {
    uVar4 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar8,0,0);
    puVar8 = *(undefined4 **)(_UNK_010c9fe8 + 0x10c9dec);
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    iVar3 = Rotatelab_Save_SaveManager__GetInt_1078ed8(*puVar8,0,0);
    *(int *)(param_1 + 0x78) = iVar3;
    if (*(int *)(param_1 + 0x74) == iVar6) {
      if (iVar3 != iVar2) {
        Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuest_10ba6f8(param_1);
      }
    }
    else {
      Rotatelab_Shop_DailyQuestCanvasController__ResetDailyQuestCompletely_10ba6d4(param_1);
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar10 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__IsBetweenDays_fc3504(uVar5,uVar1,uVar4,uVar10,0);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x7c) = 0;
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x44),0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x44),1,0);
    Rotatelab_Save_SaveManager__SetInt_1078f38(**(undefined4 **)(_UNK_010c9fec + 0x10c9e9c),iVar6,0)
    ;
    Rotatelab_Save_SaveManager__SetInt_1078f38(**(undefined4 **)(_UNK_010c9ff0 + 0x10c9eb4),iVar2,0)
    ;
    Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuestEndDate_10ba798(&uStack_30,param_1);
    *(undefined4 *)(param_1 + 0x88) = uStack_30;
    *(undefined4 *)(param_1 + 0x8c) = uStack_2c;
    Rotatelab_Shop_DailyQuestCanvasController__SetWeeklyContents_10ba91c(param_1);
    Rotatelab_Shop_DailyQuestCanvasController__SetDailyContents_10bac10(param_1);
    Rotatelab_Shop_DailyQuestCanvasController__GenerateDailyQuests_10bb768(param_1);
    iVar6 = Rotatelab_Shop_DailyQuestCanvasController__get_IsDailyQuestForcedShowed_10b9494();
    if (iVar6 == 0) {
      if (*(int *)(**(int **)(_UNK_010c9ff4 + 0x10c9f00) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
      iVar6 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar5,0);
      piVar9 = *(int **)(_UNK_010c9ff8 + 0x10c9f30);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar9;
      }
      if (*(int *)(*(int *)(iVar2 + 0x5c) + 0xc) <= iVar6) {
        iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iVar6 + 0xa8) == '\0') {
          return;
        }
      }
      Rotatelab_Shop_DailyQuestCanvasController__ShowButtonTutorial_10b9ffc(param_1);
      Rotatelab_Shop_DailyQuestCanvasController__set_IsDailyQuestForcedShowed_10b94e8(1);
    }
  }
  return;
}

