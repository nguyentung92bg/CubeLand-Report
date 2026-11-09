/* IL2CPP: Rotatelab.UI.VibrationToggle$$LoadToggle
void Rotatelab_UI_VibrationToggle__LoadToggle (Rotatelab_UI_VibrationToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.VibrationToggle$$LoadToggle
   void Rotatelab_UI_VibrationToggle__LoadToggle (Rotatelab_UI_VibrationToggle_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_VibrationToggle__LoadToggle_112c618(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0113c6ac + 0x113c62c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c6b0 + 0x113c640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113c6b4 + 0x113c64c));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0113c6b8 + 0x113c660);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0113c6bc + 0x113c684));
                    /* WARNING: Could not recover jumptable at 0x0113c6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

