/* IL2CPP: Rotatelab.Scripts.PropellerController$$UpdateAnimationState
void Rotatelab_Scripts_PropellerController__UpdateAnimationState (Rotatelab_Scripts_PropellerController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PropellerController$$UpdateAnimationState
   void Rotatelab_Scripts_PropellerController__UpdateAnimationState
   (Rotatelab_Scripts_PropellerController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_PropellerController__UpdateAnimationState_1046a6c
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01056b64 + 0x1056a8c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056b68 + 0x1056aa0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056b6c + 0x1056aac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056b70 + 0x1056ab8));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x54) != param_2) {
    *(int *)(param_1 + 0x54) = param_2;
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Animator__Play_35915ac
                (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_01056b7c + 0x1056b4c),0,0,0);
    }
    else {
      if (param_2 == 2) {
        uVar2 = 0x3d4ccccd;
        puVar1 = *(undefined4 **)(_UNK_01056b78 + 0x1056b10);
      }
      else {
        if (param_2 != 1) {
          return;
        }
        uVar2 = 0x3e19999a;
        puVar1 = *(undefined4 **)(_UNK_01056b74 + 0x1056afc);
      }
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,*puVar1,param_3,uVar2,0);
    }
  }
  return;
}

