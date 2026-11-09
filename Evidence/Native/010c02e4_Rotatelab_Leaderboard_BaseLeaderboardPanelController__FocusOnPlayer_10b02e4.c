/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$FocusOnPlayer
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__FocusOnPlayer (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$FocusOnPlayer
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__FocusOnPlayer
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__FocusOnPlayer_10b02e4(int param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010c0358 + 0x10c02f8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c035c + 0x10c030c));
    *pcVar1 = '\x01';
  }
  piVar2 = *(int **)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010c0360 + 0x10c0320) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar3,0);
  Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107d058
            (&uStack_18,piVar2,uVar3);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x248))(piVar2,uStack_18,0,*(undefined4 *)(*piVar2 + 0x24c));
                    /* WARNING: Could not recover jumptable at 0x039cbce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x248))(piVar2,uStack_14,1,*(undefined4 *)(*piVar2 + 0x24c));
  return;
}

