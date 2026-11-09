/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetTheme
int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__GetTheme (Rotatelab_Leaderboard_CycleData_o* cycle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetTheme
   int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__GetTheme
   (Rotatelab_Leaderboard_CycleData_o* cycle, const MethodInfo* method); */

int Rotatelab_Leaderboard_MidGameLeaderboardManager__GetTheme_10b7bb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_010c7d44 + 0x10c7bc8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d48 + 0x10c7bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d4c + 0x10c7be8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d50 + 0x10c7bf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d54 + 0x10c7c00));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010c7d58 + 0x10c7c18);
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar5 = *(undefined4 **)(_UNK_010c7d5c + 0x10c7c44);
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4),*puVar5);
  if (iVar1 < 1) {
    if (param_1 == 0) {
      if (*(int *)(**(int **)(_UNK_010c7d60 + 0x10c7ca4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_20,0);
    }
    else {
      uStack_20 = *(undefined4 *)(param_1 + 8);
      uStack_1c = *(undefined4 *)(param_1 + 0xc);
    }
    uStack_18 = uStack_20;
    uStack_14 = uStack_1c;
    if (*(int *)(**(int **)(_UNK_010c7d64 + 0x10c7cd4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_18,0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010c7d68 + 0x10c7d08));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag__IsPirateDay_fe8658
                      (*(int *)(iVar1 + 0x8c),uVar2,0);
  }
  else {
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4),*puVar5);
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

