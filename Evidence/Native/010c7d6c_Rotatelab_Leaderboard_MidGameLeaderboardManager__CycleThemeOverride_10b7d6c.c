/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$CycleThemeOverride
void Rotatelab_Leaderboard_MidGameLeaderboardManager__CycleThemeOverride (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$CycleThemeOverride
   void Rotatelab_Leaderboard_MidGameLeaderboardManager__CycleThemeOverride (const MethodInfo*
   method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__CycleThemeOverride_10b7d6c(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  pcVar2 = (char *)(_UNK_010c7e80 + 0x10c7d7c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7e84 + 0x10c7d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7e88 + 0x10c7d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7e8c + 0x10c7da8));
    *pcVar2 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010c7e90 + 0x10c7dbc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (iVar3,**(undefined4 **)(_UNK_010c7e94 + 0x10c7de0));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (iVar3,(iVar1 + 1) % 3,**(undefined4 **)(_UNK_010c7e98 + 0x10c7e18));
  piVar4 = *(int **)(*(int *)(*piVar5 + 0x5c) + 4);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  if (**(int **)(*piVar5 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(**(int **)(*piVar5 + 0x5c) + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

