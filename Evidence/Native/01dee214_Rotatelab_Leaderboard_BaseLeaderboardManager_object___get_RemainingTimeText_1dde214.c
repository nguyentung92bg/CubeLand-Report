/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$get_RemainingTimeText
System_String_o* Rotatelab_Leaderboard_BaseLeaderboardManager_object___get_RemainingTimeText (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE214* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$get_RemainingTimeText
   System_String_o* Rotatelab_Leaderboard_BaseLeaderboardManager_object___get_RemainingTimeText
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE214* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___get_RemainingTimeText_1dde214
               (int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2 = *(int **)(iVar1 + 0x10);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01dee25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x2a8))(piVar2,*(undefined4 *)(*piVar2 + 0x2ac));
  return;
}

