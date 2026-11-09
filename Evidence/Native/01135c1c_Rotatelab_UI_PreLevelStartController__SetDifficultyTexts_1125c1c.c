/* IL2CPP: Rotatelab.UI.PreLevelStartController$$SetDifficultyTexts
void Rotatelab_UI_PreLevelStartController__SetDifficultyTexts (Rotatelab_UI_PreLevelStartController_o* __this, int32_t difficultyIndex, float multiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$SetDifficultyTexts
   void Rotatelab_UI_PreLevelStartController__SetDifficultyTexts
   (Rotatelab_UI_PreLevelStartController_o* __this, int32_t difficultyIndex, float multiplier, const
   MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__SetDifficultyTexts_1125c1c
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01135d64 + 0x1135c40);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01135d68 + 0x1135c54));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_UI_PreLevelStartController__GetDifficultyText_1125f88(param_2);
  uStack_24 = param_3;
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01135d6c + 0x1135c78) + 0x3c),&uStack_24);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01135d70 + 0x1135c94),uVar2,0);
  piVar5 = *(int **)(param_1 + 0x38);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,iVar1,*(undefined4 *)(*piVar5 + 0x2b4));
  piVar5 = *(int **)(param_1 + 0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_String__ToUpper_2a0fee8(iVar1,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2b4));
  piVar5 = *(int **)(param_1 + 0x3c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
  piVar5 = *(int **)(param_1 + 0x4c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
  return;
}

