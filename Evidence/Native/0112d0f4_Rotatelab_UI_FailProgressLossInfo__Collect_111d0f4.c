/* IL2CPP: Rotatelab.UI.FailProgressLossInfo$$Collect
Rotatelab_UI_FailProgressLossInfo_o Rotatelab_UI_FailProgressLossInfo__Collect (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailProgressLossInfo$$Collect
   Rotatelab_UI_FailProgressLossInfo_o Rotatelab_UI_FailProgressLossInfo__Collect (const MethodInfo*
   method); */

uint Rotatelab_UI_FailProgressLossInfo__Collect_111d0f4(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_0112d1f4 + 0x112d104);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d1f8 + 0x112d118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d1fc + 0x112d124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d200 + 0x112d130));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112d204 + 0x112d144));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Leaderboard_MidGameLeaderboardManager__WouldLoseStreakOnFail_10b7a3c(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112d208 + 0x112d174));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_WinStreak_WinStreakManager__WouldLoseProgressOnFail_10933cc(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112d20c + 0x112d1a4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c(iVar1,0);
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = 0x100;
  }
  if (iVar1 == 1) {
    uVar5 = uVar5 | 0x10000;
  }
  return uVar5 | (~(uVar2 & uVar3) | (uint)(iVar1 != 1)) & uVar2;
}

