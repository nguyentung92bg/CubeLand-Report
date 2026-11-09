/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<>c$$<AnimateProgressAsync>b__19_0
bool Rotatelab_WinStreak_WinStreakPopup___c___AnimateProgressAsync_b__19_0 (Rotatelab_WinStreak_WinStreakPopup___c_o* __this, Rotatelab_WinStreak_WinStreakInfoController_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<>c$$<AnimateProgressAsync>b__19_0
   bool Rotatelab_WinStreak_WinStreakPopup___c___AnimateProgressAsync_b__19_0
   (Rotatelab_WinStreak_WinStreakPopup___c_o* __this, Rotatelab_WinStreak_WinStreakInfoController_o*
   info, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup___c___AnimateProgressAsync_b__19_0_10949a4
               (undefined4 param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036121b0 + 0x3612140);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036121b4 + 0x3612154),0,extraout_r2,extraout_r3,unaff_r4)
    ;
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036121b8 + 0x3612180);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036121bc + 0x3612190);
      *(code **)(iRam036121c0 + 0x36121a0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036121a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

