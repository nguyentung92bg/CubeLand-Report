/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$get_RemainingBlasterCount
int32_t Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$get_RemainingBlasterCount
   int32_t Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Scripts_BlasterGeneratorController__get_RemainingBlasterCount_103adac(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0104adf4 + 0x104adc0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104adf8 + 0x104add4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc);
}

