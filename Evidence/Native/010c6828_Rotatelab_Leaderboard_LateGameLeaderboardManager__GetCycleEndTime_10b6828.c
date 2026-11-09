/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetCycleEndTime
System_DateTime_o Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleEndTime (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, System_DateTime_o startTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetCycleEndTime
   System_DateTime_o Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleEndTime
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, System_DateTime_o startTime, const
   MethodInfo* method); */

void Rotatelab_Leaderboard_LateGameLeaderboardManager__GetCycleEndTime_10b6828
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  char *pcVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010c68f8 + 0x10c6848);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c68fc + 0x10c685c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6900 + 0x10c6868));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = *(int *)(**(int **)(_UNK_010c6904 + 0x10c6880) + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  Rotatelab_Extensions__GetStartOfWeek_fc341c(&uStack_20,iVar1,param_3,param_4,0);
  if (*(int *)(**(int **)(_UNK_010c6908 + 0x10c68b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__AddDays_2b48944(&uStack_28,&uStack_20,0,0x401c0000,0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

