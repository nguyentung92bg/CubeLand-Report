/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetCycleEndTime
System_DateTime_o Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleEndTime (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, System_DateTime_o startTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetCycleEndTime
   System_DateTime_o Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleEndTime
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, System_DateTime_o startTime, const
   MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__GetCycleEndTime_10b7478
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010c751c + 0x10c7494);
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7520 + 0x10c74ac));
    *pcVar1 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010c7524 + 0x10c74c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_20,&uStack_18,0);
  System_DateTime__AddDays_2b48944(&uStack_28,&uStack_20,0,0x3ff00000,0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

