/* IL2CPP: Rotatelab.Scripts.LockController$$UpdateAnimationState
void Rotatelab_Scripts_LockController__UpdateAnimationState (Rotatelab_Scripts_LockController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LockController$$UpdateAnimationState
   void Rotatelab_Scripts_LockController__UpdateAnimationState (Rotatelab_Scripts_LockController_o*
   __this, int32_t state, bool smoothTransition, const MethodInfo* method); */

void Rotatelab_Scripts_LockController__UpdateAnimationState_103e77c
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0104e864 + 0x104e79c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e868 + 0x104e7b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e86c + 0x104e7bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104e870 + 0x104e7c8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x40) != param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0104e87c + 0x104e84c),0,0,0);
    }
    else {
      if (param_2 == 2) {
        puVar1 = *(undefined4 **)(_UNK_0104e878 + 0x104e810);
      }
      else {
        if (param_2 != 1) {
          return;
        }
        puVar1 = *(undefined4 **)(_UNK_0104e874 + 0x104e804);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,0x3d4ccccd);
    }
  }
  return;
}

