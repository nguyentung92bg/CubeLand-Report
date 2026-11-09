/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$Apply
void Rotatelab_Leaderboard_MidGameThemedText__Apply (Rotatelab_Leaderboard_MidGameThemedText_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedText$$Apply
   void Rotatelab_Leaderboard_MidGameThemedText__Apply (Rotatelab_Leaderboard_MidGameThemedText_o*
   __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedText__Apply_10b9078(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_010c910c + 0x10c908c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9110 + 0x10c90a0));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(param_1 + 0x10);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c9114 + 0x10c90b4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8(iVar1);
  iVar2 = 0x18;
  if (iVar1 == 1) {
    iVar2 = 0x14;
  }
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010c9108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2b0))
            (piVar4,*(undefined4 *)(param_1 + iVar2),*(undefined4 *)(*piVar4 + 0x2b4));
  return;
}

