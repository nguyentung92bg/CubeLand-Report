/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetCycleStartTime
System_DateTime_o Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleStartTime (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, System_DateTime_o currentTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetCycleStartTime
   System_DateTime_o Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleStartTime
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, System_DateTime_o currentTime, const
   MethodInfo* method); */

void Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleStartTime_10b6798
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  char *pcVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010c681c + 0x10c67b8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6820 + 0x10c67cc));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_010c6824 + 0x10c67e0) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__GetStartOfWeek_fc341c(&uStack_20,iVar1,param_3,param_4,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

