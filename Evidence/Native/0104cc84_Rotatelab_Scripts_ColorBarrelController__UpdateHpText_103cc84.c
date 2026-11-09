/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$UpdateHpText
void Rotatelab_Scripts_ColorBarrelController__UpdateHpText (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBarrelController$$UpdateHpText
   void Rotatelab_Scripts_ColorBarrelController__UpdateHpText
   (Rotatelab_Scripts_ColorBarrelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBarrelController__UpdateHpText_103cc84(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_0104ccf0 + 0x104cc98);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104ccf4 + 0x104ccac));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x30),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (*(int *)(param_1 + 0x18),**(undefined4 **)(_UNK_0104ccf8 + 0x104cce0),uVar2,0,0,0,0,0,0
             ,0);
  return;
}

