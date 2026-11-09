/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$RefreshPlayerRankChangedNotification
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshPlayerRankChangedNotification (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF8D8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$RefreshPlayerRankChangedNotification
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshPlayerRankChangedNotification
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF8D8* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshPlayerRankChangedNotification_1ddf8d8
               (int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Leaderboard_BaseLeaderboardPanelController__get_HasPlayerRankChangedSinceLastShow_10adff0
                    (*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar1,0,extraout_r3,unaff_r4,
                       unaff_r5);
    *pcVar3 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

