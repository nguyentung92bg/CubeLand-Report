/* IL2CPP: Rotatelab.Scripts.KeyController$$UpdateAnimationState
void Rotatelab_Scripts_KeyController__UpdateAnimationState (Rotatelab_Scripts_KeyController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.KeyController$$UpdateAnimationState
   void Rotatelab_Scripts_KeyController__UpdateAnimationState (Rotatelab_Scripts_KeyController_o*
   __this, int32_t state, bool smoothTransition, const MethodInfo* method); */

void Rotatelab_Scripts_KeyController__UpdateAnimationState_103dcdc
               (int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0104dddc + 0x104dcfc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dde0 + 0x104dd10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dde4 + 0x104dd1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104dde8 + 0x104dd28));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x68) != param_2) {
    *(int *)(param_1 + 0x68) = param_2;
    if (param_2 == 3) {
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_1,**(undefined4 **)(_UNK_0104ddf4 + 0x104ddcc),param_3,0x3d4ccccd);
    }
    else {
      if (param_2 == 2) {
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = 1;
        puVar1 = *(undefined4 **)(_UNK_0104ddf0 + 0x104dd9c);
      }
      else {
        if (param_2 != 1 || param_3 != 0) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = 0;
        puVar1 = *(undefined4 **)(_UNK_0104ddec + 0x104dd7c);
      }
      UnityEngine_Animator__Play_35915ac(iVar3,*puVar1,uVar2,0,0);
    }
  }
  return;
}

