/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager.<>c__DisplayClass27_2$$<BuildFillSequence>b__2
void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_2___BuildFillSequence_b__2 (Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager.<>c__DisplayClass27_2$$<BuildFillSequence>b__2
   void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_2___BuildFillSequence_b__2
   (Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_2_o* __this, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_2___BuildFillSequence_b__2_10a90c0
               (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_r6;
  int *piVar6;
  
  pcVar3 = (char *)(_UNK_010b91c0 + 0x10b90d4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b91c4 + 0x10b90e8));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0x7c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0x38);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(_UNK_010b91c8 + 0x10b9154);
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(iVar4,0,*piVar6);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0x7c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(iVar4 + 0x3c);
  iVar4 = *(int *)(param_1 + 8);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar6;
  iVar1 = piVar5[5];
  if (iVar1 != 0) {
    iVar4 = (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),iVar4,*(undefined4 *)(iVar1 + 0x14),
                       *(code **)(iVar1 + 0xc),unaff_r4,unaff_r5,unaff_r6);
  }
  piVar6 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24));
  if ((char)piVar5[7] == '\0') {
    iVar1 = (**(code **)(*piVar5 + 0xe0))(piVar5,*(undefined4 *)(*piVar5 + 0xe4));
    piVar5[8] = iVar1;
    *(undefined1 *)(piVar5 + 7) = 1;
  }
  else {
    iVar1 = piVar5[8];
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar6 + 0x100))(piVar6,iVar1,iVar4,*(undefined4 *)(*piVar6 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*piVar5 + 0xe8))(piVar5,iVar4,*(undefined4 *)(*piVar5 + 0xec));
    iVar1 = piVar5[6];
    piVar5[8] = iVar4;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),iVar4,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

