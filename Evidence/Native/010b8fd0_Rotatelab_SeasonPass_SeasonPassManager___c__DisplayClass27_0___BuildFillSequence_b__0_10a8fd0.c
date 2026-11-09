/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager.<>c__DisplayClass27_0$$<BuildFillSequence>b__0
void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_0___BuildFillSequence_b__0 (Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager.<>c__DisplayClass27_0$$<BuildFillSequence>b__0
   void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_0___BuildFillSequence_b__0
   (Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassManager___c__DisplayClass27_0___BuildFillSequence_b__0_10a8fd0
               (int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_r4;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_010b904c + 0x10b8fe4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9050 + 0x10b8ff8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x7c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = *(int **)(iVar3 + 0x38);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = **(int **)(_UNK_010b9054 + 0x10b9040);
  iVar3 = piVar4[5];
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = (**(code **)(iVar3 + 0xc))
                      (*(undefined4 *)(iVar3 + 0x20),0,*(undefined4 *)(iVar3 + 0x14),
                       *(code **)(iVar3 + 0xc),unaff_r4,unaff_r5);
  }
  piVar1 = (int *)FUN_013a76ec(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x24));
  if ((char)piVar4[7] == '\0') {
    iVar3 = (**(code **)(*piVar4 + 0xe0))(piVar4,*(undefined4 *)(*piVar4 + 0xe4));
    piVar4[8] = iVar3;
    *(undefined1 *)(piVar4 + 7) = 1;
  }
  else {
    iVar3 = piVar4[8];
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = (**(code **)(*piVar1 + 0x100))(piVar1,iVar3,iVar6,*(undefined4 *)(*piVar1 + 0x104));
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0xe8))(piVar4,iVar6,*(undefined4 *)(*piVar4 + 0xec));
    iVar3 = piVar4[6];
    piVar4[8] = iVar6;
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),iVar6,*(undefined4 *)(iVar3 + 0x14));
      return;
    }
  }
  return;
}

