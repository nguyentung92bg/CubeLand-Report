/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$UpdateRemainingBlastersText
void Rotatelab_Scripts_BlasterGeneratorController__UpdateRemainingBlastersText (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$UpdateRemainingBlastersText
   void Rotatelab_Scripts_BlasterGeneratorController__UpdateRemainingBlastersText
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController__UpdateRemainingBlastersText_103b1c0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  uint in_fpscr;
  
  pcVar2 = (char *)(_UNK_0104b234 + 0x104b1d4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b238 + 0x104b1e8));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x48);
  uVar1 = Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount_103adac(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (iVar3,**(undefined4 **)(_UNK_0104b23c + 0x104b224),uVar1,0,0,0,0,0,0,0);
  return;
}

