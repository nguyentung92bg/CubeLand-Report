/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$ForceEndCurrentCycleNow
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ForceEndCurrentCycleNow (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDED50* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$ForceEndCurrentCycleNow
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ForceEndCurrentCycleNow
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDED50* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ForceEndCurrentCycleNow_1dded50
               (int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01deee38 + 0x1deed6c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01deee3c + 0x1deed80));
    *pcVar2 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 8) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (*(int *)(**(int **)(_UNK_01deee40 + 0x1deede8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_20,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar1 + 0x10) = uStack_20;
    *(undefined4 *)(iVar1 + 0x14) = uStack_1c;
    Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh_1dde7b4
              (param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x24));
  }
  return;
}

