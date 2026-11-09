/* IL2CPP: Rotatelab.Scripts.StopSignController$$UpdateHealthText
void Rotatelab_Scripts_StopSignController__UpdateHealthText (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$UpdateHealthText
   void Rotatelab_Scripts_StopSignController__UpdateHealthText
   (Rotatelab_Scripts_StopSignController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__UpdateHealthText_104de4c(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_0105deb8 + 0x105de60);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105debc + 0x105de74));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x48),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_0105dec0 + 0x105dea8),uVar2,0,0,0,0,0,0
             ,0);
  return;
}

