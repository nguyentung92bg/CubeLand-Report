/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$UpdateHealthTexts
void Rotatelab_Scripts_ColorBoxController__UpdateHealthTexts (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$UpdateHealthTexts
   void Rotatelab_Scripts_ColorBoxController__UpdateHealthTexts
   (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__UpdateHealthTexts_ffc770(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined4 uVar6;
  
  pcVar1 = (char *)(_UNK_0100c814 + 0x100c784);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100c818 + 0x100c798));
    *pcVar1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x28);
  uVar2 = 0;
  puVar5 = *(undefined4 **)(_UNK_0100c81c + 0x100c7b8);
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar4 + 0x10 + uVar2 * 4);
    if (iVar3 == 0) break;
    uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(iVar3,*puVar5,uVar6,0);
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

