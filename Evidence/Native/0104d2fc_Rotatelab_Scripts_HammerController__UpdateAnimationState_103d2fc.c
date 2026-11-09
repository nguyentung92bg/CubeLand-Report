/* IL2CPP: Rotatelab.Scripts.HammerController$$UpdateAnimationState
void Rotatelab_Scripts_HammerController__UpdateAnimationState (Rotatelab_Scripts_HammerController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.HammerController$$UpdateAnimationState
   void Rotatelab_Scripts_HammerController__UpdateAnimationState
   (Rotatelab_Scripts_HammerController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_HammerController__UpdateAnimationState_103d2fc
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0104d3e4 + 0x104d31c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3e8 + 0x104d330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3ec + 0x104d33c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3f0 + 0x104d348));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x80) != param_2) {
    *(int *)(param_1 + 0x80) = param_2;
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0104d3fc + 0x104d3cc),0,0,0);
    }
    else {
      if (param_2 == 2) {
        puVar1 = *(undefined4 **)(_UNK_0104d3f8 + 0x104d390);
      }
      else {
        if (param_2 != 1) {
          return;
        }
        puVar1 = *(undefined4 **)(_UNK_0104d3f4 + 0x104d384);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,0x3d4ccccd);
    }
  }
  return;
}

