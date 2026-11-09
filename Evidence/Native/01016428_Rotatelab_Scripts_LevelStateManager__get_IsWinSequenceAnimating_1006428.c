/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$get_IsWinSequenceAnimating
bool Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$get_IsWinSequenceAnimating
   bool Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_010164b4 + 0x101643c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010164b8 + 0x1016450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010164bc + 0x101645c));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    return 0;
  }
  piVar5 = *(int **)(_UNK_010164c0 + 0x101647c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  piVar5 = (int *)**(int **)(iVar1 + 0x5c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(**(int **)(_UNK_010164c4 + 0x10164a0) + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  if ((char)piVar5[7] != '\0') {
    return (uint)(*(char *)((int)piVar5 + 0x1d) != '\0');
  }
  pcVar3 = *(code **)(*piVar5 + 0xe0);
  uVar4 = *(undefined4 *)(*piVar5 + 0xe4);
  uVar2 = (*pcVar3)(piVar5,uVar4,pcVar3,uVar4,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  *(char *)((int)piVar5 + 0x1d) = (char)uVar2;
  *(undefined1 *)(piVar5 + 7) = 1;
  return uVar2;
}

