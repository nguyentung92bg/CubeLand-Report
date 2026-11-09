/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$UpdateHealthTexts
void Rotatelab_Scripts_HiddenChestController__UpdateHealthTexts (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HiddenChestController$$UpdateHealthTexts
   void Rotatelab_Scripts_HiddenChestController__UpdateHealthTexts
   (Rotatelab_Scripts_HiddenChestController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_HiddenChestController__UpdateHealthTexts_100ff34(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_0101ffa0 + 0x101ff48);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101ffa4 + 0x101ff5c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x54),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (*(int *)(param_1 + 0x4c),**(undefined4 **)(_UNK_0101ffa8 + 0x101ff90),uVar2,0,0,0,0,0,0
             ,0);
  return;
}

