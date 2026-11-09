/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetCycleStartTime
System_DateTime_o Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleStartTime (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, System_DateTime_o currentTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetCycleStartTime
   System_DateTime_o Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleStartTime
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, System_DateTime_o currentTime, const
   MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleStartTime_10b73f4
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010c746c + 0x10c7410);
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7470 + 0x10c7428));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010c7474 + 0x10c743c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_20,&uStack_18,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

