/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<>c__DisplayClass20_0$$<AnimateProgress>b__0
void Rotatelab_WinStreak_WinStreakPopup___c__DisplayClass20_0___AnimateProgress_b__0 (Rotatelab_WinStreak_WinStreakPopup___c__DisplayClass20_0_o* __this, float height, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<>c__DisplayClass20_0$$<AnimateProgress>b__0
   void Rotatelab_WinStreak_WinStreakPopup___c__DisplayClass20_0___AnimateProgress_b__0
   (Rotatelab_WinStreak_WinStreakPopup___c__DisplayClass20_0_o* __this, float height, const
   MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakPopup___c__DisplayClass20_0___AnimateProgress_b__0_10949e4
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_010a4bd0 + 0x10a4a04);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4bd4 + 0x10a4a18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4bd8 + 0x10a4a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4bdc + 0x10a4a30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a4be0 + 0x10a4a3c));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  uStack_28 = 0;
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_WinStreak_WinStreakPopup__GetLevelAtHeight_109474c
                    (*(int *)(param_1 + 8),param_2,&iStack_24,&uStack_28);
  if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_WinStreak_Stage__SetProgress_1091338(iStack_24,uStack_28);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_WinStreak_WinStreakPopup__SetProgress_109463c(*(int *)(param_1 + 8),param_2);
  iVar2 = iStack_24;
  piVar4 = (int *)(param_1 + 0xc);
  iVar5 = *piVar4;
  if (*(int *)(**(int **)(_UNK_010a4be4 + 0x10a4ac4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar5,iVar2,0);
  if (iVar2 != 0) {
    uVar6 = _UNK_010a4bcc;
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      uVar6 = 0x3f800000;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_WinStreak_Stage__SetProgress_1091338(*(int *)(param_1 + 0xc),uVar6);
    *piVar4 = iStack_24;
    thunk_FUN_00ec5080(piVar4);
  }
  if (*(int *)(**(int **)(_UNK_010a4be8 + 0x10a4b48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Utilities__TryChangeValue_int__1663db8
                    ((undefined4 *)(param_1 + 0x10),uVar1,
                     **(undefined4 **)(_UNK_010a4bec + 0x10a4b68));
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x40);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(iVar2,**(undefined4 **)(_UNK_010a4bf0 + 0x10a4bb4),uVar1,0);
  }
  return;
}

