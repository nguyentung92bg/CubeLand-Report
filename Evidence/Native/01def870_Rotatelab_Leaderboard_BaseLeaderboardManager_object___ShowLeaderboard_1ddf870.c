/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$ShowLeaderboard
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ShowLeaderboard (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF870* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$ShowLeaderboard
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ShowLeaderboard
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF870* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___ShowLeaderboard_1ddf870(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar3;
  char *pcVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___CalculateBotScores_1ddf544
            (param_1,*(undefined4 *)(iVar1 + 8));
  piVar3 = (int *)param_1[4];
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0xe0))(piVar3,*(undefined4 *)(*piVar3 + 0xe4));
  iVar1 = param_1[9];
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow_10adff0
                    (param_1[4],0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar2,0);
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
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

