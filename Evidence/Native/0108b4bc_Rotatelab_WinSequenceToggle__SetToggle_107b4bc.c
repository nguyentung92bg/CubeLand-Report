/* IL2CPP: Rotatelab.WinSequenceToggle$$SetToggle
void Rotatelab_WinSequenceToggle__SetToggle (Rotatelab_WinSequenceToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinSequenceToggle$$SetToggle
   void Rotatelab_WinSequenceToggle__SetToggle (Rotatelab_WinSequenceToggle_o* __this, const
   MethodInfo* method); */

void Rotatelab_WinSequenceToggle__SetToggle_107b4bc(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0108b59c + 0x108b4d0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b5a0 + 0x108b4e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b5a4 + 0x108b4f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b5a8 + 0x108b4fc));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0108b5ac + 0x108b510);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_0108b5b0 + 0x108b534);
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c(iVar1,*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (iVar1,uVar2 ^ 1,**(undefined4 **)(_UNK_0108b5b4 + 0x108b560));
  uVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(*piVar6 + 0x5c),*puVar5);
                    /* WARNING: Could not recover jumptable at 0x0108b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar3,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

