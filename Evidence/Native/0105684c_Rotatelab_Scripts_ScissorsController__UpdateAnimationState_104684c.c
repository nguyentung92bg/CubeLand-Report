/* IL2CPP: Rotatelab.Scripts.ScissorsController$$UpdateAnimationState
void Rotatelab_Scripts_ScissorsController__UpdateAnimationState (Rotatelab_Scripts_ScissorsController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ScissorsController$$UpdateAnimationState
   void Rotatelab_Scripts_ScissorsController__UpdateAnimationState
   (Rotatelab_Scripts_ScissorsController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_ScissorsController__UpdateAnimationState_104684c
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01056944 + 0x105686c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056948 + 0x1056880));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105694c + 0x105688c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056950 + 0x1056898));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x6c) != param_2) {
    *(int *)(param_1 + 0x6c) = param_2;
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_0105695c + 0x105692c),0,0,0);
    }
    else {
      if (param_2 == 2) {
        uVar2 = 0x3d4ccccd;
        puVar1 = *(undefined4 **)(_UNK_01056958 + 0x10568f0);
      }
      else {
        if (param_2 != 1) {
          return;
        }
        uVar2 = 0x3e4ccccd;
        puVar1 = *(undefined4 **)(_UNK_01056954 + 0x10568dc);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,uVar2,0);
    }
  }
  return;
}

