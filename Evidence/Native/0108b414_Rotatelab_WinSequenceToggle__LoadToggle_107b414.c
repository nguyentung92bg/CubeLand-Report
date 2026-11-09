/* IL2CPP: Rotatelab.WinSequenceToggle$$LoadToggle
void Rotatelab_WinSequenceToggle__LoadToggle (Rotatelab_WinSequenceToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinSequenceToggle$$LoadToggle
   void Rotatelab_WinSequenceToggle__LoadToggle (Rotatelab_WinSequenceToggle_o* __this, const
   MethodInfo* method); */

void Rotatelab_WinSequenceToggle__LoadToggle_107b414(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0108b4a8 + 0x108b428);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b4ac + 0x108b43c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b4b0 + 0x108b448));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108b4b4 + 0x108b45c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0108b4b8 + 0x108b480));
                    /* WARNING: Could not recover jumptable at 0x0108b4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

