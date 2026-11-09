/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_CurrentTheme
int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$get_CurrentTheme
   int32_t Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

int Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_010c8258 + 0x10c81bc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c825c + 0x10c81d0));
    *pcVar5 = '\x01';
  }
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  if (*(int *)(**(int **)(_UNK_010c8260 + 0x10c823c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_010c7d44 + 0x10c7bc8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d48 + 0x10c7bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d4c + 0x10c7be8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d50 + 0x10c7bf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7d54 + 0x10c7c00));
    *pcVar5 = '\x01';
  }
  piVar4 = *(int **)(_UNK_010c7d58 + 0x10c7c18);
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  puVar6 = *(undefined4 **)(_UNK_010c7d5c + 0x10c7c44);
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4),*puVar6);
  if (iVar1 < 1) {
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_010c7d60 + 0x10c7ca4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTime__get_Now_2b4a124(&uStack_20,0);
    }
    else {
      uStack_20 = *(undefined4 *)(iVar3 + 8);
      uStack_1c = *(undefined4 *)(iVar3 + 0xc);
    }
    uStack_18 = uStack_20;
    uStack_14 = uStack_1c;
    if (*(int *)(**(int **)(_UNK_010c7d64 + 0x10c7cd4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_18,0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010c7d68 + 0x10c7d08));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x8c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_SatoriMidGameLeaderboardConfigFlag__IsPirateDay_fe8658
                      (*(int *)(iVar3 + 0x8c),uVar2,0);
  }
  else {
    iVar3 = *piVar4;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar4;
    }
    iVar3 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4),*puVar6);
    iVar3 = iVar3 + -1;
  }
  return iVar3;
}

