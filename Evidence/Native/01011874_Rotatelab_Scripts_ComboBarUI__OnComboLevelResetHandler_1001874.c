/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboLevelResetHandler
void Rotatelab_Scripts_ComboBarUI__OnComboLevelResetHandler (Rotatelab_Scripts_ComboBarUI_o* __this, int32_t newStartingLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboBarUI$$OnComboLevelResetHandler
   void Rotatelab_Scripts_ComboBarUI__OnComboLevelResetHandler (Rotatelab_Scripts_ComboBarUI_o*
   __this, int32_t newStartingLevel, const MethodInfo* method); */

void Rotatelab_Scripts_ComboBarUI__OnComboLevelResetHandler_1001874(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01011910 + 0x1011890);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01011914 + 0x10118a4));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(param_1 + 0x14);
  uStack_14 = param_2;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01011918 + 0x10118c0) + 0x24),&uStack_14);
  uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0101191c + 0x10118dc),uVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x2b0))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x2b4));
  return;
}

