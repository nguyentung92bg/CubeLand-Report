/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$SetProgress
void Rotatelab_WinStreak_WinStreakPopup__SetProgress (Rotatelab_WinStreak_WinStreakPopup_o* __this, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$SetProgress
   void Rotatelab_WinStreak_WinStreakPopup__SetProgress (Rotatelab_WinStreak_WinStreakPopup_o*
   __this, float height, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup__SetProgress_109463c(int param_1,float param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  undefined8 unaff_d8;
  
  pcVar2 = (char *)(_UNK_010a46fc + 0x10a4658);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4700 + 0x10a466c));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_010a4704 + 0x10a4684) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar3,param_2,0);
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0xc),
                                     (byte)(in_fpscr >> 0x16) & 3);
  Rotatelab_Extensions__SetSizeDeltaY_fc2054
            (*(undefined4 *)(param_1 + 0x30),
             *(float *)(param_1 + 0x34) + (*(float *)(param_1 + 0x2c) * fVar4 - param_2),0);
  piVar1 = *(int **)(param_1 + 0x1c);
  Rotatelab_ScrollViewFocusFunctions__CalculateFocusedScrollPosition_107d058
            (&stack0xffffffe8,piVar1,*(undefined4 *)(param_1 + 0x3c));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar1 + 0x248))(piVar1,(int)unaff_d8,0,*(undefined4 *)(*piVar1 + 0x24c));
                    /* WARNING: Could not recover jumptable at 0x039cbce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x248))
            (piVar1,(int)((ulonglong)unaff_d8 >> 0x20),1,*(undefined4 *)(*piVar1 + 0x24c));
  return;
}

