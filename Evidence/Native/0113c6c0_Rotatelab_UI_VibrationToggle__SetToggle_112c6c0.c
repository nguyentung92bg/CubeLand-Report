/* IL2CPP: Rotatelab.UI.VibrationToggle$$SetToggle
void Rotatelab_UI_VibrationToggle__SetToggle (Rotatelab_UI_VibrationToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.VibrationToggle$$SetToggle
   void Rotatelab_UI_VibrationToggle__SetToggle (Rotatelab_UI_VibrationToggle_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_VibrationToggle__SetToggle_112c6c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0113c7a0 + 0x113c6d4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c7a4 + 0x113c6e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c7a8 + 0x113c6f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c7ac + 0x113c700));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0113c7b0 + 0x113c714);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_0113c7b4 + 0x113c738);
  iVar1 = **(int **)(iVar1 + 0x5c);
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c(iVar1,*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (iVar1,uVar2 ^ 1,**(undefined4 **)(_UNK_0113c7b8 + 0x113c764));
  uVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(*piVar6 + 0x5c),*puVar5);
                    /* WARNING: Could not recover jumptable at 0x0113c79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar3,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

