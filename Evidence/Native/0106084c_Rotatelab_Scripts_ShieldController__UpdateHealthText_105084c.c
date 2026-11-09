/* IL2CPP: Rotatelab.Scripts.ShieldController$$UpdateHealthText
void Rotatelab_Scripts_ShieldController__UpdateHealthText (Rotatelab_Scripts_ShieldController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShieldController$$UpdateHealthText
   void Rotatelab_Scripts_ShieldController__UpdateHealthText (Rotatelab_Scripts_ShieldController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ShieldController__UpdateHealthText_105084c(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_010608b8 + 0x1060860);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010608bc + 0x1060874));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x2c),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_010608c0 + 0x10608a8),uVar2,0,0,0,0,0,0
             ,0);
  return;
}

