/* IL2CPP: Rotatelab.Scripts.SwordController$$UpdateAnimationState
void Rotatelab_Scripts_SwordController__UpdateAnimationState (Rotatelab_Scripts_SwordController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SwordController$$UpdateAnimationState
   void Rotatelab_Scripts_SwordController__UpdateAnimationState
   (Rotatelab_Scripts_SwordController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_SwordController__UpdateAnimationState_1046960
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01056a50 + 0x1056980);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056a54 + 0x1056994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056a58 + 0x10569a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056a5c + 0x10569ac));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x74) != param_2) {
    *(int *)(param_1 + 0x74) = param_2;
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_01056a68 + 0x1056a38),0,0,0);
    }
    else {
      if (param_2 == 2) {
        puVar1 = *(undefined4 **)(_UNK_01056a64 + 0x10569f4);
      }
      else {
        if (param_2 != 1) {
          return;
        }
        puVar1 = *(undefined4 **)(_UNK_01056a60 + 0x10569e8);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,0x3d4ccccd,0);
    }
  }
  return;
}

