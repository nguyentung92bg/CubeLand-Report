/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Start
void Rotatelab_Shop_DailyQuestCanvasController__Start (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Start
   void Rotatelab_Shop_DailyQuestCanvasController__Start
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__Start_10b9a20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_010c9ad8 + 0x10c9a38);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9adc + 0x10c9a4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9ae0 + 0x10c9a58));
    *pcVar4 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__Start_10cc570(param_1,0);
  piVar5 = *(int **)(_UNK_010c9ae4 + 0x10c9a78);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar1,*(undefined4 *)(param_1 + 0x14),0,0,**(undefined4 **)(_UNK_010c9ae8 + 0x10c9abc))
  ;
  pcVar4 = (char *)(_UNK_010c9c84 + 0x10c9b00);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9c88 + 0x10c9b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9c8c + 0x10c9b20));
    *pcVar4 = '\x01';
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    if (*(int *)(**(int **)(_UNK_010c9c90 + 0x10c9be4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    piVar5 = *(int **)(_UNK_010c9c94 + 0x10c9c14);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar5;
    }
    if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x10) <= iVar1) {
      Rotatelab_Shop_DailyQuestCanvasController__InitializeDailyQuestSystem_10b9cac(param_1);
      goto LAB_010c9c50;
    }
    if (*(char *)(param_1 + 0x7d) == '\0') goto LAB_010c9c50;
  }
  iVar1 = Rotatelab_Shop_DailyQuestCanvasController__get_IsDailyQuestForcedShowed_10b9494();
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_010c9c98 + 0x10c9b4c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    piVar5 = *(int **)(_UNK_010c9c9c + 0x10c9b7c);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar5;
    }
    if (*(int *)(*(int *)(iVar3 + 0x5c) + 0xc) <= iVar1) {
      iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0xa8) == '\0') {
        return;
      }
    }
    Rotatelab_Shop_DailyQuestCanvasController__ShowButtonTutorial_10b9ffc(param_1);
    Rotatelab_Shop_DailyQuestCanvasController__set_IsDailyQuestForcedShowed_10b94e8(1);
  }
LAB_010c9c50:
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar6 = *(char *)(param_1 + 0x7d) != '\0';
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),bVar6,0);
    *pcVar4 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,bVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

