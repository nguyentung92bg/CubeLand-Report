/* IL2CPP: Rotatelab.MetaProgressionBaseStage.<>c__DisplayClass3_0$$<SetSliderValue>b__0
void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_b__0 (Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.MetaProgressionBaseStage.<>c__DisplayClass3_0$$<SetSliderValue>b__0
   void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_b__0
   (Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionBaseStage___c__DisplayClass3_0___SetSliderValue_b__0_fbbd58
               (int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(float *)(param_1 + 8) < *(float *)(iVar2 + 0xc4)) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00fcbdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
  return;
}

