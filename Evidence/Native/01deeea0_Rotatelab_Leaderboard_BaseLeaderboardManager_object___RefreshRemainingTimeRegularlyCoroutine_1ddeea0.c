/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$RefreshRemainingTimeRegularlyCoroutine
System_Collections_IEnumerator_o* Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshRemainingTimeRegularlyCoroutine (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEEA0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$RefreshRemainingTimeRegularlyCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshRemainingTimeRegularlyCoroutine
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEEA0* method); */

int Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshRemainingTimeRegularlyCoroutine_1ddeea0
              (undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(ushort *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x50) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar1 = thunk_FUN_00f00cdc();
  Rotatelab_Leaderboard_BaseLeaderboardManager__RefreshRemainingTimeRegularlyCoroutine_d__44_object____ctor_1798658
            (iVar1,0,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x54));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

