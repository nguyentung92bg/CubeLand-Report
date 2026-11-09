/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$UpdateHealthTexts
void Rotatelab_Scripts_IceWrapperController__UpdateHealthTexts (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$UpdateHealthTexts
   void Rotatelab_Scripts_IceWrapperController__UpdateHealthTexts
   (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__UpdateHealthTexts_10111c4(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  undefined4 uVar6;
  
  pcVar1 = (char *)(_UNK_01021268 + 0x10211d8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102126c + 0x10211ec));
    *pcVar1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x24);
  uVar2 = 0;
  puVar5 = *(undefined4 **)(_UNK_01021270 + 0x102120c);
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
    uVar6 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(iVar3,*puVar5,uVar6,0);
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

