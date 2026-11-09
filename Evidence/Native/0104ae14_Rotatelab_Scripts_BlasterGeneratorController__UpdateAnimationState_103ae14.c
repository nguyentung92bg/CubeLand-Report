/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$UpdateAnimationState
void Rotatelab_Scripts_BlasterGeneratorController__UpdateAnimationState (Rotatelab_Scripts_BlasterGeneratorController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$UpdateAnimationState
   void Rotatelab_Scripts_BlasterGeneratorController__UpdateAnimationState
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, int32_t state, bool smoothTransition,
   const MethodInfo* method); */

void Rotatelab_Scripts_BlasterGeneratorController__UpdateAnimationState_103ae14
               (int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_0104aea8 + 0x104ae34);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104aeac + 0x104ae48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104aeb0 + 0x104ae54));
    *pcVar1 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = **(undefined4 **)(_UNK_0104aeb4 + 0x104ae6c);
  if (param_2 == 1) {
    uVar2 = **(undefined4 **)(_UNK_0104aeb8 + 0x104ae78);
  }
  Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550(param_1,uVar2,param_3,0x3d4ccccd)
  ;
  return;
}

