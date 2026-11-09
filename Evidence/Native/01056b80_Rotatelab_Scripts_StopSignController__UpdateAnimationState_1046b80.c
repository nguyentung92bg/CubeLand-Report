/* IL2CPP: Rotatelab.Scripts.StopSignController$$UpdateAnimationState
void Rotatelab_Scripts_StopSignController__UpdateAnimationState (Rotatelab_Scripts_StopSignController_o* __this, int32_t state, bool smoothTransition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.StopSignController$$UpdateAnimationState
   void Rotatelab_Scripts_StopSignController__UpdateAnimationState
   (Rotatelab_Scripts_StopSignController_o* __this, int32_t state, bool smoothTransition, const
   MethodInfo* method); */

void Rotatelab_Scripts_StopSignController__UpdateAnimationState_1046b80
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01056ce8 + 0x1056ba0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cec + 0x1056bb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf0 + 0x1056bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf4 + 0x1056bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cf8 + 0x1056bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01056cfc + 0x1056be4));
    *pcVar3 = '\x01';
  }
  if (param_2 == 2) {
    if (*(int *)(**(int **)(_UNK_01056d00 + 0x1056c04) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694(param_1 + 0x50,0);
  }
  if (*(int *)(param_1 + 0x44) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x44) = param_2;
  switch(param_2) {
  case 1:
    puVar1 = *(undefined4 **)(&UNK_01056c64 + _UNK_01056d04);
    break;
  case 2:
    puVar1 = *(undefined4 **)(&UNK_01056cc4 + _UNK_01056d08);
    break;
  case 3:
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = *(undefined4 **)(&UNK_01056c80 + _UNK_01056d0c);
    goto code_r0x01056c98;
  case 4:
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = *(undefined4 **)(&UNK_01056c9c + _UNK_01056d10);
code_r0x01056c98:
    UnityEngine_Animator__Play_35915ac(iVar2,*puVar1,0,0,0);
  default:
    goto LAB_01056ce0;
  }
  Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
            (param_1,*puVar1,param_3,0x3d4ccccd,0);
LAB_01056ce0:
  return;
}

