/* IL2CPP: Rotatelab.Scripts.MacheteController$$UpdateAnimationState
void Rotatelab_Scripts_MacheteController__UpdateAnimationState (Rotatelab_Scripts_MacheteController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MacheteController$$UpdateAnimationState
   void Rotatelab_Scripts_MacheteController__UpdateAnimationState
   (Rotatelab_Scripts_MacheteController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_MacheteController__UpdateAnimationState_103e9b4
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0104ea9c + 0x104e9d4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa0 + 0x104e9e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa4 + 0x104e9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa8 + 0x104ea00));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x70) != param_2) {
    *(int *)(param_1 + 0x70) = param_2;
    if (param_2 == 2) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0104eab4 + 0x104ea84),0,0,0);
    }
    else {
      if (param_2 == 1) {
        puVar1 = *(undefined4 **)(_UNK_0104eab0 + 0x104ea48);
      }
      else {
        if (param_2 != 0) {
          return;
        }
        puVar1 = *(undefined4 **)(_UNK_0104eaac + 0x104ea3c);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,0x3d4ccccd);
    }
  }
  return;
}

